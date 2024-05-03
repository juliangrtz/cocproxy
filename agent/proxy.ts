import { Offsets } from "./offsets.js";
import { Packet } from "./packet.js";

function hookSend() {
    // https://developer.apple.com/library/archive/documentation/System/Conceptual/ManPages_iPhoneOS/man2/send.2.html
    const sendPtr = Module.getExportByName("libSystem.B.dylib", "send");
    Interceptor.attach(sendPtr, {
        onEnter(args) {
            const bufferPtr = args[1];
            const length = args[2].toInt32();
            if (length <= 7) return;

            const packet = Packet.deserialize(bufferPtr);
            if (packet.messageId < 10000 || packet.messageId > 29999) return;

            console.error(`${packet.message} (${packet.messageId})`);

            switch (packet.message) {
                case "ClientHello":
                    packet.log();
                    break;
                default:
                    break;
            }
        }
    });
}

function hookRecv() {
    // https://developer.apple.com/library/archive/documentation/System/Conceptual/ManPages_iPhoneOS/man2/recv.2.html
    const recvPtr = Module.getExportByName("libSystem.B.dylib", "recv");
    let recvBuffer = ptr(0);

    Interceptor.attach(recvPtr, {
        onEnter(args) {
            recvBuffer = args[1];
        },

        onLeave(retval) {
            if (retval.toInt32() == -1) return;

            const packet = Packet.deserialize(recvBuffer);
            if (packet.messageId < 10000 || packet.messageId > 29999) return;

            console.error(`${packet.message} (${packet.messageId})`);

            switch (packet.message) {
                case "ServerHello":
                    packet.log();
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
            console.log(hexdump(args[0].add(24).add(32), { ansi: true, header: false, length: args[1].toInt32() }));
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
            console.log(hexdump(buffer, { ansi: true, header: false, length: length }));
            console.log();

            hookPepperEncrypter();
            hookPepperDecrypter();
        }
    });
}

function hookPepperEncrypter() {
    Interceptor.attach(Offsets.PEPPER_ENCRYPTER_ENCRYPT, {
        onEnter(args) {
            console.log(hexdump(args[0], { ansi: true, header: false, length: args[1].toInt32() }));
            console.log();
        }
    });
}

function hookPepperDecrypter() {
    let buffer = ptr(0);
    let length = 0;

    Interceptor.attach(Offsets.PEPPER_ENCRYPTER_DECRYPT, {
        onEnter(args) {
            buffer = args[2];
            length = args[3].toInt32();
        },

        onLeave(_) {
            console.log(hexdump(buffer, { ansi: true, header: false, length: length }));
            console.log();
        }
    });
}

hookSend();
hookRecv();
hookLogin();

// Interceptor.attach(Offsets.MESSAGING_SEND, {
//     onEnter(args) {
//         //console.log(hexdump(args[1], {length: 200}))
//         //console.log(hexdump((args[1].add(40)).readPointer().readPointer(), {length: 2}))

//         var getMessageTypeFunc = new NativeFunction(args[1].add(40), 'long', []);
//         var messageId = getMessageTypeFunc();
//         console.log("Messaging::send " + messageId);
//     }
// });
