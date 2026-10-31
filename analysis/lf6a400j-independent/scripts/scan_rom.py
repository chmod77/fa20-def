"""Discover descriptor-shaped structures directly from a hash-pinned ROM.
Candidates are NOT definitions: code references and lookup layout validation are required.
The format hypotheses are verified by the independent lookup disassembly pass.
"""
from pathlib import Path
import struct,json,hashlib
ROOT=Path(__file__).resolve().parents[1]
ROM=ROOT.parents[1]/'roms/LF6A400J_A501A14007-20241119-175005.bin'
SHA='26fe97c8242409ec328aad7e6336b3cba735edcc861073c17384be82985e3548'
def scan(b):
 candidates=[]
 for a in range(0,len(b)-19,4):
  n=b[a]
  if not n or b[a+1:a+4]!=b'\0\0\0':continue
  x=struct.unpack_from('>I',b,a+4)[0]
  if not 0<x<len(b):continue
  m=b[a+8]
  if m and b[a+9:a+12]==b'\0\0\0':
   y,z=struct.unpack_from('>II',b,a+12)
   if all(0<v<len(b) for v in [y,z]):
    candidates.append(dict(descriptor=a,dimensions=[n,m],axes=[x,y],data=z,length=20));continue
  z=struct.unpack_from('>I',b,a+8)[0]
  if 0<z<len(b):candidates.append(dict(descriptor=a,dimensions=[n],axes=[x],data=z,length=12))
 interiors={c['descriptor']+8 for c in candidates if c['length']==20}
 for c in candidates:c['interior_candidate']=c['descriptor'] in interiors
 return candidates
if __name__=='__main__':
 b=ROM.read_bytes();assert hashlib.sha256(b).hexdigest()==SHA,'Wrong input ROM'
 c=scan(b);(ROOT/'evidence/descriptor-candidates.json').write_text(json.dumps(c,indent=2))
 print(len(c),'descriptor-shaped candidates; not yet validated')
