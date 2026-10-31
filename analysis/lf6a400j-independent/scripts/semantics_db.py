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

# ---------------------------------------------------------------- ignition timing
# Unit chain (all in 0.5 deg): 0x98FAC FFFF046C (SSM 0x11 / OBD PID0E, deg=x/2) = 0473 + (0477-128) + 04AD*180/256
#   + 0494 - 0454 + 047B - 2*0455 + 045A + 0460 ; 0x99558 0473 = 048B + (0459-128) + 0479 + 047A + (T_02D5DC-32) [+T_02D5C8];
#   0x97080 0459=0x80 ; 0x9B4B4 048B = rate-limited 0488 ; 0x9B384 0488 = 03D1 - T_02D890(0AA8), <= 0497, - 048F ;
#   0x86758 03D1 = base map + 049C + 049B.
DEG2 = ('deg', 'x/2', 'x*2', '0.0')
IGN = 'Ignition Timing'
_base_ev = ('0x86758: FFFF03D1 = map(FFFF2994 rpm, FFFF09B4 load) + FFFF049C + FFFF049B; selected by flags FFFF04F4.7 / FFFF054A.4 '
            '(0x87478 passes (04F4&0x80)!=0, (054A&0x10)!=0). 03D1 flows in 0.5 deg units to Ignition Total Timing FFFF046C '
            '(0x9B384 -> 0x9B4B4 -> 0x99558 -> 0x98FAC), SSM 0x11 deg=x/2.')
add(0x2C9C0, 'Base Ignition Timing (flags 04F4.7=0, 054A.4=0)', IGN, _base_ev, DEG2)
add(0x2C9D4, 'Base Ignition Timing (flags 04F4.7=0, 054A.4=1)', IGN, _base_ev, DEG2)
add(0x2C998, 'Base Ignition Timing (flags 04F4.7=1, 054A.4=0)', IGN, _base_ev, DEG2)
add(0x2C9AC, 'Base Ignition Timing (flags 04F4.7=1, 054A.4=1)', IGN, _base_ev, DEG2)
add(0x2D5DC, 'Ignition Timing Compensation (RPM x Load, flag 056B.6)', IGN,
    '0x99558: added to FFFF0473 as (x-32) half-degrees when FFFF056B.6 set (else 32 = neutral); inputs rpm FFFF2994, load FFFF09B4.',
    ('deg', '(x-32)/2', 'x*2+32', '0.0'))
add(0x2D5C8, 'Ignition Timing Compensation (Load x RPM, disabled)', IGN,
    '0x99558: added to FFFF0473 (half-degrees) only if param_2!=0; caller 0x9CBF8 passes constant 0, so never applied in this ROM.', DEG2)
_gear_ev = ('0x9D364: FFFF0494 = -(map*23/128) half-degrees (= map*23/256 deg retard) applied to Ignition Total Timing (0x98FAC); '
            'map selected by gear FFFF03AC (1:D8D4 2:D8E8 3:D8FC 4:D910 5:D924; D8FC also used for flagged states); active when '
            'rpm FFFF2994 >= 0x3800/0x3600 (2800/2637.5 rpm hysteresis) and load FFFF09B4 >= 0x4100/0x3200 (65/50 %).')
for d, g in ((0x2D8D4, '1st'), (0x2D8E8, '2nd'), (0x2D8FC, '3rd / default'), (0x2D910, '4th'), (0x2D924, '5th')):
    add(d, f'Ignition Timing Retard ({g} gear)', IGN, _gear_ev, ('deg retard', 'x*23/256', 'x*256/23', '0.00'))
add(0x2D5BC, 'Minimum Ignition Timing (Coolant)', IGN,
    '0x98FAC: lower clamp of Ignition Total Timing FFFF046C (half-degrees) when FFFEE710.5 clear and 4 < FFFF29B4/4 < 81; '
    'input coolant FFFEEEDE; otherwise floor is -25 deg.', DEG2)

# ---------------------------------------------------------------- boost control (wastegate)
# 0xBC86C orchestration; struct base FFFF0E2E. Final WG duty FFFF0E5E (SSM 0x30, conv 0xD07DC y=x*0xA333>>22, %=y*100/255 => %=x/256)
#   = 0xBDA84(FFFF0E2E) ; 0E2E = min(0E34, 0E30) (0xBCEFC) ; 0E30 = mode 0520: 1->0, 3/5/6->0E46, else 0E4E (0xBCF10);
#   0E4E = min(0E32*0E5C/32768 + 0E50, 0E42) (0xBD2AC): initial*comp + feedback, capped at max.
WG = 'Boost Control - Wastegate'
DUTY = ('%', 'x/256', 'x*256', '0.00')
add(0x2E588, 'Wastegate Duty Initial', WG,
    '0xBCF30: FFFF0E32 = T(rpm FFFF2994, FFFF0A62); 0xBD2AC: duty FFFF0E4E = FFFF0E32*FFFF0E5C/32768 + feedback FFFF0E50 -> WG duty FFFF0E5E (%=x/256).', DUTY,
    description='Y: engine speed; X: FFFF0A62 (torque-domain request, 16000 = zero; units unresolved).')
