"""Proven RAM variable dictionary. Each entry: (name, units, expr in x, to_byte, source-evidence).
Every entry is derived from a converter whose code was executed in the emulator over the full input
domain (OBD formatter 0x10C574, SSM formatter 0xD17F0) composed with the public OBD-II / SSM
definitions. Scales are exact constants from the converter code where read from assembly."""
V={
 0xFFFF2994:('Engine Speed','rpm','x*25/128','x*128/25','SSM 0x0E/0F via 0xD0C38; float 25/128 literal'),
 0xFFFF2ADA:('Engine Speed (OBD copy)','rpm','x*25/128','x*128/25','OBD PID 0C via 0x10C19C (x*25/32 = rpm*4)'),
 0xFFFEEEF8:('Accelerator Pedal Angle','%','x*100/65280','x*65280/100','SSM 0x29 direct high byte; P30 x*100/255'),
 0xFFFEF10C:('Accelerator Pedal Sensor D','%','x*100/65280','x*65280/100','OBD PID 49 via 0x10BB60 (x>>8)'),
 0xFFFEF118:('Accelerator Pedal Sensor E','%','x*100/65280','x*65280/100','OBD PID 4A via 0x10BB70 (x>>8)'),
 0xFFFEEECE:('Manifold Absolute Pressure','kPa','x/256','x*256','SSM 0x0D via 0xD0D1C; SSM 0x24 rel. via 0xD06E8'),
 0xFFFEF648:('Manifold Absolute Pressure (OBD)','kPa','x/256','x*256','OBD PID 0B via 0x10C1E0 (x>>8)'),
 0xFFFEE6AA:('Atmospheric Pressure','kPa','x/256','x*256','SSM 0x23 via 0xD0680'),
 0xFFFEF320:('Barometric Pressure (OBD)','kPa','x/256','x*256','OBD PID 33 via 0x10C1B4'),
 0xFFFEF200:('Brake Booster Pressure','kPa','x/256','x*256','SSM 0x104 via 0xD0D2C'),
 0xFFFEEEE4:('Mass Airflow','g/s','x*75/16384','x*16384/75','OBD PID 10 via 0x10C088 (x*0x753>>12 = g/s*100)'),
 0xFFFEE6FE:('Engine Load (Relative)','%','x*100/255','x*255/100','SSM 0x07 via 0xD0BE4'),
 0xFFFF0E5E:('Primary Wastegate Duty','%','x/256','x*256','SSM 0x30 via 0xD07DC'),
 0xFFFF0AF4:('Throttle Opening Angle (target/commanded)','%','x/256','x*256','SSM 0x15 via 0xD1040; OBD PID 4C via 0x10C2FC'),
 0xFFFF00B8:('Main Throttle Sensor','%','x*100/65535','x*65535/100','OBD PID 11 via 0x10C3E0 (x*255/65535); SSM 0x101 V=x*5/65536'),
 0xFFFF00BA:('Sub Throttle Sensor','%','x*100/65535','x*65535/100','OBD PID 47 via 0x10C3B8; SSM 0x100'),
 0xFFFF00C2:('Main Accelerator Sensor','V','x*5/65536','x*65536/5','SSM 0x103 via 0xD0DB8'),
 0xFFFF00C4:('Sub Accelerator Sensor','V','x*5/65536','x*65536/5','SSM 0x102 via 0xD0DD4'),
 0xFFFEEF96:('A/F Sensor #1','lambda','x/8192','x*8192','SSM 0x46 via 0xD0EDC'),
 0xFFFF0D92:('A/F Correction #1','%','x/327.68-100','(x+100)*327.68','SSM 0x09 via 0xD0B28'),
 0xFFFF29A5:('Coolant Temperature','C','x-50','x+50','SSM 0x08 via 0xD1090'),
 0xFFFEF322:('Coolant Temperature (OBD)','C','x*5/2048-40','(x+40)*2048/5','OBD PID 05 via 0x10C420'),
 0xFFFF2B23:('Intake Air Temperature','C','x-50','x+50','SSM 0x12 via 0xD0F28; OBD PID 0F'),
 0xFFFEF344:('Ambient Air Temperature','C','x*5/2048-40','(x+40)*2048/5','OBD PID 46 via 0x10C2E8'),
 0xFFFEF326:('Engine Oil Temperature','C','x*205/65536-40','(x+40)*65536/205','OBD PID 5C via 0x10D4C0'),
 0xFFFEF0D2:('Battery Temperature','C','x-50','x+50','SSM 0x273'),
 0xFFFEF324:('Vehicle Speed','km/h','x*9/160','x*160/9','OBD PID 0D via 0x10C44C (x*0x7333>>19)'),
 0xFFFF65A1:('Vehicle Speed (byte)','km/h','x','x','SSM 0x10'),
 0xFFFEED16:('Fuel Rail Pressure (gauge)','kPa','x*639630/1048576','x*1048576/639630','OBD PID 23 via 0x10BE6C (x*0xF9DB>>20 = kPa/10)'),
 0xFFFEEF18:('Control Module Voltage','V','x*625/2048000','x*2048000/625','OBD PID 42 via 0x10C434'),
 0xFFFF0FE4:('Catalyst Temperature B1S1','C','x/64-40','(x+40)*64','OBD PID 3C via 0x10BB80 (x*5/32 = (C+40)*10)'),
 0xFFFEEEB2:('Mass Airflow Sensor Voltage','V','x*5/65536','x*65536/5','SSM 0x1D via 0xD10A8'),
 0xFFFEF0CA:('Battery Current','A','x/128-100','(x+100)*128','SSM 0x271'),
 0xFFFF0128:('Throttle Motor Duty','raw','x','x','SSM 0xFA (signed, not yet scaled)'),
 0xFFFF0FDC:('Fuel Pump Duty','%','x/10','x*10','SSM 0x3B via 0xD07B0'),
 0xFFFF10D6:('Alternator Duty','%','x*0.06','x/0.06','SSM 0x3A via 0xD0784'),
 0xFFFF1228:('Exhaust OCV Duty Right','%','x/25','x*25','SSM 0x11A'),
 0xFFFF1230:('Exhaust OCV Duty Left','%','x/25','x*25','SSM 0x11B'),
 0xFFFF046C:('Ignition Total Timing','deg BTDC','x/2','x*2','SSM 0x11 via 0xD0638 (signed int8)'),
 0xFFFF046D:('Ignition Timing (OBD)','deg BTDC','x/2','x*2','OBD PID 0E via 0x10BB58 (signed int8)'),
 0xFFFF043B:('CPC Valve Duty Ratio','%','x*100/255','x*255/100','SSM 0x32 via 0xD0754'),
}

