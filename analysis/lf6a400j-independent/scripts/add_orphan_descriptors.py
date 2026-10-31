"""Add descriptors referenced only from functions recovered by ExportOrphans.java (cdump-orphan/) to
evidence/calibrations.json, using the already node-tested lookup layouts (evidence/lookup-layouts.json +
emulation-results).  Records carry status 'orphan-code call site'."""
import json, re, glob, os, struct, hashlib, sys
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H); E = f'{ROOT}/evidence'
rom = open(f'{ROOT}/../../roms/LF6A400J_A501A14007-20241119-175005.bin', 'rb').read()
T = {'uint8': ('B', 1), 'int8': ('b', 1), 'uint16': ('H', 2), 'int16': ('h', 2), 'uint32': ('I', 4), 'int32': ('i', 4)}
layouts = {l['target']: l for l in json.load(open(f'{E}/lookup-layouts.json'))}
cal = json.load(open(f'{E}/calibrations.json'))
have = {c['descriptor'] for c in cal}
added = []
for p in sorted(glob.glob(f'{ROOT}/cdump-orphan/*.c')):
    fn = int(os.path.basename(p)[:-2], 16)
    for m in re.finditer(r'LK_([0-9A-F]{6})\(\(uint\)&(?:DAT_|T_)0*([0-9a-fA-F]+)', open(p).read()):
        tgt, d = int(m.group(1), 16), int(m.group(2), 16)
        if d in have or tgt not in layouts:
            continue
        L = layouts[tgt]; rank = L['rank']
        dims = [rom[d], rom[d + 8]][:rank]
        axes = [struct.unpack_from('>I', rom, d + 4 + i * 8)[0] for i in range(rank)]
        data = struct.unpack_from('>I', rom, d + (16 if rank == 2 else 8))[0]
        av = [list(struct.unpack_from('>' + str(n) + T[t][0], rom, a)) for a, n, t in zip(axes, dims, L['axes'])]
        cnt = dims[0] * (dims[1] if rank == 2 else 1)
        dv = list(struct.unpack_from('>' + str(cnt) + T[L['data']][0], rom, data))
        rec = dict(descriptor=d, rank=rank, dimensions=dims,
                   axes=[dict(address=a, storage=t, raw_values=v) for a, t, v in zip(axes, L['axes'], av)],
                   data_address=data, data_storage=L['data'], data_min=min(dv), data_max=max(dv), data_count=cnt,
                   data_sha256=hashlib.sha256(rom[data:data + cnt * T[L['data']][1]]).hexdigest(),
                   calls=[dict(call=None, function=fn, target=tgt, r4=d)], semantic_name=None, physical_scaling=None,
                   status='layout from node-tested lookup routine; call site in function recovered from orphan code (ExportOrphans.java)')
        cal.append(rec); have.add(d); added.append(hex(d))
json.dump(cal, open(f'{E}/calibrations.json', 'w'), indent=2)
print('added', added)