add(0x2E59C, 'Wastegate Duty Maximum', WG,
    '0xBD11C: FFFF0E42 = T(rpm, FFFF0A62)*FFFF0E5C/32768; 0xBD2AC caps FFFF0E4E at FFFF0E42 -> WG duty.', DUTY,
    description='X: FFFF0A62 (torque-domain request, units unresolved).')
add(0x2E5F4, 'Target Boost', 'Boost Control - Target',
    '0xBD7C4: FFFF0E56 = (T + 0xD4C)*FFFF0E58/32768 - 0xD4C, compared against MAP FFFF09BA (kPa=x/256+13.3, A/D ch 0x12 offset form, 0x14AE50) in 0xBD300 boost-error feedback.',
    ('kPa absolute', 'x/256+13.3', '(x-13.3)*256', '0.0'), description='X: FFFF0A62 (torque-domain request, units unresolved). Value before atmospheric/IAT compensation (FFFF0E58).')
add(0x2E5E0, 'Target Boost Compensation (Atmospheric Pressure)', 'Boost Control - Target',
    '0xBD7A0: FFFF052A = T(rpm, atmospheric FFFEE6AA); 0xBD8F4: FFFF0E58 = IATfactor*052A*2*FFFF0529>>7 multiplies Target Boost (0xBD7C4); 128 = 1.0.',
    ('%', 'x*100/128', 'x*128/100', '0.0'))
add(0x2E620, 'Wastegate Duty Compensation (Atmospheric Pressure)', WG,
    '0xBDA58: FFFF0E5A = T(rpm, atmospheric FFFEE6AA)<<8; 0xBDA04: FFFF0E5C = 0E5A*IATfactor>>7 multiplies WG Duty Initial and Maximum (0xBD2AC/0xBD11C); 128 = 1.0.',
    ('%', 'x*100/128', 'x*128/100', '0.0'))
_fb = ('0xBD300: boost error e = Target Boost FFFF0E56 - MAP FFFF09BA (same offset encoding => kPa = x/256); ')
add(0x2E5D4, 'Wastegate Duty Proportional (Boost Error)', WG, _fb + 'P term = T(e)*IATfactor>>7 -> feedback FFFF0E50 (duty, %=x/256).', DUTY,
    axes={'0': dict(name='Boost Error', units='kPa', expr='x/256', to_byte='x*256')})
add(0x2E5C8, 'Wastegate Duty Integral Positive (Boost Error)', WG, _fb + 'integral step when e > 0xA9 (0.66 kPa) and duty below limit; accumulator clamped at 0x0A00.', DUTY,
    axes={'0': dict(name='Boost Error', units='kPa', expr='x/256', to_byte='x*256')})
add(0x2E5BC, 'Wastegate Duty Integral Negative (Boost Error)', WG, _fb + 'integral step when e < 0 and duty >= 0x500; accumulator clamped at -0x5A00.', DUTY,
    axes={'0': dict(name='Boost Error', units='kPa', expr='x/256', to_byte='x*256')})
add(0x2E5B0, 'Wastegate Feedback Activation Threshold (Target Boost, relative)', WG,
    '0xBD300: s = Target Boost FFFF0E56 - atmospheric FFFEE6AA + 0xD4D = target gauge pressure *256 (offset forms cancel); '
    'P/I feedback is zeroed unless s > T(rpm FFFF2994) (+0x6AA hysteresis) and rpm > 0x1400/0x1600 (1000/1100 rpm) and mode FFFF0520 allows.',
    ('kPa (relative)', 'x/256', 'x*256', '0.00'))

