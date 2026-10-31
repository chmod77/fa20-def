"""Extract candidate storage layouts from Ghidra C types; emulation verifies them next."""
from pathlib import Path
import json,re
ROOT=Path(__file__).resolve().parents[1]
TYPES={'byte':'uint8','char':'int8','ushort':'uint16','short':'int16','uint':'uint32','int':'int32'}
rows=[]
for p in sorted((ROOT/'evidence/lookups').glob('*.c')):
 s=p.read_text(); rank=2 if 'param_1 + 0x10' in s else 1
 axes=[]
 for offset in ['4','0xc'][:rank]:
  ts=set(re.findall(r'\*\((\w+) \*\*\)\(param_1 \+ '+offset+r'\)',s))
  # handles **(type **) too: the inner dereference matches.
  axes.append(TYPES[next(iter(ts))] if len(ts)==1 and next(iter(ts)) in TYPES else None)
 if rank==1:
  ts=set(re.findall(r'\*\((\w+) \*\*\)\(param_1 \+ 8\)',s))
  if not ts: # index-only lookup expresses dereference at return
   ts=set(re.findall(r'return \(int\)\*\((\w+) \*\)',s))
 else:
  ts=set(re.findall(r'\((\w+) \*\)\s*\(\*\(int \*\)\(param_1 \+ 0x10\)',s))
 dtype=TYPES[next(iter(ts))] if len(ts)==1 and next(iter(ts)) in TYPES else None
 # 0x13714c uses 32-bit integer loads and the unsigned weighted-average helper
 # 0x16c048; helper disassembly is saved separately.
 if p.stem=='function_0013714c':dtype='uint32'
 rows.append(dict(target=int(p.stem.split('_')[1],16),rank=rank,axes=axes,data=dtype,evidence=str(p.relative_to(ROOT)),status='decompiler type candidate; emulation pending'))
(ROOT/'evidence/lookup-layouts.json').write_text(json.dumps(rows,indent=2))
for r in rows:
 if None in r['axes'] or r['data'] is None:print('unresolved',r)
print('layouts',len(rows),'candidate complete',sum(None not in r['axes'] and r['data'] is not None for r in rows))