# ---- V2: anchors added 2026-10-31 (session 2). Exact converter constants read from GBR-aware decompilation
# (cdump/), composed with the public SSM standard-parameter conversion for the SSM address that the ECU's own
# address table (0x15F9D8) maps to the converter's shadow byte (evidence/ssm-join.tsv, ssm-derived-anchors.tsv).
V2={
 0xFFFEEEDE:('Coolant Temperature (filtered, word)','C','x*5/2048-40','(x+40)*2048/5','0x4D2D6: x=(FFFEEF86*8-0x5000)/5; 0x3C578: SSM-coolant FFFF29A5=FFFEEF86>>8 (SSM 0x08 x-50) => C=x*5/2048-40 (same form as OBD PID05 F322)'),
 0xFFFEEF86:('Coolant Temperature (filtered, 1/256 C)','C','x/256-50','(x+50)*256','0x3C578: FFFF29A5 (SSM 0x08, C=x-50) = x>>8'),
 0xFFFEEEB6:('A/F Sensor #1 Resistance','ohm','x/128','x*128','SSM 0x44 conv 0xD065C y=x*2^25>>32'),
 0xFFFF008E:('Throttle Motor Voltage','V','x/10','x*10','SSM 0xFB conv 0xD06CC y=x*5/4, V=y*8/100'),
 0xFFFF3691:('A/F Learning #1','%','(x-128)*100/256','x*256/100+128','SSM 0x0A conv 0xD0A3C y=x/2+64, %=(y-128)*100/128'),
 0xFFFEEF2A:('Front O2 Heater Current #1','A','x*179*1004/6553600','x*6553600/(179*1004)','SSM 0x2B conv 0xD0B0C y=x*179>>8, A=y*1004/25600'),
 0xFFFEE6D0:('Rear O2 Heater Current','A','x*179*1004/6553600','x*6553600/(179*1004)','SSM 0x2C conv 0xD0E58 (probe-identical to 0xD0B0C)'),
 0xFFFEE6DE:('Rear O2 Sensor','V','x/400','x*400','SSM 0x18 conv 0xD0C68 y=x>>1, V=y/200'),
 0xFFFEED6C:('Tumble Valve Position Sensor Left','V','x/200','x*200','SSM 0x34 conv 0xD0F80 y=x>>2, V=y/50'),
 0xFFFEED6E:('Tumble Valve Position Sensor Right','V','x/200','x*200','SSM 0x33 conv 0xD0FB0 y=x>>2, V=y/50'),
 0xFFFFAB41:('Battery Voltage','V','x*8/100','x*100/8','SSM 0x1C conv 0xD10B8 y=x, V=y*8/100'),
 0xFFFF0EDE:('Fuel Level Sensor Resistance','ohm','x/4','x*4','SSM 0x10D conv 0xD05A8 y=x>>3, ohm=y*4/2'),
 0xFFFEF2B8:('Exhaust AVCS Advance Angle Right','deg','x*45/16384','x*16384/45','SSM 0x118 conv 0xD08F8 (=0xD08CC form) y=(x*45>>14)+50, deg=y-50; signed'),
 0xFFFEF2BA:('Exhaust AVCS Advance Angle Left','deg','x*45/16384','x*16384/45','SSM 0x119 conv 0xD08CC y=(x*45>>14)+50, deg=y-50; signed'),
 0xFFFEF280:('Exhaust OCV Current Right','mA','x*625/16384','x*16384/625','SSM 0x11C conv 0xD093C y=x*625>>19, mA=y*32'),
 0xFFFEF282:('Exhaust OCV Current Left','mA','x*625/16384','x*16384/625','SSM 0x11D conv 0xD0924 y=x*625>>19, mA=y*32'),
 0xFFFEF26C:('Intake OCV Current Right','mA','x*625/16384','x*16384/625','SSM 0x40 conv 0xD0CF0 y=x*625>>19, mA=y*32'),
 0xFFFEF26E:('Intake OCV Current Left','mA','x*625/16384','x*16384/625','SSM 0x41 conv 0xD0CD8 y=x*625>>19, mA=y*32'),
 0xFFFEF006:('A/F Sensor #1 Current','mA','x/1000','x*1000','SSM 0x42 conv 0xD0A5C y=x/125+128, mA=(y-128)/8; signed'),
 0xFFFF0DFC:('Intake AVCS Advance Angle Right','deg','x-104','x+104','SSM 0x3C conv 0xD0EA8 y=x-0x68+50, deg=y-50 (byte)'),
 0xFFFF0DFD:('Intake AVCS Advance Angle Left','deg','x-104','x+104','SSM 0x3D conv 0xD0E74 y=x-0x68+50, deg=y-50 (byte)'),
 0xFFFF0E06:('Intake OCV Duty Right','%','x*65*100/(64*255)','x*64*255/(65*100)','SSM 0x3E conv 0xD0CA4 y=x*65>>6, %=y*100/255 (byte)'),
 0xFFFF0E07:('Intake OCV Duty Left','%','x*65*100/(64*255)','x*64*255/(65*100)','SSM 0x3F conv 0xD0C70 y=x*65>>6, %=y*100/255 (byte)'),
 0xFFFF2B4E:('Fuel Injector #1 Pulse Width','ms','x*0.0032','x/0.0032','SSM 0x20 conv 0xD0FCC y=x*0x3333>>20 (=x/80), ms=y*256/1000'),
 0xFFFF04BB:('Fine Learning Knock Correction','deg','x*45/128','x*128/45','SSM 0x199 conv 0xD0D50 y=(x*45>>5)-128, deg=y*0.25-32; signed'),
 0xFFFF3669:('IAM (Ignition Advance Multiplier)','multiplier','x/16','x*16','SSM 0xF9 maps directly to RAM FFFF3669 (ECU table 0x15F9D8), public x/16'),
 0xFFFF0586:('SI-Drive Mode','index','x','x','SSM 0x16A maps directly to RAM FFFF0586 (ECU table 0x15F9D8)'),
 0xFFFF312E:('Idle Speed User Adjustment (A/C off)','rpm','x*25-3200','(x+3200)/25','SSM 0x70 direct RAM (ECU table)'),
 0xFFFF312F:('Idle Speed User Adjustment (A/C on)','rpm','x*25-3200','(x+3200)/25','SSM 0x71 direct RAM (ECU table)'),
 0xFFFF102E:('Roughness Monitor Cylinder #1','count','x','x','SSM 0xCE conv 0xD267C'),
 0xFFFF1030:('Roughness Monitor Cylinder #2','count','x','x','SSM 0xCF conv 0xD2690'),
 0xFFFF1032:('Roughness Monitor Cylinder #3','count','x','x','SSM 0xD8 conv 0xD26A4'),
 0xFFFF1034:('Roughness Monitor Cylinder #4','count','x','x','SSM 0xD9 conv 0xD26B8'),
 0xFFFEEEF4:('Mass Airflow (load-path copy)','g/s','x*75/16384','x*16384/75','OBD PID 43 conv 0x10B91C: x*0.0045776367 g/s / (rpm/60) /2 / 0.59142184 g *100 = absolute load %; 0x4E6D4 copies MAF EEE4'),
}

