#!/usr/bin/env python3
"""
Minimal SH-2A interpreter, built on capstone for decode, just complete enough to
run the SecurityAccess key-derivation routine (0x75F66) out of the LF6A400J ROM.

Purpose: an OFFLINE ORACLE. Feed it the raw entropy the ECU would use, run the
exact ROM code, and read back the seed it would send AND the key it would expect.
Never touches the car; used only to validate a tester-side key function.

  from sh2emu import Emu
  e = Emu("LF6A400J_...bin")
  seed, key = e.derive(entropy=0x11223344, level=1)
"""
import struct, sys
from capstone import *


class Emu:
    RAM_LO = 0xFFFE0000
    RAM_HI = 0x100000000

    def __init__(self, rompath):
        self.rom = bytearray(open(rompath, "rb").read())
        self.ram = bytearray(self.RAM_HI - self.RAM_LO)
        self.md = Cs(CS_ARCH_SH, CS_MODE_SH2A | CS_MODE_BIG_ENDIAN)
        self.md.detail = False
        self._cache = {}                       # addr -> (mnem, ops, size)

    # ---- memory -------------------------------------------------------------
    def _region(self, a):
        if a < len(self.rom):
            return self.rom, a
        if self.RAM_LO <= a < self.RAM_HI:
            return self.ram, a - self.RAM_LO
        raise RuntimeError(f"bad addr 0x{a:08X}")

    def r8(self, a):
        m, o = self._region(a); return m[o]

    def r16(self, a):
        m, o = self._region(a); return (m[o] << 8) | m[o + 1]

    def r32(self, a):
        m, o = self._region(a)
        return (m[o] << 24) | (m[o + 1] << 16) | (m[o + 2] << 8) | m[o + 3]

    def w8(self, a, v):
        m, o = self._region(a); m[o] = v & 0xFF

    def w16(self, a, v):
        m, o = self._region(a); m[o] = (v >> 8) & 0xFF; m[o + 1] = v & 0xFF

    def w32(self, a, v):
        m, o = self._region(a)
        m[o] = (v >> 24) & 0xFF; m[o + 1] = (v >> 16) & 0xFF
        m[o + 2] = (v >> 8) & 0xFF; m[o + 3] = v & 0xFF

    # ---- helpers ------------------------------------------------------------
    @staticmethod
    def s8(v):  return v - 0x100 if v & 0x80 else v
    @staticmethod
    def s16(v): return v - 0x10000 if v & 0x8000 else v
    @staticmethod
    def s32(v): return v - 0x100000000 if v & 0x80000000 else v

    def _decode(self, pc):
        c = self._cache.get(pc)
        if c is None:
            ins = next(self.md.disasm(bytes(self.rom[pc:pc + 2]), pc))
            c = (ins.mnemonic, ins.op_str, ins.size)
            self._cache[pc] = c
        return c

    # ---- execution ----------------------------------------------------------
    def run(self, pc, R, maxsteps=200000):
        """Execute until an rts returns to sentinel 0. R is a 16-int list."""
        self.R = R
        self.PR = 0
        self.T = 0
        self.pc = pc
        steps = 0
        while True:
            steps += 1
            if steps > maxsteps:
                raise RuntimeError("runaway")
            m, ops, _ = self._decode(self.pc)
            # delayed control-transfer ops
            if m in ("bra", "bsr", "rts", "jmp", "jsr", "bf/s", "bt/s", "braf", "bsrf"):
                take = True
                target = None
                if m == "bra":
                    target = int(ops, 16)
                elif m == "bsr":
                    target = int(ops, 16); self.PR = self.pc + 4
                elif m == "rts":
                    target = self.PR
                elif m in ("jmp", "jsr"):
                    target = self.R[self._rn(ops)] & 0xFFFFFFFF
                    if m == "jsr": self.PR = self.pc + 4
                elif m == "bf/s":
                    take = (self.T == 0); target = int(ops, 16)
                elif m == "bt/s":
                    take = (self.T == 1); target = int(ops, 16)
                # execute delay slot
                ds_pc = self.pc + 2
                dm, dops, _ = self._decode(ds_pc)
                self._exec(dm, dops, ds_pc)
                if take:
                    if target == 0:          # returned to sentinel -> done
                        return
                    self.pc = target
                else:
                    self.pc = self.pc + 4
                continue
            # non-delayed conditional branches
            if m in ("bf", "bt"):
                cond = (self.T == 0) if m == "bf" else (self.T == 1)
                self.pc = int(ops, 16) if cond else self.pc + 2
                continue
            self._exec(m, ops, self.pc)
            self.pc += 2

    # ---- operand parsing ----------------------------------------------------
    @staticmethod
    def _rn(tok):
        tok = tok.strip()
        assert tok[0] == "r", tok
        return int(tok[1:])

    def _read_mem_operand(self, tok, size):
        """tok like @r5, @-r15, @r4+, @(12,r15), @(r0,r15), or absolute 0x.. ; returns (value, )"""
        raise NotImplementedError

    @staticmethod
    def _split_ops(ops):
        """Split on top-level commas only (commas inside @(...) are kept)."""
        out, depth, cur = [], 0, ""
        for ch in ops:
            if ch == "(":
                depth += 1; cur += ch
            elif ch == ")":
                depth -= 1; cur += ch
            elif ch == "," and depth == 0:
                out.append(cur.strip()); cur = ""
            else:
                cur += ch
        if cur.strip():
            out.append(cur.strip())
        return out

    def _exec(self, m, ops, pc):
        R = self.R
        parts = self._split_ops(ops) if ops else []

        def reg(t): return R[self._rn(t)] & 0xFFFFFFFF

        # ---- MOV family ----
        if m == "mov":
            src, dst = parts
            if src.startswith("#"):
                R[self._rn(dst)] = self.s8(int(src[1:], 0) & 0xFF) & 0xFFFFFFFF
            else:
                R[self._rn(dst)] = reg(src)
            return
        if m == "movt":
            R[self._rn(parts[0])] = self.T & 0xFFFFFFFF
            return
        if m in ("mov.b", "mov.w", "mov.l"):
            src, dst = parts
            sz = {"mov.b": 1, "mov.w": 2, "mov.l": 4}[m]
            # LOAD (dst is a register, src is memory/imm)
            if src.startswith("@") or src.startswith("0x"):
                val = self._load(src, sz)
                R[self._rn(dst)] = val & 0xFFFFFFFF
                return
            # STORE (src is a register, dst is memory)
            self._store(dst, reg(src), sz)
            return

        # ---- ALU ----
        if m == "add":
            a, d = parts
            if a.startswith("#"):
                R[self._rn(d)] = (reg(d) + self.s8(int(a[1:], 0) & 0xFF)) & 0xFFFFFFFF
            else:
                R[self._rn(d)] = (reg(d) + reg(a)) & 0xFFFFFFFF
            return
        if m == "sub":
            a, d = parts
            R[self._rn(d)] = (reg(d) - reg(a)) & 0xFFFFFFFF
            return
        if m == "extu.b":
            R[self._rn(parts[1])] = reg(parts[0]) & 0xFF
            return
        if m == "extu.w":
            R[self._rn(parts[1])] = reg(parts[0]) & 0xFFFF
            return
        if m == "exts.b":
            R[self._rn(parts[1])] = self.s8(reg(parts[0]) & 0xFF) & 0xFFFFFFFF
            return
        if m == "exts.w":
            R[self._rn(parts[1])] = self.s16(reg(parts[0]) & 0xFFFF) & 0xFFFFFFFF
            return
        if m == "and":
            a, d = parts
            if a.startswith("#"):
                R[0] = R[0] & (int(a[1:], 0) & 0xFF)
            else:
                R[self._rn(d)] = reg(d) & reg(a)
            return
        if m == "or":
            a, d = parts
            if a.startswith("#"):
                R[0] = R[0] | (int(a[1:], 0) & 0xFF)
            else:
                R[self._rn(d)] = reg(d) | reg(a)
            return
        if m == "xor":
            a, d = parts
            if a.startswith("#"):
                R[0] = R[0] ^ (int(a[1:], 0) & 0xFF)
            else:
                R[self._rn(d)] = reg(d) ^ reg(a)
            return
        if m == "not":
            R[self._rn(parts[1])] = (~reg(parts[0])) & 0xFFFFFFFF
            return

        # ---- shifts ----
        if m == "shll":  R[self._rn(parts[0])] = (reg(parts[0]) << 1) & 0xFFFFFFFF; return
        if m == "shll2": R[self._rn(parts[0])] = (reg(parts[0]) << 2) & 0xFFFFFFFF; return
        if m == "shll8": R[self._rn(parts[0])] = (reg(parts[0]) << 8) & 0xFFFFFFFF; return
        if m == "shll16":R[self._rn(parts[0])] = (reg(parts[0]) << 16) & 0xFFFFFFFF; return
        if m == "shlr":  R[self._rn(parts[0])] = (reg(parts[0]) >> 1); return
        if m == "shlr2": R[self._rn(parts[0])] = (reg(parts[0]) >> 2); return
        if m == "shlr8": R[self._rn(parts[0])] = (reg(parts[0]) >> 8); return
        if m == "shlr16":R[self._rn(parts[0])] = (reg(parts[0]) >> 16); return

        # ---- compares / test ----
        if m == "cmp/eq":
            a, b = parts
            if a.startswith("#"):
                self.T = 1 if (R[0] & 0xFFFFFFFF) == (self.s8(int(a[1:], 0) & 0xFF) & 0xFFFFFFFF) else 0
            else:
                self.T = 1 if reg(a) == reg(b) else 0
            return
        if m == "cmp/ge":
            a, b = parts
            self.T = 1 if self.s32(reg(b)) >= self.s32(reg(a)) else 0
            return
        if m == "cmp/gt":
            a, b = parts
            self.T = 1 if self.s32(reg(b)) > self.s32(reg(a)) else 0
            return
        if m == "cmp/hs":
            a, b = parts
            self.T = 1 if reg(b) >= reg(a) else 0
            return
        if m == "cmp/hi":
            a, b = parts
            self.T = 1 if reg(b) > reg(a) else 0
            return
        if m == "tst":
            a, b = parts
            if a.startswith("#"):
                self.T = 1 if (R[0] & (int(a[1:], 0) & 0xFF)) == 0 else 0
            else:
                self.T = 1 if (reg(a) & reg(b)) == 0 else 0
            return
        if m == "nop":
            return
        raise RuntimeError(f"unimpl opcode: {m} {ops} @0x{pc:05X}")

    # ---- load/store address modes ------------------------------------------
    def _load(self, tok, sz):
        if tok.startswith("0x"):                # pc-relative pool (absolute)
            a = int(tok, 16)
            v = self.r32(a) if sz == 4 else (self.r16(a) if sz == 2 else self.r8(a))
        elif tok.startswith("@("):
            body = tok[2:tok.index(")")]
            i, base = body.split(",")
            if i.strip().startswith("r"):       # @(r0,Rn)
                a = (self.R[self._rn(i)] + self.R[self._rn(base)]) & 0xFFFFFFFF
            else:                               # @(disp,Rn)   disp already in bytes
                a = (self.R[self._rn(base)] + int(i, 0)) & 0xFFFFFFFF
            v = self.r32(a) if sz == 4 else (self.r16(a) if sz == 2 else self.r8(a))
        elif tok.startswith("@") and tok.endswith("+"):   # @Rn+
            rn = self._rn(tok[1:-1])
            a = self.R[rn] & 0xFFFFFFFF
            v = self.r32(a) if sz == 4 else (self.r16(a) if sz == 2 else self.r8(a))
            self.R[rn] = (self.R[rn] + sz) & 0xFFFFFFFF
        elif tok.startswith("@-"):              # @-Rn (rare on load)
            rn = self._rn(tok[2:]); self.R[rn] = (self.R[rn] - sz) & 0xFFFFFFFF
            a = self.R[rn] & 0xFFFFFFFF
            v = self.r32(a) if sz == 4 else (self.r16(a) if sz == 2 else self.r8(a))
        else:                                   # @Rn
            a = self.R[self._rn(tok[1:])] & 0xFFFFFFFF
            v = self.r32(a) if sz == 4 else (self.r16(a) if sz == 2 else self.r8(a))
        # sign-extend sub-word loads (SH2 semantics)
        if sz == 1: v = self.s8(v) & 0xFFFFFFFF
        elif sz == 2: v = self.s16(v) & 0xFFFFFFFF
        return v

    def _store(self, tok, val, sz):
        if tok.startswith("@("):
            body = tok[2:tok.index(")")]
            i, base = body.split(",")
            if i.strip().startswith("r"):
                a = (self.R[self._rn(i)] + self.R[self._rn(base)]) & 0xFFFFFFFF
            else:
                a = (self.R[self._rn(base)] + int(i, 0)) & 0xFFFFFFFF
        elif tok.startswith("@-"):
            rn = self._rn(tok[2:]); self.R[rn] = (self.R[rn] - sz) & 0xFFFFFFFF
            a = self.R[rn] & 0xFFFFFFFF
        elif tok.startswith("@") and tok.endswith("+"):
            rn = self._rn(tok[1:-1]); a = self.R[rn] & 0xFFFFFFFF
            self.R[rn] = (self.R[rn] + sz) & 0xFFFFFFFF
        else:
            a = self.R[self._rn(tok[1:])] & 0xFFFFFFFF
        if sz == 4: self.w32(a, val)
        elif sz == 2: self.w16(a, val)
        else: self.w8(a, val)

    # ---- the actual derivation ---------------------------------------------
    ENTROPY = 0xFFFFF430     # routine reads its raw source here (@(16,0xFFFFF420))
    SEED    = 0xFFFFAB9E     # 4-byte seed the ECU would send
    KEY     = 0xFFFFABA2     # 4-byte key the ECU will expect
    LEVELVAR= 0xFFFF6793     # sub-function byte (1/3/5) the routine reads

    def derive(self, entropy, level=1):
        # fresh RAM each run
        self.ram[:] = b"\x00" * len(self.ram)
        self.w32(self.ENTROPY, entropy & 0xFFFFFFFF)
        self.w8(self.LEVELVAR, level)
        sp = 0xFFFFC000
        R = [0] * 16
        R[4] = 1 if level == 1 else 0    # the level==1 flag passed in r4
        R[15] = sp
        self.PR = 0
        self.run(0x75F66, R)
        seed = self.r32(self.SEED)
        key = self.r32(self.KEY)
        return seed, key


if __name__ == "__main__":
    import glob
    rom = sys.argv[1] if len(sys.argv) > 1 else glob.glob("/Users/shalomz/Projects/ecu/LF6A400J_*.bin")[0]
    e = Emu(rom)
    print(f"rom: {rom}  ({len(e.rom)} bytes)\n")
    for ent in (0x00000000, 0x11223344, 0xDEADBEEF, 0x00000001, 0xFFFFFFFF, 0x4D0D4A0C):
        for lvl in (1, 3, 5):
            s, k = e.derive(ent, lvl)
            print(f"  entropy=0x{ent:08X} L{lvl}:  seed=0x{s:08X}  key=0x{k:08X}")
        print()
