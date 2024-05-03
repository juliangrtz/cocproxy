import { idaAddressToMemoryAddress } from "./utils.js";

/**
 * These offsets will change from version to version and need to be updated accordingly.
 */

// v16.253
export class Offsets {
    static MESSAGING_ONRECEIVE = idaAddressToMemoryAddress(ptr("0x100408CF4"));
    static MESSAGING_SEND = idaAddressToMemoryAddress(ptr("0x100D6F23C"));
    static MESSAGING_SEND_PEPPER_LOGIN = idaAddressToMemoryAddress(ptr("0x100D7DD94"));
    static MESSAGING_WRITE_HEADER = idaAddressToMemoryAddress(ptr("0x100D70F30"));
    static PEPPER_CRYPTO_BOX_OPEN = idaAddressToMemoryAddress(ptr("0x1001ACC04"));
    static PEPPER_CRYPTO_BOX = idaAddressToMemoryAddress(ptr("0x100D7DE44"));
    static PEPPER_ENCRYPTER_ENCRYPT = idaAddressToMemoryAddress(ptr("0x100D7DEEC"));
    static PEPPER_ENCRYPTER_DECRYPT = idaAddressToMemoryAddress(ptr("0x100B1509C"));
}
