#!/usr/bin/env python3
"""
Headless SSM logger for the SJG (FA20 DIT). Reads a curated set of channels
directly over CAN, applies the RomRaider def's scaling, prints a live table
and (optionally) writes CSV. Read-only; never writes to the ECU.

  ./livelog.py                 one snapshot of the default channel set
  ./livelog.py --loop          live table, refresh until Ctrl-C
  ./livelog.py --loop --csv run1.csv --hz 5
  ./livelog.py --list          list every channel the def exposes, then exit
"""
import argparse, re, signal, sys, time
sys.path.insert(0, "/Users/shalomz/Projects/ecu")
from ssmread import J2534

DEF = "/Users/shalomz/Projects/ecu/logger-defs/logger_METRIC_EN_v370_sjg.xml"
ECUID = "92045C7207"          # this car; selects the right ecuparam addresses

# curated FA20 DIT channel set (names as they appear in the SJG def).
# NB on 92045C7207 these SSM slots return 0xFF padding (not served) and are omitted:
#   Knock Correction Advance (0x22), Boost Pressure Feedback (0x1F0),
#   Fuel Pressure High (0x105), instantaneous Feedback Knock Correction (extended).
# Boost is read via MAP; knock health via IAM + Ignition Timing (+ Fine Knock Learn).
DEFAULT = [
    "Engine Speed", "Vehicle Speed", "Engine Load (Relative)",
    "Throttle Opening Angle", "Mass Airflow",
    "Manifold Absolute Pressure", "Manifold Relative Pressure",
    "Primary Wastegate Duty Cycle",
    "Ignition Total Timing", "Fine Learning Knock Correction",
    "IAM", "Learned Ignition Timing",
    "A/F Sensor #1", "A/F Correction #1", "A/F Learning #1",
    "Coolant Temperature", "Intake Air Temperature", "Battery Voltage",
]

_dev = None
def _bye(*_):
    if _dev:
        try: _dev.close()
        except Exception: pass
    sys.exit(130)


_ST = {"uint8": 1, "int8": 1, "uint16": 2, "int16": 2, "uint32": 4, "int32": 4, "float": 4}

def parse_def(path=DEF, ecuid=ECUID):
    """name -> dict(addrs=[int...], units, expr, kind).  First occurrence of a name
    wins (the def concatenates several sources). Covers SSM <parameter> P-params and
    <ecuparam> E-params (extended addresses) whose <ecu id> list includes this car."""
    s = open(path, encoding="utf-8", errors="replace").read()
    try:
        blk = s[s.index('<protocol id="SSM"'):s.index('<protocol id="OBD"')]
    except ValueError:
        blk = s
    out = {}

    def conv(body):
        cm = re.search(r'<conversion units="([^"]*)" expr="([^"]*)"', body)
        units, expr = (cm.group(1), cm.group(2)) if cm else ("", "x")
        stm = re.search(r'storagetype="([a-z0-9]+)"', body)
        return units, expr, (_ST.get(stm.group(1)) if stm else None)

    # standard SSM parameters
    for m in re.finditer(r'<parameter id="(P\d+)" name="([^"]*)".*?</parameter>', blk, re.S):
        body, name = m.group(0), m.group(2)
        am = re.search(r'<address(?: length="(\d+)")?>(0x[0-9A-Fa-f]+)</address>', body)
        if not am:
            continue
        ln = int(am.group(1) or 1); base = int(am.group(2), 16)
        units, expr, _ = conv(body)
        out.setdefault(name, dict(addrs=[base + k for k in range(ln)],
                                  units=units, expr=expr, kind="P"))

    # extended ecuparams for THIS ecu id (E-ids and the SJG+ X-ids)
    for m in re.finditer(r'<ecuparam id="([A-Za-z]\w*)" name="([^"]*)".*?</ecuparam>', blk, re.S):
        body, name = m.group(0), m.group(2)
        addr = None
        for em in re.finditer(r'<ecu id="([^"]*)">\s*<address(?: length="(\d+)")?>(0x[0-9A-Fa-f]+)</address>', body):
            if ecuid in em.group(1).split(","):
                addr = (int(em.group(3), 16), int(em.group(2)) if em.group(2) else None)
                break
        if addr is None:
            continue
        units, expr, stlen = conv(body)
        ln = addr[1] or stlen or 1
        out.setdefault(name, dict(addrs=[addr[0] + k for k in range(ln)],
                                  units=units, expr=expr, kind="E"))
    return out