V2.update({
 0xFFFF2996:('Engine Speed (high byte)','rpm','x*50','x/50','0x3BF24: x = FFFF2994>>8; FFFF2994 rpm=x*25/128 => rpm = x*256*25/128'),
 0xFFFEF0DA:('Vehicle Speed (copy)','km/h','x*9/160','x*160/9','0x3CCF6: x = FFFEF324 (OBD PID0D km/h=x*9/160); failsafe 0xB2'),
 0xFFFEEEE0:('Coolant Temperature (OBD copy)','C','x*5/2048-40','(x+40)*2048/5','0x4D2FA/0x4E6D4: x = FFFEF322 (OBD PID05); failsafe 0xB000'),
 0xFFFEEED0:('Atmospheric Pressure (copy)','kPa','x/256','x*256','0x4D034: x=FFFEEEDC; 0x4D042: FFFEEEDC = FFFEE6AA (SSM 0x23 kPa)'),
 0xFFFEE6A5:('Intake Air Temperature (control)','C','x-50','x+50','0x3BAF2: same thermistor table 0x1638A4 applied to FFFEF480 (=copy of IAT A/D FFFEF482, failsafe 0xAA00, update held by soak counter); SSM IAT FFFF2B23 = same table of FFFEF482 (SSM 0x12 x-50)'),
 0xFFFEEEE2:('Intake Air Temperature (control, word)','C','x*5/2048-40','(x+40)*2048/5','0x4D2B0: x=(FFFEE6A5*2048-0x5000)/5; FFFEE6A5 C=x-50'),
 0xFFFEF643:('Intake Air Temperature (sensor)','C','x-50','x+50','0x3BAF2: FFFF2B23 (SSM 0x12) = x'),
 0xFFFEED6A:('Intake Air Temperature Sensor 2','C','x-50','x+50','OBD PID 68 byte C (sensor 2) conv 0x10C0B8 y=x-10, C=y-40; written 0x3BDC6 from table 0x1638B0'),
 0xFFFF29A7:('Coolant Temperature (sampled)','C','x-50','x+50','0x3C578: x = FFFF29A5 (SSM 0x08) when FFFF66B0==1 or FFFEEF80==0, else held'),
})

