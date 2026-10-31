"""Task-root -> subsystem label, with evidence.  A table's category is the label of the task root
(main-loop child of 0x49E70, or a function with no static callers) whose call tree contains the
function that performs the lookup.  Labels are given only where the root's proven outputs establish
the role; otherwise the neutral 'Task 0x...' label is used."""
import json, re, os, glob, collections
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
LABELS = {
 '0007e298': ('Engine Load Calculation', 'writes Engine Load FFFF09B4/FFFF03A0 and filtered MAP FFFF09B8'),
 '000cf4b4': ('Airflow Model (Speed Density)', 'computes VE FFFF16A4 used for air mass FFFF169C (0xCFEDC)'),
 '000cf6d4': ('Airflow Model (Speed Density)', 'computes air mass FFFF169C/FFFF1698'),
 '00082fa0': ('Driver Demand / Torque Request', 'writes FFFF0A62 (torque-domain request) from accelerator-pedal x rpm maps (0x8151C)'),
 '00087478': ('Ignition Timing - Base & Torque Model', 'writes base timing FFFF03D1 (0x86758)'),
 '00087410': ('Ignition Timing - Base & Torque Model', 'sibling of 0x87478 in the same descriptor block'),
 '0009bdf4': ('Ignition Timing - Corrections', 'writes timing components FFFF0455/045C/047B/0481 summed into FFFF046C'),
 '0009cbf8': ('Ignition Timing - Final', 'writes Ignition Total Timing FFFF046C (SSM 0x11)'),
 '0009c94c': ('Ignition Timing - Corrections', 'descriptor block 0x2D4A0..0x2DA18 shared with 0x9BDF4'),
 '0009bdd0': ('Ignition Timing - Corrections', 'descriptor block 0x2D4A0..0x2DA18 shared with 0x9BDF4'),
 '0009ca88': ('Ignition Timing - Corrections', 'writes FFFF045A summed into FFFF046C'),
 '000bc86c': ('Boost Control', 'writes Wastegate Duty FFFF0E5E (SSM 0x30)'),
 '000940e8': ('Fuel Injection', 'writes injector pulse width FFFF2B4E (SSM 0x20) via 0x95B54'),
 '000a8230': ('Idle Speed Control', 'uses SSM idle-speed user adjustments FFFF312E/312F and alternator duty'),
 '0006a1f8': ('Electronic Throttle Control', 'writes Throttle Motor Duty FFFF0128 (SSM 0xFA) and throttle sensors'),
 '00153928': ('Crank/Cam Signal Processing', 'writes cam angles FFFEF2B8/F2BA, FFFF0DFC and rpm copy FFFF2ADA'),
 '0007f324': ('Gear Calculation', 'writes Gear FFFF03AC'),
 '000888c0': ('Fueling - Open Loop & Enrichment', 'writes Open Loop Fuel Enrichment FFFF0400/FFFF0401 (OBD PID44 term)'),
 '00089e04': ('Fueling - Open Loop & Enrichment', 'writes decaying enrichment FFFF0B84 (OBD PID44 term) via 0x90390'),
 '0008a274': ('Fueling - Open Loop & Enrichment', 'writes coolant enrichment FFFF0B42 (OBD PID44 term) via 0x8CBE4'),
 '000dce34': ('Misfire Detection', 'maintains SSM roughness monitor counters FFFF102E..FFFF1034 (SSM 0xCE/0xCF/0xD8/0xD9) via struct base FFFF1020'),
 '000e2938': ('Alternator Control', 'writes Alternator Duty FFFF10D6 (SSM 0x3A) via 0xE331C'),
 '000d7bc0': ('Fuel Pump Control', 'writes Fuel Pump Duty FFFF0FDC (SSM 0x3B) via 0xD7B60'),
}


def fn_roots():
    """function -> set of task roots"""
    CA = json.load(open(f'{ROOT}/evidence/callargs.json'))
    callers = collections.defaultdict(set)
    for callee, sites in CA.items():
        for c, _ in sites:
            if c != callee:
                callers[callee].add(c)
    main = set(re.findall(r'FUN_([0-9a-f]{8})', open(f'{ROOT}/cdump/00049e70.c').read()))
    out = {}
    def roots(f, seen):
        if f in seen:
            return set()
        seen.add(f)
        if f in main or not callers[f]:
            return {f}
        r = set()
        for c in callers[f]:
            r |= roots(c, seen)
        return r
    for p in glob.glob(f'{ROOT}/cdump/*.c'):
        fn = os.path.basename(p)[:-2]
        out[fn] = roots(fn, set())
    return out


def build_map():
    CA = json.load(open(f'{ROOT}/evidence/callargs.json'))
    callers = collections.defaultdict(set)
    for callee, sites in CA.items():
        for c, _ in sites:
            if c != callee:
                callers[callee].add(c)
    main = set(re.findall(r'FUN_([0-9a-f]{8})', open(f'{ROOT}/cdump/00049e70.c').read()))
    memo = {}

    def roots(f, seen=None):
        seen = seen if seen is not None else set()
        if f in seen:
            return set()
        seen.add(f)
        if f in main or not callers[f]:
            return {f}
        r = set()
        for c in callers[f]:
            r |= roots(c, seen)
        return r
    d2r = collections.defaultdict(set)
    for p in glob.glob(f'{ROOT}/cdump/*.c'):
        fn = os.path.basename(p)[:-2]
        ds = {int(d, 16) for d in re.findall(r'T_(0[0-9A-F]{5})', open(p).read()) if int(d, 16) >= 0x2C000}
        if ds:
            for r in roots(fn):
                for d in ds:
                    d2r[d].add(r)
    return d2r


def category(roots):
    labs = sorted({LABELS[r][0] if r in LABELS else f'Task 0x{int(r,16):X}' for r in roots})
    return ' / '.join(labs) if labs else 'Unidentified (no static caller)'
