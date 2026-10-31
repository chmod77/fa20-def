"""Torque-type arithmetic prover.  The torque type (Nm = (x-16000)/80) is combined with saturating helpers that the compiler
inlines as:  d = A - B; if (d < 0xC180 && -0x3E81 < d) r = 0x3E80 + d   (r = A - B + 16000)
             s = A + B; if (s < 0x13E80 && 0x3E7F < s) r = s - 16000    (r = A + B - 16000)
Both forms only make sense when A and B are torque type.  For every such statement with one operand a proven torque variable
(variables.py, expr '(x-16000)/80') or an identified torque table, the other operand (a lookup result) is reported.
Output evidence/torque-arith.tsv."""
import re, os, glob, json, sys
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H); sys.path.insert(0, H)
import variables as VV
from table_compare import resolve, OPND
S = json.load(open(f'{ROOT}/evidence/semantics.json'))
known = {**VV.V, **VV.V2}
TQV = {a for a, v in known.items() if v[2] == '(x-16000)/80'}
def tq_table(d):
    e = S.get('0x' + d.lstrip('0'))
    return e and e.get('status') == 'identified' and e.get('data') and e['data'].get('expr') == '(x-16000)/80'
rows = []
for p in sorted(glob.glob(f'{ROOT}/cdump/*.c')):
    fn = os.path.basename(p)[:-2]; s = open(p).read()
    if 'c180' not in s and '13e80' not in s:
        continue
    lk = {}
    for m in re.finditer(r'(\w+)\s*=\s*(?:\(\w+\)\s*)?LK_[0-9A-F]+\(\(uint\)&T_([0-9A-F]{6})', s):
        lk.setdefault(m.group(1), []).append((m.start(), m.group(2)))
    def lkof(tok, pos):
        c = [(q, d) for q, d in lk.get(tok, []) if q < pos]
        if not c: return None
        q, d = max(c)
        if len(re.findall(r'\b' + re.escape(tok) + r'\s*=[^=]', s[q:pos])) == 1: return d
        return None
    T = r'(?:\(\w+\s*\**\)\s*)*\(?\s*(?:\(\w+\s*\**\)\s*)*\(?([A-Za-z_]\w*)(?:\s*&\s*0xffff)?\)?\s*\)?'
    for m in re.finditer(r'(\w+)\s*=\s*\(?' + T + r'\s*([-+])\s*' + T + r'\s*\)?;', s):
        win = s[m.end():m.end() + 400]
        r, a, op, b = m.group(1), m.group(2), m.group(3), m.group(4)
        if op == '-' and not ('c180' in win and re.search(r'3e8[01]', win)):
            continue
        if op == '+' and not ('13e80' in win and re.search(r'3e7f|16000', win)):
            continue
        for x, y in ((a, b), (b, a)):
            dx, dy = lkof(x, m.start()), lkof(y, m.start())
            vx = resolve(fn, x, s) if not dx else None
            proven = (vx in TQV) or (dx and tq_table(dx))
            if proven and dy and not tq_table(dy) and '0x' + dy.lstrip('0') not in S:
                rows.append((dy, fn, f'{vx:08X}' if vx else 'T:' + dx, op, m.group(0)[:120].replace('\n', ' ')))
seen = set()
with open(f'{ROOT}/evidence/torque-arith.tsv', 'w') as f:
    f.write('descriptor\tfunction\tpartner\top\tcontext\n')
    for r in rows:
        if r[0] in seen: continue
        seen.add(r[0]); f.write('\t'.join(r) + '\n')
print('torque-arith leads', len(seen))
for r in rows: print(*r)