V2.update({
 0xFFFEE6F8:('Manifold Absolute Pressure (control)','kPa','x/256','x*256','0x153E70: x=FFFF1FA8; 0x14AE50: FFFF1FA8 and OBD-MAP source FFFF1FB8 (->FFFEF648, PID 0B kPa=x/256) are the same conversion 0x14AE38 of A/D channel 0x12 (FFFFF82C)'),
 0xFFFF09B8:('Manifold Absolute Pressure (filtered)','kPa','x/256','x*256','0x7E298->0x7E568(1,FFFEE6F8,..): filtered copy of FFFEE6F8'),
 0xFFFF09B4:('Engine Load','%','x/256','x*256','0x7E3F8: %=(airflow/2586*200000)/rpm, airflow FFFF169C=VE*rpm*P[Pa]/(287*(IAT+273)) (0xCFEDC; P from 0xCF8C8 in Pa: fallback FFFEE6F8*3.90625), VE FFFF16A4 = T_02ED10/T_02ED24/32768 (0xD025C) => %=VE*rho/1.293 g/L*100 (air density at 0 C, 101.325 kPa); stored *256'),
 0xFFFF03A0:('Engine Load','%','x','x','0x7E3E8: x = FFFF09B4>>8 (Engine Load %, x/256)'),
})

