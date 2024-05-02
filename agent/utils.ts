/*
 * Helper functions to convert IDA addresses to memory addresses and vice versa.
 */

const idaBaseAddress = ptr("0x1000D4000");
const baseAddressInMemory = Module.getBaseAddress("Clash of Clans");

export function idaAddressToMemoryAddress(idaAddress: NativePointer) {
    var offset = idaAddress.sub(idaBaseAddress);
    var result = baseAddressInMemory.add(offset);
    return result;
}

export function memoryAddressToIdaAddress(memoryAddress: NativePointer) {
    var offset = memoryAddress.sub(baseAddressInMemory);
    var result = idaBaseAddress.add(offset);
    return result;
}
