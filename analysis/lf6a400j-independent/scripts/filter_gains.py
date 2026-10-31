"""Filter-gain tables: v = LK_xxx((uint)&T_D, ...) and v (assigned once in F, or the lookup call itself) is the gain argument
(3rd) of a first-order filter helper: 0x16B4D8/0x16B55C/0x16B520 (y += (x-y)*k/65536) or 0x16B44C/0x16B49C (y += (x-y)*k/256).
Output evidence/filter-gains.tsv: descriptor function helper target scale."""
import re, os, glob, json
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
S = json.load(open(f'{ROOT}/evidence/semantics.json'))
HELP = {'0016b4d8': 65536, '0016b55c': 65536, '0016b520': 65536, '0016b44c': 256, '0016b49c': 256}
rows = []
for p in sorted(glob.glob(f'{ROOT}/cdump/*.c')):
    fn = os.path.basename(p)[:-2]; s = open(p).read()
    lk = {}
    for m in re.finditer(r'(\w+)\s*=\s*(?:\(\w+\)\s*)?LK_[0-9A-F]+\(\(uint\)&T_([0-9A-F]{6})', s):
        lk.setdefault(m.group(1), set()).add((m.group(2), m.start()))
    for m in re.finditer(r'FUN_(0016b4d8|0016b55c|0016b520|0016b44c|0016b49c)\(([^;]*)\);', s):
        args = [a.strip() for a in re.split(r',(?![^()]*\))', m.group(2))]
        if len(args) < 3:
            continue
        a3 = re.sub(r'^\((?:u?int|short|ushort|char|byte)\)\s*', '', args[2])
        a3 = re.sub(r'\s*&\s*0xff(ff)?$', '', a3).strip('() ')
        d = None
        mm = re.fullmatch(r'LK_[0-9A-F]+\(\(uint\)&T_([0-9A-F]{6}).*', a3)
        if mm:
            d = mm.group(1)
        elif a3 in lk:
            # the most recent lookup assigned to a3 before the call, and a3 not reassigned in between from anything else
            prev = [(dd, pos) for dd, pos in lk[a3] if pos < m.start()]
            if prev:
                dd, pos = max(prev, key=lambda t: t[1])
                between = s[pos:m.start()]
                if len(re.findall(r'\b' + re.escape(a3) + r'\s*=[^=]', between)) == 1:
                    d = dd
        if d:
            rows.append((d, fn, m.group(1), args[0], HELP[m.group(1)]))
seen = set()
with open(f'{ROOT}/evidence/filter-gains.tsv', 'w') as f:
    f.write('descriptor\tfunction\thelper\ttarget\tscale\n')
    for r in rows:
        if r[0] in seen: continue
        seen.add(r[0]); f.write('\t'.join(map(str, r)) + '\n')
new = [r for r in rows if '0x' + r[0].lstrip('0') not in S]
print('filter gain tables', len(seen), 'unidentified', len({r[0] for r in new}))
for r in new: print(*r)