V2.update({
 0xFFFEF540:('Manifold Absolute Pressure (offset form)','kPa','x/256+13.3','(x-13.3)*256','0x14AE50: FFFF1FB2=(ADch0x12*0x13B>>8)-0x24EC vs MAP FFFF1FB8=(same)-0x17A0 (OBD PID0B kPa=x/256): offset 0xD4C=13.3*256; 0x153E70 FFFEF540=FFFF1FB2'),
 0xFFFF09BA:('Manifold Absolute Pressure (filtered, offset form)','kPa','x/256+13.3','(x-13.3)*256','0x7E298->0x7E4AC(param_2=1): filtered FFFEF540; alt. branch encodes Pa as (kPa*256-3404.8)'),
 0xFFFF0E56:('Target Boost (absolute, offset form)','kPa','x/256+13.3','(x-13.3)*256','0xBD7C4: target=(T_02E5F4+3404)*FFFF0E58/32768-3404 (FFFF0E58 comp. multiplier); 0xBD300: error = this - FFFF09BA'),
 0xFFFF0E2E:('Wastegate Duty (pre-check)','%','x/256','x*256','0xBDA84: FFFF0E5E (SSM 0x30) = this in normal mode'),
})

V2.update({
 0xFFFEEF84:('Engine Oil Temperature (1/256 C)','C','x/256-50','(x+50)*256','0x3C90E: same value as OBD PID5C source (FFFEF326=(x-0xA00)*256/205, C=F326*205/65536-40)'),
 0xFFFEEF33:('Engine Oil Temperature','C','x-50','x+50','0x3C90E: x = FFFEEF84>>8'),
 0xFFFF2A04:('Engine Speed (byte, 31.25 rpm)','rpm','(x+16)*31.25','x/31.25-16','0x3BF24: x=max(FFFF2988/2-40,0)*4/10, FFFF2988=(FFFF2994>>4+1)>>1 (rpm*0.16) => rpm=(x+16)*31.25 (0 below 500 rpm)'),
 0xFFFF09D0:('Engine Speed / Vehicle Speed Ratio','rpm per km/h','x/256','x*256','0x7F424: x = FFFF2994*50/FFFF65A1 (rpm raw*25/128 / km/h *256)'),
 0xFFFF03AE:('Gear (calculated)','gear','x','x','0x7F71C: gear 1..6 from FFFF09D0 ratio bands (0=none)'),
 0xFFFF03AC:('Gear','gear','x','x','0x7F490: debounced FFFF03AE (or TCU gear FFFEF51A when FFFEE710.7 set)'),
})

V2.update({
 0xFFFEECB4:('Accelerator Pedal Angle (selected)','%','x*100/65280','x*65280/100','0x69F44: x = FFFEF134, or SSM pedal angle FFFEEEF8 (SSM 0x29 %=x*100/65280) when sensor flags set, or min(F134,F13A)'),
 0xFFFF0400:('Open Loop Fuel Enrichment (primary)','lambda','256/(256+x)','256/x-256','0x8F8C0 -> FFFF0401 -> OBD PID44 conv 0x10C32C: lambda=256/(256+0B84+0401+0B42)'),
 0xFFFF0401:('Open Loop Fuel Enrichment','lambda','256/(256+x)','256/x-256','OBD PID44 conv 0x10C32C: commanded lambda = 0x800000/(0B84+0401+0B42+256)/32768'),
})

_TQ = ' Torque type Nm=(x-16000)/80 anchored at 0xC3FA8 (kW->Nm via 60000/2pi, stored *80+16000, clamps = u16 range).'
V2.update({
 0xFFFF0A62:('Requested Torque','Nm','(x-16000)/80','x*80+16000','0x820A0: = FFFF0A44 (limited); 16000-offset torque domain of 0x82FA0.'+_TQ),
 0xFFFF0A4A:('Requested Torque A (pedal)','Nm','(x-16000)/80','x*80+16000','0x81448 out (stack arg at 0x830CC).'+_TQ),
 0xFFFF0A4E:('Requested Torque B (pedal)','Nm','(x-16000)/80','x*80+16000','0x81498 out.'+_TQ),
 0xFFFF0A52:('Requested Torque C (pedal)','Nm','(x-16000)/80','x*80+16000','0x8151C out.'+_TQ),
 0xFFFF0A56:('Requested Torque D (pedal)','Nm','(x-16000)/80','x*80+16000','0x815A0 out.'+_TQ),
})


V2.update({
 0xFFFF299C:('Engine Speed (byte, 25 rpm)','rpm','x*25','x/25','0x143640: FFFF1A3A = 48e6/period (-> FFFF2994 rpm, x*25/128, copied at 0x154C8C/0x157038/0x15824E) and FFFF1A3C = ((3e6/period)+4)>>3 = FFFF1A3A/128 (rounded); FFFF299C = FFFF1A3C (0x154C9A/0x157042/0x15825A) => rpm = x*128*25/128 = x*25'),
 0xFFFF1A3C:('Engine Speed (byte, 25 rpm, source)','rpm','x*25','x/25','0x143640, see FFFF299C'),
})

