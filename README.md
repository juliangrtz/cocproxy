# cocproxy

MITM proxy for the current iOS version of Clash of Clans (v16.253). It is currently very unstable and only intended to quickly get a few decrypted payloads.

## Requirements

- Python3
- Node.js
- Frida
- Jailbroken iOS device
- Patched Clash of Clans version without Promon Shield

## Usage

```
git clone https://github.com/juliangrtz/cocproxy && cd cocproxy
npm install
python proxy.py
```

To rebuild the proxy on the fly:
```
npm run watch
```

## Sample output

```shell
ClientHello (10100)
00000007  89 00 00 00 10 00 00 00 00 00 00 00 fd 00 00 00  ................
00000017  28 38 66 63 30 32 34 32 64 34 63 35 65 62 35 30  (8fc0242d4c5eb50
00000027  66 32 65 64 62 31 61 35 63 32 66 66 39 63 36 31  f2edb1a5c2ff9c61
00000037  34 35 61 39 61 63 36 61 34 00 00 00 01 00 00 00  45a9ac6a4.......
00000047  01                                               .

ServerHello (20100)
00000007  00 00 00 00 00 00 00 00 00 00 00 00 00 00 68 0a  ..............h.
00000017  99 f4 01 00 00                                   .....

Login (10101)
102c15eb8  00 00 00 28 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??  ...CENSOREDCENSO
102c15ec8  ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??  REDCENSOREDCENSO
102c15ed8  ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 00 00 00 10  REDCENSOREDC....
102c15ee8  00 00 00 00 00 00 00 fd 00 00 00 28 38 66 63 30  ...........(8fc0
102c15ef8  32 34 32 64 34 63 35 65 62 35 30 66 32 65 64 62  242d4c5eb50f2edb
102c15f08  31 61 35 63 32 66 66 39 63 36 31 34 35 61 39 61  1a5c2ff9c6145a9a
102c15f18  63 36 61 34 ff ff ff ff ff ff ff ff ff ff ff ff  c6a4............
102c15f28  00 00 00 07 69 50 61 64 35 2c 33 00 1e 84 80 00  ....iPad5,3.....
102c15f38  00 00 05 65 6E 2D 55 53 ff ff ff ff 00 00 00 06  ...de-DE........
102c15f48  31 35 2e 38 2e 32 00 00 00 00 00 00 00 00 00 00  15.8.2..........

...
```

## FAQ

- Can this be used to cheat or hack Clash of Clans?

    No. The official server will detect manipulations and you will get an "out of sync" error.

- Can this be used to write a private server for Clash of Clans?

    Yes. Have fun implementing Clash of Clans's custom libsodium crypto!

- How can I contribute?
  - Update the offsets for new versions (agent/offsets.ts)
  - Add new packet IDs (agent/packet.ts)
  - Improve stability
