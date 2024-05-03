import { Offsets } from "./offsets.js";
import { Messages, Packet } from "./packet.js";

let recvInterceptor: InvocationListener;
let sendInterceptor: InvocationListener;
let loginInterceptor: InvocationListener;
let loginOkInterceptor: InvocationListener;

// https://developer.apple.com/library/archive/documentation/System/Conceptual/ManPages_iPhoneOS/man2/recv.2.html
const recvPtr = Module.getExportByName("libSystem.B.dylib", "recv");

// https://developer.apple.com/library/archive/documentation/System/Conceptual/ManPages_iPhoneOS/man2/send.2.html
const sendPtr = Module.getExportByName("libSystem.B.dylib", "send");

Process.setExceptionHandler(function (exp: ExceptionDetails) {
    console.error(`${exp.type} @ ${exp.address}`);

    let backtrace = Thread.backtrace(exp.context, Backtracer.ACCURATE).map(DebugSymbol.fromAddress);
    for (let i in backtrace)
        console.error(backtrace[i]);

    return false;
});

function hookSend() {
    let bufferPtr = ptr(0);

    sendInterceptor = Interceptor.attach(sendPtr, {
        onEnter(args) {
            bufferPtr = args[1];
        },
        onLeave(retval) {
            if (retval.toInt32() == -1) return;

            const packet = Packet.deserialize(bufferPtr);
            if (packet.messageId < 10000 || packet.messageId > 29999) return;

            if (packet.messageId == 10100) {
                console.log("ClientHello (10100)");
                send("10100_ClientHello", packet.encryptedMessage); // 10100 is not encrypted
            }
        }
    });
}

function hookRecv() {
    let recvBuffer = ptr(0);

    recvInterceptor = Interceptor.attach(recvPtr, {
        onEnter(args) {
            recvBuffer = args[1];
        },

        onLeave(retval) {
            if (retval.toInt32() == -1) return;

            const packet = Packet.deserialize(recvBuffer);
            if (packet.messageId < 10000 || packet.messageId > 29999) return;

            switch (packet.message) {
                case "ServerHello":
                    console.log("ServerHello (20100)");
                    send("20100_ServerHello", packet.encryptedMessage); // 20100 is not encrypted
                    hookLogin();
                    break;
                case "LoginOk":
                    hookLoginOkDecrypter();
                    break;
                default:
                    break;
            }
        }
    });
}

function hookLogin() {
    loginInterceptor = Interceptor.attach(Offsets.MESSAGING_SEND_PEPPER_LOGIN, {
        onEnter(args) {
            var payload = args[0].add(24).add(32); // Skip snonce and string from 20100
            var length = args[1].toInt32();

            console.log("Login (10101)");
            send("10101_Login", payload.readByteArray(length));
        }
    });
}

function hookLoginOkDecrypter() {
    loginInterceptor.detach();

    let buffer = ptr(0);
    let length = 0;

    loginOkInterceptor = Interceptor.attach(Offsets.PEPPER_CRYPTO_BOX, {
        onEnter(args) {
            // PepperCrypto::box_open()
            buffer = args[2];
            length = args[3].toInt32();
        },
        onLeave(_) {
            console.error("LoginOk (23654)");
            send("23654_LoginOk", buffer.readByteArray(length));

            hookPepperEncrypter();
            hookPepperDecrypter();
        }
    });
}

function hookPepperEncrypter() {
    loginOkInterceptor.detach();
    sendInterceptor.detach();
    recvInterceptor.detach();
    Interceptor.detachAll();

    Interceptor.attach(Offsets.PEPPER_ENCRYPTER_ENCRYPT, {
        onEnter(args) {
            let buffer = args[0];
            let length = args[1].toInt32();
            send("1xxxx", buffer.readByteArray(length));
        }
    });
}

function hookPepperDecrypter() {
    let payloadBuffer = ptr(0);
    let length = 0;

    Interceptor.attach(Offsets.PEPPER_ENCRYPTER_DECRYPT, {
        onEnter(args) {
            payloadBuffer = args[2];
            length = args[3].toInt32();
        },

        onLeave(_) {
            send("2xxxx", payloadBuffer.readByteArray(length));
        }
    });
}

hookSend();
hookRecv();
