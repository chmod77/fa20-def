#!/usr/bin/env python3
"""
Decrypt/encrypt a Subaru Hitachi SH72543R ROM image.

Port of FastECU's calculate_payload() (flash_ecu_subaru_hitachi_sh72543r_can.cpp):
a 4-round Feistel over 32-bit big-endian blocks, same construction as the
seed-key routine in seedkey.py -- only the round keys differ.

  ./romdecrypt.py lf6a401a_ori.hex out.bin          decrypt (default)
  ./romdecrypt.py plain.bin out.hex --encrypt       re-encrypt for flashing
"""
import argparse, sys

IT = bytes([
    0x5,0x6,0x7,0x1,0x9,0xC,0xD,0x8, 0xA,0xD,0x2,0xB,0xF,0x4,0x0,0x3,
    0xB,0x4,0x6,0x0,0xF,0x2,0xD,0x9, 0x5,0xC,0x1,0xA,0x3,0xD,0xE,0x8,
])
K_DECRYPT = (0x5FB1, 0xA7CA, 0x42DA, 0xB740)
K_ENCRYPT = (0xB740, 0x42DA, 0xA7CA, 0x5FB1)


def transform(block, keys):
    """One 32-bit block through the 4-round network."""
    d = block
    for ki in range(4):
        wgen = d & 0xFFFF                 # low half generates the index
        wenc = (d >> 16) & 0xFFFF         # high half gets encrypted
        index = (wgen ^ keys[ki]) & 0xFFFF
        index = (index + (index << 16)) & 0xFFFFFFFF
        ek = 0
        for n in range(4):
            ek = (ek + (IT[(index >> (n * 4)) & 0x1F] << (n * 4))) & 0xFFFF
        ek = ((ek >> 3) + (ek << 13)) & 0xFFFF
        d = (((ek ^ wenc) & 0xFFFF) + ((wgen << 16) & 0xFFFF0000)) & 0xFFFFFFFF
    return ((d >> 16) + ((d << 16) & 0xFFFFFFFF)) & 0xFFFFFFFF


def convert(data, keys):
    n = len(data) & ~3
    out = bytearray(n)
    for i in range(0, n, 4):
        b = int.from_bytes(data[i:i + 4], "big")
        out[i:i + 4] = transform(b, keys).to_bytes(4, "big")
    if len(data) > n:                      # keep any ragged tail verbatim
        out += data[n:]
    return bytes(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("infile"); ap.add_argument("outfile")
    ap.add_argument("--encrypt", action="store_true")
    ap.add_argument("--offset", type=lambda x: int(x, 0), default=0,
                    help="skip a leading header before converting")
    a = ap.parse_args()
    raw = open(a.infile, "rb").read()
    head, body = raw[:a.offset], raw[a.offset:]
    out = head + convert(body, K_ENCRYPT if a.encrypt else K_DECRYPT)
    open(a.outfile, "wb").write(out)
    print(f"{'encrypted' if a.encrypt else 'decrypted'} {len(body):,} bytes -> {a.outfile}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
