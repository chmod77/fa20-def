"""Build a LOCKED raw RomRaider research definition from fresh binary/code evidence.
Not a complete tuning definition. No legacy definition is read or imported.
"""
from pathlib import Path
import json,struct,csv,collections,hashlib,xml.etree.ElementTree as ET
from scan_rom import SHA,ROM
ROOT=Path(__file__).resolve().parents[1]; E=ROOT/'evidence'
T={'uint8':('B',1),'int8':('b',1),'uint16':('H',2),'int16':('h',2),'uint32':('I',4),'int32':('i',4)}
b=ROM.read_bytes();assert hashlib.sha256(b).hexdigest()==SHA
layouts={l['target']:l for l in json.loads((E/'lookup-layouts.json').read_text())}
results=collections.defaultdict(list)
for r in csv.DictReader((E/'emulation-results.tsv').open(),delimiter='\t'):results[int(r['target'],16)].append(r['result'])
verified={k for k,v in results.items() if v and all(x=='PASS' for x in v)}
calls=json.loads((E/'all-calls.json').read_text());bydesc=collections.defaultdict(list)
for c in calls:
 if c['target'] in layouts:bydesc[c['r4']].append(c)
records=[];unresolved=[]
def values(a,n,t):return list(struct.unpack_from('>'+str(n)+T[t][0],b,a))
for a,uses in sorted(bydesc.items(),key=lambda p:p[0] or 0):
 if a is None or not 0<=a<len(b)-20:
  unresolved.append(dict(descriptor=a,reason='dynamic/RAM descriptor or unknown pointer',calls=uses));continue
 sigs={(layouts[c['target']]['rank'],tuple(layouts[c['target']]['axes']),layouts[c['target']]['data']) for c in uses}
 if len(sigs)!=1 or any(c['target'] not in verified for c in uses):
  unresolved.append(dict(descriptor=a,reason='conflicting layout or unverified lookup',calls=uses));continue
 rank,ats,dt=next(iter(sigs));dims=[b[a],b[a+8]][:rank];axes=[struct.unpack_from('>I',b,a+4+i*8)[0] for i in range(rank)];data=struct.unpack_from('>I',b,a+(16 if rank==2 else 8))[0]
 try:
  if min(dims)<2:raise ValueError('degenerate dimension')
  av=[values(x,n,t) for x,n,t in zip(axes,dims,ats)];dv=values(data,dims[0]*(dims[1] if rank==2 else 1),dt)
  if any(any(v[i]>v[i+1] for i in range(len(v)-1)) for v in av):raise ValueError('nonmonotonic axis under proposed storage type')
 except (ValueError,struct.error) as e:
  unresolved.append(dict(descriptor=a,reason=str(e),calls=uses));continue
 records.append(dict(descriptor=a,rank=rank,dimensions=dims,axes=[dict(address=x,storage=t,raw_values=v) for x,t,v in zip(axes,ats,av)],data_address=data,data_storage=dt,data_min=min(dv),data_max=max(dv),data_count=len(dv),data_sha256=hashlib.sha256(b[data:data+len(dv)*T[dt][1]]).hexdigest(),calls=uses,semantic_name=None,physical_scaling=None,status='raw layout supported by static calls, decompiler types and synthetic exact-node emulation; semantics unresolved'))
signal_evidence=json.loads((E/'signal-evidence.json').read_text())
assert signal_evidence['rom_sha256']==SHA
axis_proofs={(p['descriptor'],p['axis_index']):p for p in signal_evidence['verified_axes']}
for r in records:
 for i,axis in enumerate(r['axes']):
  if (r['descriptor'],i) in axis_proofs:axis['physical_scaling']=axis_proofs[r['descriptor'],i]
# Preserve aliases in the evidence but show each identical storage view once in XML.
views={}
for r in records:
 key=(r['data_address'],r['data_storage'],tuple(r['dimensions']),tuple((a['address'],a['storage']) for a in r['axes']))
 if key not in views:views[key]=dict(r,descriptor_aliases=[r['descriptor']])
 else:views[key]['descriptor_aliases'].append(r['descriptor'])