# ---------------------------------------------------------------- fuel target (open loop)
# OBD PID 44 (commanded equivalence ratio, lambda = (256A+B)/32768) formatter 0x10C32C: when FFFF050E.7==0,
#   PID44 = (0x200000/(FFFF0B84 + FFFF0401 + FFFF0B42 + 256))<<2  =>  lambda = 256/(256 + sum): each term is
#   fuel enrichment in (phi-1)*256 units.  FFFF0401 = 0x8F9C0: max(FFFF0400 if >=5, T_02D07C, T_02D094)*T_02D088/128.
#   FFFF0400 = 0x8F8C0 with param_3 = 0 (constant from 0x888C0): T_02D028(rpm, load FFFF03A0) + T_02D050(rpm, load)*(16-IAM)/16.
FUEL = 'Fueling - Open Loop'
LAM = ('lambda', '256/(256+x)', '256/x-256', '0.000')
_ol = 'OBD PID44 (0x10C32C) commanded lambda = 256/(256 + FFFF0B84 + FFFF0401 + FFFF0B42); '
add(0x2D028, 'Primary Open Loop Fueling', FUEL,
    _ol + '0x8F8C0: FFFF0400 = T(rpm FFFF2994, load FFFF03A0) + T_02D050*(16-IAM)/16; 0x8F9C0: FFFF0401 = max(0400,...)*coolant mult/128.', LAM)
add(0x2D050, 'Primary Open Loop Fueling Additive (Low IAM)', FUEL,
    _ol + '0x8F8C0: added to Primary Open Loop Fueling scaled by (16-IAM)/16, IAM = FFFF3669 (SSM 0xF9, x/16): full value at IAM 0, none at IAM 1.0.',
    ('lambda (at IAM 0)', '256/(256+x)', '256/x-256', '0.000'))
add(0x2D03C, 'Primary Open Loop Fueling (Alternate, not selected)', FUEL,
    _ol + '0x8F8C0: only used when param_3!=0; caller 0x888C0 passes constant 0, so it never reaches FFFF0400 in this ROM.', LAM)
add(0x2D064, 'Primary Open Loop Fueling Offset vs FFFF049B (not selected)', FUEL,
    '0x8F8C0: added only on the param_3!=0 path (caller passes 0), so not applied in this ROM. Input FFFF049B (signed byte).', ('raw', 'x', 'x', '0'),
    status='partial')
add(0x2D088, 'Open Loop Fueling Multiplier (Coolant)', FUEL,
    _ol + '0x8F9C0: FFFF0401 = max(enrichments)*T(coolant FFFEEEDE)/128.', ('%', 'x*100/128', 'x*128/100', '0.0'))
add(0x2D07C, 'Open Loop Fueling Enrichment (Accelerator Pedal)', FUEL,
    _ol + '0x8F9C0: candidate in max() for FFFF0401 when FFFF0B30 >= FFFF0B40; input FFFEECB4 = selected accelerator pedal (0x69F44).', LAM)
add(0x2D094, 'Open Loop Fueling Enrichment (input FFFF29B4)', FUEL,
    _ol + '0x8F9C0: candidate in max() for FFFF0401 when FFFF0B30 >= FFFF0B40; input FFFF29B4 = FFFF02C4-10 (0x69F44), physical meaning unresolved.', LAM)

_e42 = (_ol + '0x8CBE4 -> FFFF0B42 (only when FFFF03DF.1 set, else 0): T_02CE08 when coolant FFFEEEDE >= 0xE000 (100 C) and rpm < 0xF000, '
        'T_02CE1C when coolant < 0xDCCD (97.5 C) or rpm max; hysteresis holds the previous selection in between. Inputs rpm FFFF2994, load FFFF03A0.')
add(0x2CE08, 'Fuel Enrichment (Coolant >= 100 C)', FUEL, _e42, LAM)
add(0x2CE1C, 'Fuel Enrichment (Coolant < 100 C)', FUEL, _e42, LAM)
_e84 = (_ol + '0x90390 -> FFFF0B84 (computed only in engine state FFFF66B0 = 2 or 3, otherwise held): T_02D138(coolant FFFEEEDE), or '
        '[T_02D144(load,coolant)*(1-w) + T_02D158(load,coolant)*w]*T_02D16C(rpm)/128 with w = FFFF0E90/65536; the result is limited by a '
        'counter (FFFEBD76) decremented every execution, i.e. the enrichment decays over time.')
add(0x2D138, 'Decaying Fuel Enrichment (Coolant)', FUEL, _e84, LAM)
add(0x2D144, 'Decaying Fuel Enrichment A (Load x Coolant)', FUEL, _e84, LAM)
add(0x2D158, 'Decaying Fuel Enrichment B (Load x Coolant)', FUEL, _e84, LAM)
add(0x2D16C, 'Decaying Fuel Enrichment Multiplier (RPM)', FUEL, _e84, ('%', 'x*100/128', 'x*128/100', '0.0'))


if __name__ == '__main__':
    json.dump({f'0x{k:X}': v for k, v in sorted(S.items())}, open(f'{ROOT}/evidence/semantics.json', 'w'), indent=1)
    print(len(S), 'entries')
