"""Build the named/scaled RomRaider definition for the car ROM (LF6A401A) and the reference ROM (LF6A400J).

Inputs (all binary-derived):
  evidence/calibrations.json        descriptor layouts (LF6A400J; identical in LF6A401A)
  evidence/lookup-input-origins.tsv inter-procedural axis-input provenance
  scripts/variables.py  V, V2       proven RAM-variable scalings (OBD/SSM converter anchors)
  evidence/semantics.json           per-descriptor identification overlay (name, category, data scaling,
                                    axis overrides, evidence).  Only entries with status 'identified'
                                    are unlocked; everything else stays locked.
Axis scaling rule: an axis gets a variable's scaling only when *every* traced origin of that lookup
input, for every alias descriptor of the view, is the same proven RAM variable passed through without
arithmetic (only argument passing, sign/zero extension, truncation, or a full-width mask).
"""
import json, csv, re, os, sys, struct, hashlib, collections
import xml.etree.ElementTree as ET
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H); E = f'{ROOT}/evidence'
sys.path.insert(0, H)
from variables import V, V2
import subsystems
D2R = subsystems.build_map()
HROOT = subsystems.fn_roots()
VV = dict(V); VV.update(V2)
ROMS = {
    'LF6A401A': (f'{ROOT}/../../roms/LF6A401A_T893ESJ92045C7207-20261024-072556.bin',
                 '269298c1e92b78cb51681d52bb1a97c5e59f8472b77544704c19ac51fdd9d531'),
    'LF6A400J': (f'{ROOT}/../../roms/LF6A400J_A501A14007-20241119-175005.bin',
                 '26fe97c8242409ec328aad7e6336b3cba735edcc861073c17384be82985e3548'),
}
cal = json.load(open(f'{E}/calibrations.json'))
HT = json.load(open(f'{E}/helper-tables.json'))
SINK = {int(k, 16): v for k, v in json.load(open(f'{E}/table-sinks.json')).items()} if os.path.exists(f'{E}/table-sinks.json') else {}
SEM = json.load(open(f'{E}/semantics.json')) if os.path.exists(f'{E}/semantics.json') else {}
SEM = {int(k, 16): v for k, v in SEM.items()}

CLEAN = re.compile(r'^RAM:([0-9A-F]{8}):(\d)((?: <-arg\d+@[0-9a-f]+| sext| zext| trunc\d| INT_AND\(#FF(?:FF)?\)))*\s*$')


def input_var(origin):
    alts = [a.strip() for a in origin.split(';;')]
    vs = set()
    for a in alts:
        m = CLEAN.match(a)
        if not m:
            return None
        vs.add(int(m.group(1), 16))
    return vs.pop() if len(vs) == 1 else None


inputs = collections.defaultdict(dict)
for r in csv.DictReader(open(f'{E}/lookup-input-origins.tsv'), delimiter='\t'):
    d = int(r['descriptor'], 16); i = int(r['input']) - 1
    prev = inputs[d].get(i, 'unset')
    v = input_var(r['origins'])
    inputs[d][i] = v if prev in ('unset', v) else None   # conflicting call sites -> unresolved

# primary: C-derived resolution (scripts/resolve_inputs.py); the older p-code trace is used only for
# descriptors the C pass did not see at all.
cin = collections.defaultdict(dict)
for r in csv.DictReader(open(f'{E}/c-input-origins.tsv'), delimiter='\t'):
    cin[int(r['descriptor'], 16)][int(r['input']) - 1] = int(r['var'], 16) if r['var'] else None
for d in cin:
    inputs[d] = cin[d]

# views (alias collapse identical to the research generator)
views = {}
for r in cal:
    key = (r['data_address'], r['data_storage'], tuple(r['dimensions']), tuple((a['address'], a['storage']) for a in r['axes']))
    views.setdefault(key, dict(r, aliases=[]))['aliases'].append(r['descriptor'])


def axis_var(view, i):
    vs = {inputs.get(d, {}).get(i) for d in view['aliases']}
    return vs.pop() if len(vs) == 1 else None


def fmt_for(expr):
    return '0.00'


