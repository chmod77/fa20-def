#!/usr/bin/env python3
"""Per-function constant GBR values (ldc rN,gbr where rN holds a literal)."""
import sys,os,re,collections
sys.path.insert(0,os.path.dirname(__file__))
import trace_call_args as T
T.func_addrs(0)
res={}
for fn in T._INS:
    R={};vals=set()
    for ins in T.insns(fn):
        m,o=ins.mnemonic,ins.op_str.replace(' ','')
        if m=='mov.l' and re.fullmatch(r'0x[0-9a-f]+,r\d+',o):
            a,r=o.split(','); R[r]=T.u32(int(a,16))
        elif m=='ldc' and o.endswith(',gbr'):
            r=o.split(',')[0]; vals.add(R.get(r))
        elif m=='ldc.l' and o.endswith(',gbr'): pass  # restore
    vals.discard(None)
    if len(vals)==1: res[fn]=vals.pop()
    elif len(vals)>1: res[fn]=None
out=os.path.join(os.path.dirname(__file__),'..','evidence','gbr-map.tsv')
open(out,'w').write(''.join(f'{f:x}\t{v:x}\n' for f,v in sorted(res.items()) if v is not None))
print(len(res),'functions set gbr;',sum(1 for v in res.values() if v is None),'ambiguous')
