"""Pin manually reviewed RPM provenance and inventory further caller-chain candidates.
No calibration names or conversions are imported from an existing ECU definition.
"""
import json, struct, hashlib, collections
from pathlib import Path
from scan_rom import SHA, ROM
ROOT=Path(__file__).resolve().parents[1]; E=ROOT/'evidence'; b=ROM.read_bytes()
assert hashlib.sha256(b).hexdigest()==SHA
calls=json.loads((E/'symbolic-calls.json').read_text()); bycall={c['call']:c for c in calls}
incoming=collections.defaultdict(list)
for c in calls: incoming[c['target']].append(c)
ssm=json.loads((E/'ssm-address-map.json').read_text()); sm={x['ssm_address']:x['ram_address'] for x in ssm['entries']}
assert sm[0xe]==0xffff0f66 and sm[0xf]==0xffff0f67 and sm[0x11]==0xffff05d0
# Exact reviewed converter instructions: extu.w, multiply 25, right-shift 5.
assert b[0xd0c3a:0xd0c48].hex()=='644de2190247061a460946094601'
assert struct.unpack_from('>f',b,0x7e49c)[0]==25/128
assert bycall[0xd1d8a]['arguments'][:2]==[['ram',0xffff2994,16,True],0xffff0f66]
assert bycall[0xd1982]['arguments'][:2]==[['ram',0xffff046c,8,True],0xffff05d0]
proofs=[]
for lookup_call,descriptor,wrapper,parent in [(0x86780,0x2c9ac,0x86758,0x874fa),(0x8678c,0x2c998,0x86758,0x874fa),(0x8679c,0x2c9d4,0x86758,0x874fa),(0x867a8,0x2c9c0,0x86758,0x874fa),(0x86a94,0x2ca00,0x86a50,0x87536)]:
 c=bycall[lookup_call];p=bycall[parent]
 assert c['function']==wrapper and c['arguments'][:2]==[descriptor,['u16',['arg',1]]]
 assert p['target']==wrapper and p['arguments'][1]==['ram',0xffff2994,16,True]
 assert [x['call'] for x in incoming[wrapper]]==[parent], 'new caller requires review'
 proofs.append(dict(descriptor=descriptor,axis_index=0,name='Engine Speed',units='RPM',expression='x*25/128',to_byte='x*128/25',format='0.00',source_signal=0xffff2994,call_chain=[parent,lookup_call],status='reviewed binary arithmetic and caller chain',limitation='Applies to recovered call paths; complete indirect-call coverage is not claimed.'))
result=dict(rom_sha256=SHA,protocol_source='https://raw.githubusercontent.com/RomRaider/RomRaider/master/definitions/log_defs.xml',signals=[dict(address=0xffff2994,storage='uint16',name='Engine Speed',units='RPM',expression='x*25/128',evidence=['A8 handler 0x7BCBA indexes pointer table 0x15F9D8; SSM 0x0E/0x0F map to 0xFFFF0F66/67','Formatter call 0xD1D8A passes RAM 0xFFFF2994 to converter 0xD0C38; output=floor(raw*25/32); SSM units are output/4 RPM','Independent load calculation uses literal float 25/128 at 0x7E49C'],diagnostic_quantization='SSM output truncates to quarter RPM; firmware internal scale independently confirmed by exact float literal'),dict(address=0xffff046c,storage='int8',name='Diagnostic ignition timing input',units='degrees BTDC',expression='x/2',evidence=['SSM 0x11 maps to 0xFFFF05D0','Formatter call 0xD1982 passes RAM 0xFFFF046C to converter 0xD0638; byte output=(raw+128) modulo 256','Standard SSM timing conversion is (output-128)/2'],limitation='Does not establish the role or scaling of upstream calibration tables.')],verified_axes=proofs)
(E/'signal-evidence.json').write_text(json.dumps(result,indent=2)+'\n')
# Candidate propagation follows only identity arguments and width coercions. These
# remain investigation leads: a static caller inventory can miss indirect calls.
def sources(expr,fn,path=()):
 if not isinstance(expr,list):return [dict(source=expr,path=list(path))]
 if expr[0] in ['u16','s16']:return sources(expr[1],fn,path)
 if expr[0]=='arg' and expr[1]<4 and len(path)<8:
  if not incoming[fn]:return [dict(source=expr,path=list(path),unresolved_function=fn)]
  out=[]
  for c in incoming[fn]:
   if c['call'] in path:continue
   out+=sources(c['arguments'][expr[1]],c['function'],path+(c['call'],))
  return out
 return [dict(source=expr,path=list(path))]
layouts={l['target']:l for l in json.loads((E/'lookup-layouts.json').read_text())};candidates=[]
for c in calls:
 if c['target'] not in layouts:continue
 for i,expr in enumerate(c['arguments'][1:1+layouts[c['target']]['rank']]):
  ss=sources(expr,c['function']);rpm=[s for s in ss if isinstance(s['source'],list) and s['source'][:3]==['ram',0xffff2994,16]]
  if rpm:candidates.append(dict(call=c['call'],descriptor=c['arguments'][0],axis_index=i,sources=ss,all_recovered_sources_rpm=len(rpm)==len(ss),status='candidate pending assembly review'))
(E/'rpm-axis-candidates.json').write_text(json.dumps(candidates,indent=2)+'\n')
print(f'{len(proofs)} reviewed RPM axes; {len(candidates)} RPM caller-chain candidates')