V2.update({
 0xFFFEF0A6:('Battery Temperature (control)','C','x-50','x+50','0x3D1B2: same table 0x163904 as SSM battery temperature FFFEF0D2 (SSM 0x273, C=x-50), input FFFEF0D0'),
 0xFFFEED18:('Fuel Rail Pressure (filtered)','kPa','x*639630/1048576','x*1048576/639630','0x3DE28: same signal uVar4 as OBD FRP FFFEED16 (PID23) with a different filter constant'),
})

V2.update({
 0xFFFF2A3C:('Manifold Vacuum (Atmospheric - MAP)','kPa','x/256','x*256','0x3B634: x = max(FFFEE6AA atmospheric - FFFF09B8 filtered MAP, 0), both kPa = x/256'),
 0xFFFF2AF0:('Engine Speed (filtered)','rpm','x*25/128','x*128/25','0x4DD16: first-order filter of FFFF2ADA'),
})

V2.update({
 0xFFFF1564:('Injection Time Cylinder 1','us','x*0.8','x/0.8','0x1569D6: SSM 0x20 PW FFFF2B4E (ms=x*0.0032) = this>>2 (pointer table 0x168EAC)'),
 0xFFFF0BC8:('Injector Latency','us','x*0.8','x/0.8','0x922F4: injection time FFFF1564 = 1.25*(this*0.8 + ...) in 0.8us units'),
})

V2.update({
 0xFFFEF18E:('Control Module Voltage (copy)','V','x*625/2048000','x*2048000/625','0x4C0E8/0x4CDB2: x = FFFEEF18 (OBD PID42 V = x*625/2048000) or substitute'),
})

V2.update({
 0xFFFF0D08:('Target Idle Speed (base, table)','rpm','x*25/128','x*128/25','0xAB238 helper table by mode FFFF04D7; see 0xAB09C proof'),
 0xFFFF0D0A:('Target Idle Speed (base, rate-limited)','rpm','x*25/512','x*512/25','0xAB2FC = FFFF0D08<<2; 0xAB09C adds SSM 0x70 adjustment *128 (rpm*128/25) to 0D0A>>2'),
 0xFFFF04D4:('Idle Speed User Adjustment (clamped)','rpm','x*25-3200','(x+3200)/25','0xAB210 clamp(FFFF312E/312F, 0x7C..0x8C)'),
 0xFFFF04BA:('Knock Correction Advance Max (blended)','deg','x*45/128','x*128/45','0xA2F20 blend of T_02DA80/T_02DA94; unit via 0x96F3C (x*90/128 in 0.5 deg) and SSM 0x199'),
 0xFFFF04A4:('Knock Correction Advance (IAM applied)','deg','x*45/128','x*128/45','0x9EEE0 = IAM FFFF3669 * 04BA / 16'),
 0xFFFF04AD:('Knock Correction Retard','deg','x*45/128','x*128/45','0x98FAC adds x*180/256 in 0.5 deg; written by 0x9F368 (signed)'),
 0xFFFF11B8:('Intake AVCS Target (raw)','deg','x*180/65536','x*65536/180','0xF8EE0 param_13; 0xF92CC converts with 0.0027465818 deg/count'),
 0xFFFF1208:('Exhaust AVCS Target (raw)','deg','x*180/65536','x*65536/180','0xFC52C param_13; 0xFC918 same conversion'),
 0xFFFF047B:('Ignition Timing Term 047B','deg','x/2','x*2','0x98FAC adds to FFFF046C in 0.5 deg'),
 0xFFFF0479:('Ignition Timing IAT Adder','deg','x/2','x*2','0x99558 sums into 0473 (0.5 deg)'),
})
V2.update({
 0xFFFF1276:('Target Fuel Rail Pressure','kPa','x*1250/2048','x*2048/1250','OBD PID 0x6D bytes B-C (commanded FRP A, 10 kPa/bit) via 0x10C408 x*125/2048 -> 12F6 -> 39D2 (handler 0x71C92)'),
})
V2.update({
 0xFFFF0CFE:('Target Idle Speed (final)','rpm','x*25/128','x*128/25','0xAB09C out (stack slot 0x8C = FFFF0CEA, +20; disasm 0xA884A..0xA8C44) = 0D0A/4 + adjustment'),
 0xFFFF0D0C:('Target Idle Speed Ramp Step','rpm/step','x*25/512','x*512/25','0xAB3C4; 0xAB2FC rate limit on FFFF0D0A'),
})
