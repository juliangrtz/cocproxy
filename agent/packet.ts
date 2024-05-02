export enum Direction {
    ClientToServer,
    ServerToClient
}

export class Packet {
    message: string;
    messageId: number;
    direction: Direction;
    payloadLength: number;
    version: number;
    encryptedMessage: ArrayBuffer | null;

    constructor(messageId: number, direction: Direction, payloadLength: number, version: number, encryptedMessage: ArrayBuffer | null) {
        this.messageId = messageId;
        this.direction = direction;
        this.message = Messages[messageId];
        this.payloadLength = payloadLength;
        this.version = version;
        this.encryptedMessage = encryptedMessage;
    }

    static deserialize(packetPtr: NativePointer): Packet {
        // https://github.com/clugh/cocdp/wiki/Protocol#protocol
        const messageId = packetPtr.readU8() << 8 | packetPtr.add(1).readU8();
        const direction = (messageId >= 10000 && messageId < 20000) ? Direction.ClientToServer : Direction.ServerToClient;
        const payloadLength = packetPtr.add(2).readU8() << 16 | packetPtr.add(3).readU8() << 8 | packetPtr.add(4).readU8();
        const version = packetPtr.add(5).readU8() << 8 | packetPtr.add(6).readU8();
        const encryptedMessage = packetPtr.add(7).readByteArray(payloadLength);

        return new Packet(messageId, direction, payloadLength, version, encryptedMessage);
    }

    log() {
        let hexdumpOptions: HexdumpOptions = {
            ansi: true,
            header: false,
            offset: 7,
            length: this.payloadLength
        };

        console.warn(hexdump(this.encryptedMessage ?? new ArrayBuffer(0), hexdumpOptions));
        console.log();
    }
}


/*
The packet IDs can be reversed by simply playing the game and testing different functionalities.
Also they can be reversed through the function MessageManager::receiveMessage (c.f. reversing/messagemanager_receivemessage.c).
Alternatively, one can search for functions which have the following structure in the game's executable and x-ref to the packet's vftable:

MOV W0, #packetId
RET
*/
export const Messages: Record<number, string> = {
    // Client Messages (10xxx)
    '10100': 'ClientHello',
    '10101': 'Login',
    '10108': 'KeepAlive',
    '11734': 'RequestOwnProfileData',
    '15046': 'BaseEndClientTurn',

    // Server Messages (20xxx)
    '20100': 'ServerHello',
    '20103': 'LoginFailed',
    '23654': 'LoginOk',
    '25195': 'OwnHomeData',
    '21940': 'EnemyHomeData',
    '20911': 'PlayerReportStatus',
    '20108': 'KeepAliveOk',
    '26443': 'OwnProfileData',
    '25418': 'AttackReplayData'
};
