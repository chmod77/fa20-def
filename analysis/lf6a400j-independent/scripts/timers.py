"""Timer-threshold tables.  OS (session 4 correction): TCB table 0x169768 + 16*id (ActivateTask 0x13C6E4 indexes it so); alarm records
0x168FD0 + 16*n with the task id in halfword 1.  Startup 0x1513BC: SetRelAlarm(alarm, offset, cycle) = (10,1,1) (1,1,2) (2,3,4) (4,6,10)
(6,11,20) (7,21,40): alarm 1 -> task 3 (0x151748 -> 0x152882), 2 -> task 4 (0x151776 -> 0x6F84C -> 0x1528A2), 4 -> task 8 (0x1517A4 ->
0x6F86C -> 0x152A40), 6 -> task 9 (0x1517D2 -> 0x6F88C -> 0x15307C), 7 -> task 10 (0x1517FA -> 0x6F8AC -> 0x153248).  0x153248 is 40 ms
(OBD PID 0x1F/0x4E below) with cycle 40 -> tick 1 ms: 0x152882 2 ms, 0x1528A2 4 ms, 0x152A40 10 ms, 0x15307C 20 ms.  0x152A40 calls
0x49E70 unconditionally (0x152BC6); inside it 0x123600/0x12560C/0x12367C run only when FFFEF5A4 == 0 (counter 0..3 -> every 4th = 40 ms)
and 0x9BDD0 every 100th (1 s); those subtrees are separate roots.  Task 11 (0x15188E -> 0x153800) is activated by task 10 through the
prescaler 0x1511FE (period not proven) -> not used.  A function is accepted only if every timed root that reaches it has the same period
and it is not reachable from any other top-level function.
Earlier task periods:
  0x153248: 40 ms (OBD PID 0x1F: 0x4EDAE +1 s per 25 executions; PID 0x4E prescaler 25 in the task body)
  0x153568: 80 ms (OBD PID 0x31: 0x10BDA0 integrates vehicle speed, 1 km per 800000 counts -> dt = 0.08 s)
  0x15307C: 20 ms (OS alarm table 0x168FD0: alarm 4 -> task 8 (body 0x1517D2 -> 0x15307C), cycle 10 ticks; alarm 6 -> task 9
            (0x153248, proven 40 ms) has cycle 20 -> 2 ms tick)
A table T is accepted when, in function F of the task tree, the lookup result v is compared directly with counter C
(v op C / C op v, no reassignment of v in between), every C assignment in cdump/ is a constant or C + 1 (saturating forms allowed)
and appears only in F (plus constant-only writers), and F is reached from the task root.  Output evidence/timer-tables.tsv."""
import re, os, glob, json, collections
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
PERIOD = {'0015307c': 0.02, '00153248': 0.04, '00153568': 0.08, '001528a2': 0.004, '00152882': 0.002, '00152a40': 0.01,
          '00123600': 0.04, '0012560c': 0.04, '0012367c': 0.04, '0009bdd0': 1.0}
ALT = {'00153b4e': 0.02}   # application mode 2: task 55 (alarm 27, cycle 20) -> 0x151C8C -> 0x153B4E (also reaches idle 0xA8230)
CUT = {'00049e70': {'00123600', '0012560c', '0012367c', '0009bdd0'}}
S = json.load(open(f'{ROOT}/evidence/semantics.json'))


SEED = {'00153800': ['0004c24e', '0003e9a0', '000dcaac', '0011a89c', '00077f68', '000780a2', '0007ba44', '0014019c', '00061a48', '0004a20e',
                     '000aefd4', '0006acec', '000d2c48', '0008a274', '0009ca88', '001196b4', '000aa2b8', '000c8210', '00151288', '0004b414',
                     '00050c62', '00049950', '00049b2e', '0004a520', '0005adca', '0003ecd4', '0004b344', '0003dc4a', '0004c358', '0004b2d6',
                     '0006aef4', '000dce34', '0005e90a', '00048e3a', '0010e7d0', '0010e33c', '0010e858', '0010ebb4', '000a12dc']}
# 0x153800 (task 10 body target) is not a decompiled function: its direct callees are taken from the disassembly at 0x153800..0x153A00


def tree(r):
    seen = set(); st = [r] + SEED.get(r, [])
    while st:
        f = st.pop()
        p = f'{ROOT}/cdump/{f}.c'
        if f in seen or not os.path.exists(p):
            continue
        seen.add(f); st += [c for c in re.findall(r'FUN_([0-9a-f]{8})', open(p).read()) if c not in CUT.get(f, ()) and (c not in PERIOD or c == r)]
    return seen


src = {os.path.basename(p)[:-2]: open(p).read() for p in glob.glob(f'{ROOT}/cdump/*.c')}
asg = collections.defaultdict(list)
for fn, s in src.items():
    for m in re.finditer(r'(?<![\w*.&])_?(DAT_f{3}[0-9a-f]{5})\s*=(?!=)\s*([^;]+);', s):
        asg[m.group(1)].append((fn, m.group(2).strip()))


def counter_ok(c, fn):
    for f, rhs in asg[c]:
        rr = re.sub(r'\s+', '', rhs)
        if re.fullmatch(r'-?(0x[0-9a-f]+|\d+)|\(\w+\)-?(0x[0-9a-f]+|\d+)', rr):
            continue
        if f != fn:
            return False
        if re.fullmatch(r'(\(\w+\))?_?' + c + r'\+1', rr):
            continue
        if re.fullmatch(r'[a-z]\w*', rr):     # saturating form: local = C + 1 then C = local
            continue
        return False
    return True


