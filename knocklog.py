#!/usr/bin/env python3
"""
Real-time knock logger for the SJG (FA20 DIT), using the UDS 0x2C+0x22
defineByMemoryAddress bypass -- reads internal RAM the SSM pointer table can't
reach, with NO seed/key. This is how we get real-time feedback knock on this ECU.

Standard channels (RPM, MAP, timing, DAM, Fine Knock Learn) come over SSM; the
feedback-knock byte comes over the 0x2C/0x22 bypass.

  ./knocklog.py                    one snapshot
  ./knocklog.py --loop             live table
  ./knocklog.py --seconds 40 --csv knock.csv --hz 8
  ./knocklog.py --hunt             also log accumulated-FKC candidate bytes

Read-only: defines transient dynamic DIDs (RAM only, cleared on power cycle) and
reads them. No flash writes, no seed/key, no lockout counter.
"""
import argparse, ctypes, signal, sys, time
sys.path.insert(0, "/Users/shalomz/Projects/ecu")
from ssmread import J2534, PASSTHRU_MSG, _msg, TESTER, ECU
from livelog import parse_def, read_channels

DEG_PER_BIT = 0.3515625     # Subaru native ignition resolution (90/256)

SSM_WANT = ["Engine Speed", "Manifold Absolute Pressure", "Throttle Opening Angle",
            "Ignition Total Timing", "IAM", "Fine Learning Knock Correction"]

# Bypass RAM channels: (label, addr, scale).  Read as a 2-byte DID; byte0 is used.
# scale None -> raw signed byte; else signed byte * scale.
#   0xFFFF04BB CONFIRMED real-time per-event Feedback Knock Correction:
#   reads 0 with no knock, snaps to -4 bits = -1.40625deg (Subaru single-event step).
BYPASS = [
    ("Feedback Knock (deg)", 0xFFFF04BB, DEG_PER_BIT),   # per-event correction, caps -1.40625
    ("Knock Sum", 0xFFFF04BC, None),                     # accumulator 0->29 (saturates)
    ("Internal Timing (raw)", 0xFFFF046C, None),
]
# --hunt adds candidate bytes for the *accumulated* feedback var (0 at idle; the
# one that swings multi-degree negative under sustained knock is the target).
HUNT = [(f"cand 0x{a & 0xFFFF:04X}", a, None)
        for a in (0xFFFF04A0, 0xFFFF04A2, 0xFFFF04A4, 0xFFFF04A6,   # 0-run: likely per-cyl sums
                  0xFFFF04B0, 0xFFFF04B2, 0xFFFF04B4,               # 0-run
                  0xFFFF049A, 0xFFFF049C, 0xFFFF04BC, 0xFFFF04C6)]    # other 0-at-idle
DID0 = 0xF300

_dev = None
def _bye(*_):
    if _dev:
        try: _dev.close()
        except Exception: pass
    sys.exit(130)


def uds(j, payload, to=800):
    tx, n = _msg(bytes(TESTER) + bytes(payload)), ctypes.c_ulong(1)
    if j.L.PassThruWriteMsgs(j.chan, ctypes.byref(tx), ctypes.byref(n), to) != 0:
        return None
    dl = time.time() + to / 1000.0
    while time.time() < dl:
        rx, c = PASSTHRU_MSG(), ctypes.c_ulong(1)
        if j.L.PassThruReadMsgs(j.chan, ctypes.byref(rx), ctypes.byref(c), 200) != 0 or c.value == 0:
            continue
        d = bytes(rx.Data[:rx.DataSize])
        if len(d) >= 5 and d[:4] == bytes(ECU):
            return d[4:]
    return None


def define_did(j, did, addr):
    r = uds(j, [0x2C, 0x02, (did >> 8) & 0xFF, did & 0xFF, 0x14,
                (addr >> 24) & 0xFF, (addr >> 16) & 0xFF, (addr >> 8) & 0xFF, addr & 0xFF, 2])
    return bool(r and r[0] == 0x6C)