def scaling(el, storage, units='raw', expr='x', to_byte='x', fmt='0', inc='1'):
    ET.SubElement(el, 'scaling', units=units, expression=expr, to_byte=to_byte, format=fmt,
                  fineincrement=inc, coarseincrement=inc, storagetype=storage, endian='big')


def build(rid, path, sha):
    b = open(path, 'rb').read(); assert hashlib.sha256(b).hexdigest() == sha
    root = ET.Element('roms'); rom = ET.SubElement(root, 'rom'); ri = ET.SubElement(rom, 'romid')
    for k, v in [('xmlid', f'{rid}-FA20DIT-BINARY-DERIVED'), ('internalidaddress', '19620'), ('internalidstring', rid),
                 ('filesize', str(len(b))), ('make', 'Subaru'), ('model', 'Forester SJ (FA20 DIT)'), ('memmodel', 'SH7254'), ('flashmethod', 'none')]:
        if k in ('memmodel', 'flashmethod'):
            continue   # not established from the binary
        ET.SubElement(ri, k).text = v
    stats = collections.Counter()
    for view in sorted(views.values(), key=lambda x: (x['data_address'], x['descriptor'])):
        rank = view['rank']; dims = view['dimensions']; d0 = view['descriptor']
        sem = next((SEM[d] for d in view['aliases'] if d in SEM), None)
        ident = bool(sem and sem.get('status') == 'identified')
        axnames = []
        axes_out = []
        for i, ax in enumerate(view['axes']):
            ov = (sem or {}).get('axes', {}).get(str(i))
            v = axis_var(view, i)
            if ov:
                nm, units, ex, tb = ov['name'], ov['units'], ov['expr'], ov['to_byte']
            elif v in VV:
                nm, units, ex, tb = VV[v][0], VV[v][1], VV[v][2], VV[v][3]
            else:
                nm = f'Unidentified input {i+1}' + (f' (RAM 0x{v:08X})' if v else ''); units, ex, tb = 'raw', 'x', 'x'
            if units != 'raw':
                stats['axes_scaled'] += 1
            stats['axes'] += 1
            axnames.append(nm if units != 'raw' else '?')
            axes_out.append((i, ax, nm, units, ex, tb))
        dimtxt = 'x'.join(map(str, dims))
        if sem and sem.get('name'):
            name = sem['name'] + ('' if ident else ' [output units unresolved]')
        else:
            name = f'Unidentified {dimtxt} [D{d0:06X}]' + (f' ({" x ".join(axnames)})' if any(a != '?' for a in axnames) else '')
        sub = subsystems.category(set().union(*[D2R.get(d, set()) for d in view['aliases']]))
        cat = (sem or {}).get('category') or ('Unidentified - ' + sub)
        desc = [f'Descriptor(s): {", ".join(f"0x{x:X}" for x in view["aliases"])}.']
        if sem:
            desc.append(sem.get('description', ''))
            desc.append('Evidence: ' + sem.get('evidence', ''))
        sinks = sorted(set().union(*[set(SINK.get(d, [])) for d in view['aliases']]))
        if sinks:
            desc.append('Lookup result stored to: ' + ', '.join(
                (x + (f' ({VV[int(x,16)][0]})' if ':' not in x and int(x, 16) in VV else '')) for x in sinks) + '.')
        if not ident:
            desc.append('Function/output scaling not yet proven from the binary; locked.')
        attrs = dict(type='3D' if rank == 2 else '2D', name=name, category=cat, storageaddress=f'{view["data_address"]:X}',
                     storagetype=view['data_storage'], endian='big', userlevel='1', description=' '.join(x for x in desc if x))
        if not ident:
            attrs['locked'] = 'true'
        if rank == 2:
            attrs.update(sizex=str(dims[1]), sizey=str(dims[0]))
        else:
            attrs['sizey'] = str(dims[0])
        tab = ET.SubElement(rom, 'table', **attrs)
        ds = (sem or {}).get('data')
        if ds:
            scaling(tab, view['data_storage'], ds['units'], ds['expr'], ds['to_byte'], ds.get('format', '0.00'), ds.get('inc', '1'))
            stats['data_scaled'] += 1
        else:
            scaling(tab, view['data_storage'])
        for i, ax, nm, units, ex, tb in axes_out:
            kind = 'Y Axis' if rank == 1 or i == 0 else 'X Axis'
            a = ET.SubElement(tab, 'table', type=kind, name=nm, storageaddress=f'{ax["address"]:X}', elements=str(dims[i]),
                              storagetype=ax['storage'], endian='big')
            if not ident:
                a.set('locked', 'true')
            scaling(a, ax['storage'], units, ex, tb, '0.00' if units != 'raw' else '0')
        stats['tables'] += 1
        stats['identified'] += ident
    # ---- secondary (helper-routine) tables: evidence/helper-tables.json, layouts from 0x16B000-0x16CB14 helpers
    for key, t in sorted(HT.items(), key=lambda kv: kv[1]['data_address']):
        tid = int(key, 16)
        sem = SEM.get(tid)
        ident = bool(sem and sem.get('status') == 'identified')
        dst = {'int8': 'uint8', 'int16': 'uint16'}.get(t['data_storage'], t['data_storage']) if not (sem and sem.get('signed')) else t['data_storage']
        n = t['count']
        sites = ', '.join(sorted({x['function'] for x in t['sites']}))
        roots = set().union(*[HROOT.get(x['function'], set()) for x in t['sites']])
        sub = subsystems.category(roots)
        if sem and sem.get('name'):
            name = sem['name'] + ('' if ident else ' [output units unresolved]')
        else:
            name = f'Unidentified secondary {n} @0x{t["data_address"]:06X} [H{tid:06X}]'
        cat = (sem or {}).get('category') or ('Unidentified - ' + sub)
        desc = [f'Secondary table read by helper 0x{int(t["helper"],16):X} (structure/array at 0x{tid:X}); call sites: {sites}.']
        if sem:
            desc += [sem.get('description', ''), 'Evidence: ' + sem.get('evidence', '')]
        if not ident:
            desc.append('Function/output scaling not yet proven from the binary; locked.')
        attrs = dict(type='2D', name=name, category=cat, storageaddress=f'{t["data_address"]:X}', storagetype=dst, endian='big',
                     userlevel='1', sizey=str(n), description=' '.join(x for x in desc if x))
        if not ident:
            attrs['locked'] = 'true'
        tab = ET.SubElement(rom, 'table', **attrs)
        ds = (sem or {}).get('data')
        if ds:
            scaling(tab, dst, ds['units'], ds['expr'], ds['to_byte'], ds.get('format', '0.00'), ds.get('inc', '1'))
            stats['data_scaled'] += 1
        else:
            scaling(tab, dst)
        ov = (sem or {}).get('axes', {}).get('0')
        if t['kind'] == 'struct':
            nm, units, ex, tb = (ov['name'], ov['units'], ov['expr'], ov['to_byte']) if ov else ('Unidentified input (see call sites)', 'raw', 'x', 'x')
            a = ET.SubElement(tab, 'table', type='Y Axis', name=nm, storageaddress=f'{t["axis_address"]:X}', elements=str(n),
                              storagetype=t['axis_storage'], endian='big')
            if not ident:
                a.set('locked', 'true')
            scaling(a, t['axis_storage'], units, ex, tb, '0.00' if units != 'raw' else '0')
        else:
            nm = ov['name'] if ov else 'Input (implicit breakpoints, raw)'
            a = ET.SubElement(tab, 'table', type='Static Y Axis', name=nm, sizey=str(n))
            vals = (sem or {}).get('static_values') or [str(v) for v in t['axis_static']]
            for v in vals:
                ET.SubElement(a, 'data').text = str(v)
        stats['secondary_tables'] += 1
        stats['identified'] += ident
    ET.indent(root, space='  ')
    out = f'{ROOT}/RR_{rid}_FA20DIT.xml'
    ET.ElementTree(root).write(out, encoding='utf-8', xml_declaration=True)
    return out, stats


if __name__ == '__main__':
    for rid, (p, sha) in ROMS.items():
        out, st = build(rid, p, sha)
        print(rid, out, dict(st))