TREES = {r: tree(r) for r in PERIOD}
_callers = collections.defaultdict(set)
for _f, _s in src.items():
    for _c in set(re.findall(r'FUN_([0-9a-f]{8})', _s)):
        if _c != _f: _callers[_c].add(_f)
def _tops(f, seen=None):
    seen = seen if seen is not None else set()
    if f in seen: return set()
    seen.add(f)
    if f in PERIOD or f in ALT: return {f}
    cs = _callers.get(f)
    if not cs: return {f}
    out = set()
    for c in cs:
        if f in CUT.get(c, ()): continue
        out |= _tops(c, seen)
    return out
def unique_period(fn):
    t = _tops(fn)
    main = {x for x in t if x in PERIOD}
    return len(main) > 0 and all(x in PERIOD or x in ALT for x in t) and len({PERIOD[x] for x in main}) == 1
def alt_note(fn):
    return sorted(x for x in _tops(fn) if x in ALT)
rows = []
for root, per in PERIOD.items():
    for fn in sorted(TREES[root]):
        if not unique_period(fn): continue
        s = src[fn]
        ctrs = set(re.findall(r'_?(DAT_f{3}[0-9a-f]{5})\s*\+\s*1\b', s))
        for m in re.finditer(r'(\w+)\s*=\s*(?:\(\w+\)\s*)?LK_[0-9A-F]+\(\(uint\)&T_([0-9A-F]{6})', s):
            v, d = m.group(1), m.group(2)
            tail = s[m.end():]
            ra = re.search(r'\b' + re.escape(v) + r'\s*=[^=]', tail); tail = tail[:ra.start()] if ra else tail
            V = r'\(?(?:\(\w+\s*\**\)\s*)*\(?' + re.escape(v) + r'(?:\s*&\s*0xff(?:ff)?)?\)?'
            for c in ctrs:
                alias = [c] + [a for a in set(re.findall(r'\b([a-z]\w*Var\d+|uStack_\w+|sStack_\w+)\s*=\s*(?:\(\w+\)\s*)?_?' + c + r'\s*;', s))
                               if len(re.findall(r'\b' + a + r'\s*=[^=]', s)) == 1]
                Cp = r'\(?(?:\(\w+\s*\**\)\s*)*\(?_?(?:' + '|'.join(map(re.escape, alias)) + r')(?:\s*&\s*0xff(?:ff)?)?\)?'
                cm = re.search(V + r'\s*(<=?|>=?)\s*' + Cp + '|' + Cp + r'\s*(<=?|>=?)\s*' + V, tail)
                if cm and counter_ok(c, fn):
                    rows.append((d, fn, root, per, 'FFFF' + c[-4:].upper() if c.startswith('DAT_ffff') else c[4:].upper(), cm.group(0) + (' [application mode 2 also runs this function every 20 ms via 0x153B4E]' if alt_note(fn) else '')))
                    break
# countdown timers: C = v (lookup result) and C - 1 elsewhere in the same function; every C write in cdump/ is in F
# and is a constant, v, C - 1, or a single-assignment local holding C - 1
for root, per in PERIOD.items():
    for fn in sorted(TREES[root]):
        if not unique_period(fn): continue
        s = src[fn]
        for m in re.finditer(r'(\w+)\s*=\s*(?:\(\w+\)\s*)?LK_[0-9A-F]+\(\(uint\)&T_([0-9A-F]{6})', s):
            v, d = m.group(1), m.group(2)
            if len(re.findall(r'\b' + re.escape(v) + r'\s*=[^=]', s)) != 1:
                continue
            for c in set(re.findall(r'_?(DAT_f{3}[0-9a-f]{5})\s*=\s*(?:\(\w+\)\s*)?' + re.escape(v) + r'\s*;', s)):
                if not re.search(r'_?' + c + r'\s*-\s*1\b', s):
                    continue
                ok = True
                for f2, rhs in asg[c]:
                    rr = re.sub(r'\s+', '', rhs)
                    if re.fullmatch(r'-?(0x[0-9a-f]+|\d+)', rr):
                        continue
                    if f2 != fn:
                        ok = False; break
                    if re.fullmatch(r'(\(\w+\))?' + re.escape(v), rr) or re.fullmatch(r'(\(\w+\))?_?' + c + r'-1', rr):
                        continue
                    if re.fullmatch(r'[a-z]\w*', rr) and len(re.findall(r'\b' + rr + r'\s*=[^=]', s)) <= 2:
                        continue
                    ok = False; break
                if ok:
                    rows.append((d, fn, root, per, c[4:].upper(), f'{c} = {v} (countdown, {c} - 1 per execution)' + (' [application mode 2 also runs this function every 20 ms via 0x153B4E]' if alt_note(fn) else '')))
seen = set()
with open(f'{ROOT}/evidence/timer-tables.tsv', 'w') as f:
    f.write('descriptor\tfunction\ttask\tperiod\tcounter\tcontext\n')
    for r in rows:
        if r[0] in seen:
            continue
        seen.add(r[0])
        f.write('\t'.join(map(str, r)) + '\n')
print('timer tables', len(seen), 'new', len([d for d in seen if '0x' + d.lstrip('0') not in S]))
for r in rows:
    print(*r)
