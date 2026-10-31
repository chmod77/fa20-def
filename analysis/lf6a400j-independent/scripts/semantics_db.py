"""Per-descriptor identifications.  Run to regenerate evidence/semantics.json.
Each entry: status 'identified' (name AND output scaling proven) or 'partial' (role proven, output
units not), name, category, data scaling {units, expr, to_byte, format}, axis overrides, evidence.
Evidence strings cite the decompiled function(s) in cdump/ and the anchor chain."""
import json, os
H = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(H)
S = {}


def add(desc, name, category, evidence, data=None, status='identified', description='', axes=None):
    assert desc not in S, hex(desc)
    S[desc] = dict(status=status, name=name, category=category, evidence=evidence, description=description)
    if data:
        u, e, t, *f = data
        S[desc]['data'] = dict(units=u, expr=e, to_byte=t, format=(f[0] if f else '0.00'))
    if axes:
        S[desc]['axes'] = axes


PCT32768 = ('%', 'x*100/32768', 'x*32768/100', '0.00')

# ---------------------------------------------------------------- airflow / load model
add(0x2ED10, 'Volumetric Efficiency (Primary)', 'Airflow - Speed Density',
    '0xD0214 T_02ED10(FFFF2994 rpm, FFFF09B8 MAP) -> FFFF0F5A; 0xD025C ratio=x*3.0517578e-05 (1/32768) -> FFFF16A4 (VE) '
    'used in 0xCFEDC air mass = VE*rpm*P/(287*(T+273)) and 0x7E3F8 Engine Load. Selected path: 0xCF4B4 passes param_2=0 so '
    '0xD025C always takes param_3 (this table).', PCT32768)
add(0x2ED24, 'Volumetric Efficiency (Alternate)', 'Airflow - Speed Density',
    '0xD0238 T_02ED24(rpm, FFFF09B8 MAP) -> FFFF0F5C; 0xD025C would select it only when param_2!=0 and flag FFFF0519.7==0, '
    'but caller 0xCF4B4 passes param_2=0 (constant), so it is not used for FFFF16A4 in this ROM.', PCT32768)


if __name__ == '__main__':
    json.dump({f'0x{k:X}': v for k, v in sorted(S.items())}, open(f'{ROOT}/evidence/semantics.json', 'w'), indent=1)
    print(len(S), 'entries')
