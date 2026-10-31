"""Timer-threshold tables.  Task periods:
  0x153248: 40 ms (OBD PID 0x1F: 0x4EDAE +1 s per 25 executions; PID 0x4E prescaler 25 in the task body)
  0x153568: 80 ms (OBD PID 0x31: 0x10BDA0 integrates vehicle speed, 1 km per 800000 counts -> dt = 0.08 s)
  0x15307C: 20 ms (OS alarm table 0x168FD0: alarm 4 -> task 8 (body 0x1517D2 -> 0x15307C), cycle 10 ticks; alarm 6 -> task 9
            (0x153248, proven 40 ms) has cycle 20 -> 2 ms tick)
A table T is accepted when, in function F of the task tree, the lookup result v is compared directly with counter C
(v op C / C op v, no reassignment of v in between), every C assignment in cdump/ is a constant or C + 1 (saturating forms allowed)
and appears only in F (plus constant-only writers), and F is reached from the task root.  Output evidence/timer-tables.tsv."""
import re, os, glob, json, collections
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
PERIOD = {'0015307c': 0.02, '00153248': 0.04, '00153568': 0.08, '00153800': 0.08, '001528a2': 0.004}
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
        seen.add(f); st += re.findall(r'FUN_([0-9a-f]{8})', open(p).read())
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


rows = []
for root, per in PERIOD.items():
    for fn in sorted(tree(root)):
        s = src[fn]
        ctrs = set(re.findall(r'_?(DAT_f{3}[0-9a-f]{5})\s*\+\s*1\b', s))
        for m in re.finditer(r'(\w+)\s*=\s*(?:\(\w+\)\s*)?LK_[0-9A-F]+\(\(uint\)&T_([0-9A-F]{6})', s):
            v, d = m.group(1), m.group(2)
            tail = s[m.end():]
            ra = re.search(r'\b' + re.escape(v) + r'\s*=[^=]', tail); tail = tail[:ra.start()] if ra else tail
            V = r'\(?(?:\(\w+\s*\**\)\s*)*\(?' + re.escape(v) + r'(?:\s*&\s*0xff(?:ff)?)?\)?'
            for c in ctrs:
                Cp = r'\(?(?:\(\w+\s*\**\)\s*)*\(?_?' + c + r'(?:\s*&\s*0xff(?:ff)?)?\)?'
                cm = re.search(V + r'\s*(<=?|>=?)\s*' + Cp + '|' + Cp + r'\s*(<=?|>=?)\s*' + V, tail)
                if cm and counter_ok(c, fn):
                    rows.append((d, fn, root, per, 'FFFF' + c[-4:].upper() if c.startswith('DAT_ffff') else c[4:].upper(), cm.group(0)))
                    break
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