root=ET.Element('roms');rom=ET.SubElement(root,'rom');rid=ET.SubElement(rom,'romid')
for k,v in [('xmlid','LF6A400J-INDEPENDENT-RESEARCH'),('internalidaddress','19620'),('internalidstring','LF6A400J'),('filesize',str(len(b)))]:ET.SubElement(rid,k).text=v

def scaling(el,t,proof=None):
 attrs=dict(units='raw',expression='x',to_byte='x',format='0',fineincrement='1',coarseincrement='1',storagetype=t,endian='big')
 if proof:attrs.update({k:proof[k] for k in ['units','expression','to_byte','format']})
 ET.SubElement(el,'scaling',**attrs)
for r in sorted(views.values(),key=lambda x:(x['data_address'],x['descriptor'])):
 rank=r['rank'];desc='; '.join(f'0x{x:X}' for x in r['descriptor_aliases']);handlers=', '.join(f'0x{x:X}' for x in sorted({c['target'] for c in r['calls']}))
 attrs=dict(type='3D' if rank==2 else '2D',name=f'Unidentified {"x".join(map(str,r["dimensions"]))} @0x{r["data_address"]:06X} [D{r["descriptor"]:06X}]',category='Independent research - raw layouts',storageaddress=f'{r["data_address"]:X}',storagetype=r['data_storage'],endian='big',locked='true',userlevel='1',description=f'NOT A VERIFIED TUNING CALIBRATION. Function and physical units unresolved. Descriptor(s): {desc}. Lookup(s): {handlers}. ROM SHA256 {SHA}. See evidence/calibrations.json. Synthetic emulation verifies node addressing, not physical meaning or live ECU operation.')
 if rank==2:attrs.update(sizex=str(r['dimensions'][1]),sizey=str(r['dimensions'][0]))
 else:attrs['sizey']=str(r['dimensions'][0])
 tab=ET.SubElement(rom,'table',**attrs);scaling(tab,r['data_storage'])
 for i,axis in enumerate(r['axes']):
  kind='Y Axis' if rank==1 or i==0 else 'X Axis'
  proof=axis.get('physical_scaling')
  if proof and not all((d,i) in axis_proofs for d in r['descriptor_aliases']):proof=None
  ax=ET.SubElement(tab,'table',type=kind,name=proof['name'] if proof else f'Unidentified input {i+1}',storageaddress=f'{axis["address"]:X}',elements=str(r['dimensions'][i]),storagetype=axis['storage'],endian='big',locked='true');scaling(ax,axis['storage'],proof)
ET.indent(root,space='  ');ET.ElementTree(root).write(ROOT/'RR_LF6A400J_INDEPENDENT_RESEARCH.xml',encoding='utf-8',xml_declaration=True)
(E/'calibrations.json').write_text(json.dumps(records,indent=2));(E/'unresolved.json').write_text(json.dumps(unresolved,indent=2))
summary=dict(rom_sha256=SHA,complete=False,semantic_names_verified=0,physical_scalings_verified=0,axis_scalings_verified=len(axis_proofs),signal_scalings_verified=len(signal_evidence['signals']),lookup_routines=len(layouts),lookup_routines_node_tested=len(verified),emulation_cases=sum(map(len,results.values())),static_lookup_calls=sum(map(len,bydesc.values())),referenced_descriptors=len(bydesc),accepted_descriptor_layouts=len(records),unique_raw_table_views=len(views),unresolved_descriptors=len(unresolved),unresolved_reasons=dict(collections.Counter(r['reason'] for r in unresolved)),coverage_limitation='No claim of all calibrations: scalar constants, switches, indirect/dynamic references, undetected code and semantic identification remain unresolved.')
(E/'coverage.json').write_text(json.dumps(summary,indent=2));print(json.dumps(summary,indent=2))
