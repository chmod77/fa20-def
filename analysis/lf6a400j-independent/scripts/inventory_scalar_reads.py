"""Inventory direct ROM reads not covered by recovered table storage.
These are leads, not verified scalar calibrations: constants, pointers and headers
may appear here. No entries are promoted to the XML from this inventory.
"""
from pathlib import Path
import csv,json,re,collections
ROOT=Path(__file__).resolve().parents[1];E=ROOT/'evidence';records=json.loads((E/'calibrations.json').read_text());covered=set()
for r in records:
 for a,n,w in [(r['data_address'],r['data_count'],int(re.search(r'\d+',r['data_storage'])[0])//8)]+[(a['address'],len(a['raw_values']),int(re.search(r'\d+',a['storage'])[0])//8) for a in r['axes']]:covered.update(range(a,a+n*w))
rows=collections.defaultdict(list)
for r in csv.DictReader((E/'instructions.tsv').open(),delimiter='\t'):
 if not r['function']:continue
 op=r['instruction'].lstrip('_');m=re.match(r'(mov\.[bwl]|fmov\.s) ',op)
 if not m:continue
 width={'mov.b':1,'mov.w':2,'mov.l':4,'fmov.s':4}[m[1]]
 for ref in r['references'].split(';'):
  if not re.fullmatch(r'[0-9a-f]+:READ',ref):continue
  a=int(ref.split(':')[0],16)
  # This is a search window around the recovered calibration data, not a
  # declaration that every byte in the window is calibration.
  if 0x8000<=a<0x2c140 and not any(x in covered for x in range(a,a+width)):
   rows[(a,width)].append(dict(instruction=r['address'],function=r['function'],operation=op))
with (E/'unclassified-rom-reads.csv').open('w') as f:
 w=csv.writer(f);w.writerow(['address','width_bytes','reference_count','code_references','status'])
 for (a,n),refs in sorted(rows.items()):w.writerow([f'0x{a:06X}',n,len(refs),'; '.join(r['instruction'] for r in refs),'Unclassified ROM read; not a verified calibration'])
print(len(rows),'unclassified direct ROM-read locations in the bounded calibration search window')
