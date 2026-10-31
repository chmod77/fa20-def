"""Lead generator (not proof): for each unidentified descriptor, its result sink variables X (table-sinks.json);
functions reading X (mem-access.tsv R, and C-level reads in cdump) ; proven variables (variables.py) written by those
functions (mem-access W, or out-params resolved in stack-args.tsv).  Prints ranked leads."""
import json, sys, os, re, collections, glob
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H); sys.path.insert(0, H)
import variables as VV
known = {'%08X' % k: v[0] for k, v in {**VV.V, **VV.V2}.items()}
S = json.load(open(f'{ROOT}/evidence/semantics.json'))
sinks = json.load(open(f'{ROOT}/evidence/table-sinks.json'))
readers = collections.defaultdict(set); writes = collections.defaultdict(set)
for l in list(open(f'{ROOT}/evidence/mem-access.tsv'))[1:]:
    a, k, w, ia, fn = l.split()
    (readers if k.startswith('R') else writes)[a if k.startswith('R') else fn.zfill(8)].add(fn.zfill(8) if k.startswith('R') else a)
for p in glob.glob(f'{ROOT}/cdump/*.c'):
    fn = os.path.basename(p)[:-2]; s = open(p).read()
    for m in re.findall(r'DAT_(f{3}[0-9a-f]{5})', s):
        readers[m.upper()].add(fn)
for l in list(open(f'{ROOT}/evidence/stack-args.tsv'))[1:]:
    ce, cr, ia, k, v = l.split()
    writes[ce.zfill(8)].add(v); writes[cr.zfill(8)].add(v)
for d, vs in sorted(sinks.items()):
    if d in S:
        continue
    out = []
    for x in vs:
        if ':' in x:
            continue
        for f in readers.get(x, ()):
            kw = sorted(v for v in writes.get(f, ()) if v in known)
            if kw:
                out.append(f'{x}->{f}->' + ','.join(f'{v}({known[v]})' for v in kw[:4]))
    if out:
        print(d, ' | '.join(out[:3]))