def scale(expr, raw):
    # expr comes from the local, trusted RomRaider def (arithmetic like "x/4");
    # eval runs with no builtins and only x in scope -- safe for this input.
    try:
        return eval(expr, {"__builtins__": {}}, {"x": raw})
    except Exception:
        return raw


def read_channels(j, chans):
    """chans: list of (name, meta). Returns list of (name, value, units) or None value."""
    all_addrs, spans = [], []
    for name, meta in chans:
        spans.append((name, meta, len(all_addrs), len(meta["addrs"])))
        all_addrs.extend(meta["addrs"])
    data = j.read_addresses(all_addrs, timeout_ms=800)
    out = []
    for name, meta, off, n in spans:
        if not data or len(data) < off + n:
            out.append((name, None, meta["units"])); continue
        raw = 0
        for b in data[off:off + n]:
            raw = (raw << 8) | b
        out.append((name, scale(meta["expr"], raw), meta["units"]))
    return out


def main():
    global _dev
    ap = argparse.ArgumentParser()
    ap.add_argument("--loop", action="store_true")
    ap.add_argument("--seconds", type=float, help="capture for N seconds then stop (implies loop)")
    ap.add_argument("--csv")
    ap.add_argument("--hz", type=float, default=4.0)
    ap.add_argument("--list", action="store_true")
    ap.add_argument("--channels", help="comma-separated names to override the default set")
    a = ap.parse_args()

    defs = parse_def()
    if a.list:
        for nm in sorted(defs):
            d = defs[nm]
            print(f"  {nm:38} {d['units']:8} @ {' '.join(hex(x) for x in d['addrs'])}")
        print(f"\n{len(defs)} channels in def")
        return 0

    if a.seconds:
        a.loop = True
    wanted = [c.strip() for c in a.channels.split(",")] if a.channels else DEFAULT
    chans = [(nm, defs[nm]) for nm in wanted if nm in defs]
    missing = [nm for nm in wanted if nm not in defs]
    if missing:
        print(f"note: not in def, skipped -> {', '.join(missing)}\n")

    signal.signal(signal.SIGINT, _bye); signal.signal(signal.SIGTERM, _bye)
    j = J2534(); j.open(); _dev = j
    csv = open(a.csv, "w") if a.csv else None
    if csv:
        csv.write("time," + ",".join(nm for nm, _ in chans) + "\n")
    print(f"connected  channel={j.chan}   {len(chans)} channels"
          + (f"   -> {a.csv}" if csv else "") + "\n")
    try:
        period = 1.0 / a.hz
        t0 = time.time()
        errs = 0
        while True:
            try:
                vals = read_channels(j, chans)     # resilient: a transient bus
                errs = 0                            # hiccup records a gap, keeps going
            except Exception as e:
                errs += 1
                vals = [(nm, None, m["units"]) for nm, m in chans]
                if errs == 1 or errs % 50 == 0:
                    sys.stderr.write(f"[read error x{errs}: {e}]\n"); sys.stderr.flush()
            ts = time.time() - t0
            if a.loop:
                sys.stdout.write("\x1b[2J\x1b[H")
                print(f"t={ts:7.1f}s   (Ctrl-C to stop)\n")
            for nm, v, u in vals:
                sv = "  --  " if v is None else (f"{v:8.2f}" if isinstance(v, float) else f"{v:>8}")
                print(f"  {nm:34} {sv} {u}")
            if csv:
                csv.write(f"{ts:.3f}," + ",".join(
                    "" if v is None else (f"{v:.3f}" if isinstance(v, float) else str(v))
                    for _, v, _ in vals) + "\n")
                csv.flush()
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
