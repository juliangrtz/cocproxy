import { Offsets } from "./offsets.js";
import { Packet } from "./packet.js";

// https://developer.apple.com/library/archive/documentation/System/Conceptual/ManPages_iPhoneOS/man2/recv.2.html
const recvPtr = Module.getExportByName("libSystem.B.dylib", "recv");

// https://developer.apple.com/library/archive/documentation/System/Conceptual/ManPages_iPhoneOS/man2/send.2.html
const sendPtr = Module.getExportByName("libSystem.B.dylib", "send");

let sendInterceptor: InvocationListener, recvInterceptor: InvocationListener;

Process.setExceptionHandler(function (exp: ExceptionDetails) {
    console.error(`!!! ${exp.type} @ ${exp.address} !!!`);

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
                console.log("10100 (ClientHello)");
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
                    console.log("20100 (ServerHello)");
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
    Interceptor.attach(Offsets.MESSAGING_SEND_PEPPER_LOGIN, {
        onEnter(args) {
            var payload = args[0];
            var length = args[1].toInt32();

            console.log("10101 (Login)");
            send("10101_Login", payload.readByteArray(length));
        }
    });
}

function hookLoginOkDecrypter() {
    let buffer = ptr(0);
    let length = 0;

    Interceptor.attach(Offsets.PEPPER_CRYPTO_BOX, {
        onEnter(args) {
            // PepperCrypto::box_open()
            buffer = args[2];
            length = args[3].toInt32();
        },
        onLeave(_) {
            console.log("23654 (LoginOk)");
            send("23654_LoginOk", buffer.readByteArray(length));

            console.log("--------------");

            Interceptor.detachAll();

            // Give Frida some time to detach
            Thread.sleep(0.25);

            hookPepperEncrypter();
            hookPepperDecrypter();
        }
    });
}

function hookPepperEncrypter() {
    let sendBufferPtr = ptr(0);
    let payloadBuffer = ptr(0);
    let payloadLength = 0;

    Interceptor.attach(Offsets.PEPPER_ENCRYPTER_ENCRYPT, {
        onEnter(args) {
            payloadBuffer = args[0];
            payloadLength = args[1].toInt32();
        },
        onLeave(_) {
            Interceptor.attach(sendPtr, {
                onEnter(args) {
                    sendBufferPtr = args[1];
                },
                onLeave(retval) {
                    if (retval.toInt32() == -1) return;

                    const packet = Packet.deserialize(sendBufferPtr);
                    if (packet.messageId < 10000 || packet.messageId > 29999) return;

                    console.log(packet.messageId + "(" + packet.message + ")");
                    send(packet.messageId + "_" + packet.message, payloadBuffer.readByteArray(payloadLength));
                }
            });
        }
    });
}

function hookPepperDecrypter() {
    let recvBufferPtr = ptr(0);

    Interceptor.attach(recvPtr, {
        onEnter(args) {
            recvBufferPtr = args[1];
        },
        onLeave(retval) {
            if (retval.toInt32() == -1) return;

            const packet = Packet.deserialize(recvBufferPtr);
            if (packet.messageId < 10000 || packet.messageId > 29999) return;

            let payloadBuffer = ptr(0);
            let payloadLength = 0;
            Interceptor.attach(Offsets.PEPPER_ENCRYPTER_DECRYPT, {
                onEnter(args) {
                    payloadBuffer = args[2];
                    payloadLength = args[3].toInt32();
                },

                onLeave(_) {
                    console.log(packet.messageId + "(" + packet.message + ")");
                    send(packet.messageId + "_" + packet.message, payloadBuffer.readByteArray(payloadLength));
                }
            });
        }
    });
}

hookSend();
hookRecv();
