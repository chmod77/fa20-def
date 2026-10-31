"""Where does each lookup's result go?  For `v = LK_xxx((uint)&T_D, ...)` in function F, report statements that
store v (optionally cast/masked) directly into a RAM variable or into *param_N (resolved through every call site's
N-th argument &DAT_x).  Output: evidence/table-sinks.json {descriptor: [ 'FFFFxxxx' | 'F:*param_N(unresolved)' ]}.
These are dataflow facts used only as leads/descriptions, not as semantic names."""
import re, os, glob, json, sys, collections
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
CA = json.load(open(f'{ROOT}/evidence/callargs.json'))
LAB = {}
for l in open(f'{ROOT}/evidence/ghidra-labels.tsv'):
    a, n = l.split(); LAB[n] = int(a, 16)
out = collections.defaultdict(set)
ASG = re.compile(r'(\w+)\s*=\s*(?:\(\w+\)\s*)?LK_[0-9A-F]+\(\(uint\)&T_([0-9A-F]{6})')


def var_of(tok):
    m = re.fullmatch(r'_?DAT_(f{3}[0-9a-f]{5})', tok)
    if m:
        return m.group(1).upper()
    m = re.fullmatch(r'_?(v_\w+)', tok)
    if m and m.group(1) in LAB:
        return '%08X' % LAB[m.group(1)]
    return None


for p in glob.glob(f'{ROOT}/cdump/*.c'):
    fn = os.path.basename(p)[:-2]; s = open(p).read()
    for m in ASG.finditer(s):
        v, d = m.group(1), int(m.group(2), 16)
        tail = s[m.end():m.end() + 3000]
        pat = r'(?:\(\w+\)\s*)?\(?\s*(?:\(\w+\)\s*)?' + re.escape(v) + r'\s*\)?(?:\s*&\s*0xff(?:ff)?)?'
        for st in re.finditer(r'(\*param_(\d+)|_?DAT_f{3}[0-9a-f]{5}|_?v_\w+)\s*=\s*' + pat + r'\s*;', tail):
            tgt = st.group(1)
            if tgt.startswith('*param_'):
                n = int(st.group(2)) - 1; res = set()
                for caller, args in CA.get(fn, []):
                    if caller == fn or n >= len(args):
                        continue
                    am = re.fullmatch(r'&_?(DAT_f{3}[0-9a-f]{5}|v_\w+)', args[n].strip())
                    if am:
                        r = var_of(am.group(1))
                        if r:
                            res.add(r)
                out[d] |= res or {f'{fn}:*param_{n+1}'}
            else:
                r = var_of(tgt.lstrip('_') if tgt.startswith('_v_') else tgt)
                if r:
                    out[d].add(r)
json.dump({f'0x{k:X}': sorted(v) for k, v in sorted(out.items())}, open(f'{ROOT}/evidence/table-sinks.json', 'w'), indent=0)
print('descriptors with a resolved sink:', sum(1 for v in out.values() if any(not x.count(':') for x in v)), 'of', len(out))
