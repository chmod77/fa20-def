from pathlib import Path
import json,struct
ROOT=Path(__file__).resolve().parents[1];out=ROOT/'evidence/fixtures';out.mkdir(exist_ok=True)
T={'uint8':('B',1),'int8':('b',1),'uint16':('H',2),'int16':('h',2),'uint32':('I',4),'int32':('i',4)}
rows=[]
for l in json.loads((ROOT/'evidence/lookup-layouts.json').read_text()):
 if l['data'] is None or None in l['axes']:continue
 rank=l['rank'];dims=[3,4][:rank];fixture=bytearray(2048);axisvals=[]
 for i,(n,t) in enumerate(zip(dims,l['axes'])):
  width=T[t][1];vals=([-60,-20,20,60] if t.startswith('int') else [10,70,150,240] if width==1 else [100,10000,40000,60000])[:n]
  axisvals.append(vals);offset=i*8;fixture[offset]=n;struct.pack_into('>I',fixture,offset+4,0x200000+0x100+i*0x100)
  struct.pack_into('>'+str(n)+T[t][0],fixture,0x100+i*0x100,*vals)
 dataoffset=8 if rank==1 else 16;struct.pack_into('>I',fixture,dataoffset,0x200300)
 n=dims[0]*(dims[1] if rank==2 else 1);t=l['data'];width=T[t][1];mask=(1<<(8*width))-1
 vals=[]
 for j in range(n):
  v=((j+1)*17+(1<<(8*width-1))*(j%2))&mask
  if t.startswith('int') and v>>(8*width-1):v-=mask+1
  vals.append(v)
 struct.pack_into('>'+str(n)+T[t][0],fixture,0x300,*vals)
 path=out/f'{l["target"]:08x}.bin';path.write_bytes(fixture)
 for i,x in enumerate(axisvals[0]):
  for j,y in enumerate(axisvals[1] if rank==2 else [0]):
   expected=vals[i*(dims[1] if rank==2 else 1)+j]&mask
   rows.append(f'{l["target"]:x}\t{path}\t{x&0xffffffff:x}\t{y&0xffffffff:x}\t{expected:x}\t{mask:x}')
(ROOT/'evidence/emulation-cases.tsv').write_text('\n'.join(rows)+'\n')
print('emulation cases',len(rows))