def read_did_byte0(j, did):
    r = uds(j, [0x22, (did >> 8) & 0xFF, did & 0xFF])
    if r and r[0] == 0x62 and len(r) >= 4:
        b = r[3]
        return b - 256 if b >= 128 else b       # signed byte0
    return None


def main():
    global _dev
    ap = argparse.ArgumentParser()
    ap.add_argument("--loop", action="store_true")
    ap.add_argument("--seconds", type=float)
    ap.add_argument("--csv")
    ap.add_argument("--hz", type=float, default=8.0)
    ap.add_argument("--hunt", action="store_true", help="also watch accumulated-FKC candidate bytes")
    a = ap.parse_args()
    if a.seconds:
        a.loop = True

    chans = list(BYPASS) + (HUNT if a.hunt else [])
    defs = parse_def()
    ssm_chans = [(nm, defs[nm]) for nm in SSM_WANT if nm in defs]

    signal.signal(signal.SIGINT, _bye); signal.signal(signal.SIGTERM, _bye)
    j = J2534(); j.open(); _dev = j

    s = uds(j, [0x10, 0x03])
    if not (s and s[0] == 0x50):
        print("could not enter extended session -- aborting"); j.close(); return 2
    ram = []
    for i, (lab, addr, scale) in enumerate(chans):
        did = DID0 + i
        ok = define_did(j, did, addr)
        print(f"  {lab:24} @0x{addr:08X}  DID {did:04X}: {'ok' if ok else 'FAILED'}")
        ram.append((lab, did, scale))

    csv = open(a.csv, "w") if a.csv else None
    if csv:
        csv.write("time," + ",".join(nm for nm, _ in ssm_chans) + "," + ",".join(l for l, _, _ in ram) + "\n")
    print(f"\nconnected  channel={j.chan}   SSM {len(ssm_chans)} + bypass {len(ram)}"
          + (f"   -> {a.csv}" if csv else "") + "\n")
    try:
        period = 1.0 / a.hz
        t0 = time.time()
        while True:
            try:
                svals = read_channels(j, ssm_chans)
            except Exception:
                svals = [(nm, None, m["units"]) for nm, m in ssm_chans]
            bvals = []
            for lab, did, scale in ram:
                b = read_did_byte0(j, did)
                bvals.append(None if b is None else (round(b * scale, 3) if scale else b))
            ts = time.time() - t0

            if a.loop:
                sys.stdout.write("\x1b[2J\x1b[H"); print(f"t={ts:6.1f}s   (Ctrl-C to stop)\n")
            for nm, v, u in svals:
                sv = "  --  " if v is None else (f"{v:8.2f}" if isinstance(v, float) else f"{v:>8}")
                print(f"  {nm:30} {sv} {u}")
            print("  --- via 0x2C+0x22 bypass ---")
            for (lab, _, _), bv in zip(ram, bvals):
                mark = "  <== KNOCK" if (isinstance(bv, (int, float)) and bv < 0 and "Feedback" in lab) else ""
                print(f"  {lab:30} {'  --' if bv is None else f'{bv:8.3f}' if isinstance(bv, float) else f'{bv:8d}'}{mark}")
            if csv:
                row = [f"{ts:.3f}"]
                row += ["" if v is None else (f"{v:.3f}" if isinstance(v, float) else str(v)) for _, v, _ in svals]
                row += ["" if b is None else str(b) for b in bvals]
                csv.write(",".join(row) + "\n"); csv.flush()
            if not a.loop:
                break
            if a.seconds and ts >= a.seconds:
                break
            time.sleep(period)
    finally:
        if csv: csv.close()
        j.close(); _dev = None
        print("\ndevice closed." + (f"  wrote {a.csv}" if a.csv else ""))
    return 0


if __name__ == "__main__":
    sys.exit(main())
