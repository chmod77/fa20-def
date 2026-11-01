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
V2.update({
 0xFFFF03D3:('Ignition Timing (torque-model selected)','deg','x/2','x*2','0x86B58 selects 0458/0531/0532/0533; 0x88478 compares |03D3 - 046C|'),
 0xFFFF0458:('Ignition Timing (knock-advance path)','deg','x/2','x*2','0x96F3C; selected into 03D3 by 0x86B58'),
})
V2.update({
 0xFFFF0DBA:('Target Lambda (A/F #3 base)','lambda','x/43194','x*43194','0xB5B38 AFR*65536/22 = lambda*43194 (14.5/43194 constant)'),
})

# derived pure copies of proven variables (scripts/copies.py -> evidence/derived-copies.json)
import os as _os, json as _json
_dc = _os.path.join(_os.path.dirname(_os.path.abspath(__file__)), '..', 'evidence', 'derived-copies.json')
if not _os.environ.get('NO_V3') and _os.path.exists(_dc):
    for _k, _v in _json.load(open(_dc)).items():
        V2.setdefault(int(_k, 16), tuple(_v))
V2.update({
 0xFFFF0ADC:('Torque (loss/offset term, 0ADC)','Nm','(x-16000)/80','x*80+16000','0x8267C: (FFFF0A62 + 0ADA - 16000) - 0ADC + 16000 with Requested Torque 0A62 (torque type) -> same type'+_TQ),
 0xFFFF0ADA:('Torque (adder term, 0ADA)','Nm','(x-16000)/80','x*80+16000','0x8267C: FFFF0A62 + 0ADA - 16000 (torque-type addition)'+_TQ),
})
_FQ = ' 0x910D8: fuel quantity FFFF0BA4 = base*(0.5 + (0507 + 0B62 + 0407 + 03EC + p3)/256 + (0B72 + 0B38)/65536).'
V2.update({
 0xFFFF0B62:('Fuel Quantity Fraction Term 0B62','%','x*100/256','x*256/100','additive term'+_FQ),
 0xFFFF0B80:('Fuel Quantity Fraction Term 0B80','%','x*100/256','x*256/100','0x9106C additive term'+_FQ),
 0xFFFF0407:('Fuel Quantity Fraction Term 0407','%','x*100/256','x*256/100','additive term'+_FQ),
 0xFFFF03EC:('Fuel Quantity Fraction Term 03EC','%','x*100/256','x*256/100','additive term'+_FQ),
 0xFFFF0B72:('Fuel Quantity Fraction Term 0B72','%','x*100/65536','x*65536/100','additive term'+_FQ),
 0xFFFF0B38:('Fuel Quantity Fraction Term 0B38','%','x*100/65536','x*65536/100','additive term'+_FQ),
})
V2.update({
 0xFFFF0B8E:('Injection Angle A','deg CA','x/2','x*2','0x44EAC: (0B8E - 0B90 + 720)*FFFF2986/90 vs injection time; 2986<<3 = 720 deg'),
 0xFFFF0B8A:('Injection Angle B','deg CA','x/2','x*2','0x8DEA0 treats with 0B8E/0B90 as crank angles (/360, 720/1080 limits)'),
 0xFFFF0B90:('Injection Angle C','deg CA','x/2','x*2','0x44EAC: 0B90 - 0B8E angle difference'),
})
V2.update({
 0xFFFF38F8:('Target Lambda Learning Offset','lambda offset','x/43194','x*43194','0xB3260: 0D80 = 0DBA + 38F8 with 0DBA = lambda*43194'),
 0xFFFF39F6:('Target Lambda Learning Offset (latched)','lambda offset','x/43194','x*43194','0x11BD7C: latched copy of 38F8'),
})
V2.update({0xFFFF0A7A:('Torque (scaled 0ADC, 0A7A)','Nm','(x-16000)/80','x*80+16000','0x826D4: 16000 + (0ADC-16000)*T/32768'+_TQ)})
V2.update({
 0xFFFF0A78:('Torque (adder term, 0A78)','Nm','(x-16000)/80','x*80+16000','0x8034C: 0A7A + 0A78 - 16000 (torque-type addition)'+_TQ),
 0xFFFF0A64:('Torque (limit, 0A64)','Nm','(x-16000)/80','x*80+16000','0x8034C: min(0A64, torque sum)'+_TQ),
})
V2.update({0xFFFF0A1E:('Torque (0ADC - 0ADA, 0A1E)','Nm','(x-16000)/80','x*80+16000','0x80D54: 0ADC - 0ADA + 16000'+_TQ)})
V2.update({
 0xFFFF0AE8:('Torque Term 0AE8','Nm','(x-16000)/80','x*80+16000','0x86680 torque-type sum with 0ADC'+_TQ),
 0xFFFF0AAA:('Torque 0AAA','Nm','(x-16000)/80','x*80+16000','0x85434: 0AF8 = 0AAA - 0AE8 + 16000'+_TQ),
 0xFFFF0ABC:('Torque 0ABC (delayed)','Nm','(x-16000)/80','x*80+16000','0x85940 delayed scaled 0AAA'+_TQ),
})
V2.update({
 0xFFFF0A44:('Requested Torque (pre-limit, 0A44)','Nm','(x-16000)/80','x*80+16000','0x820A0: Requested Torque 0A62 = 0A44 limited (call 0x840F4)'+_TQ),
 0xFFFF0A5E:('Torque Ramp Previous (0A5E)','Nm','(x-16000)/80','x*80+16000','0x81394 (call 0x840B0) selects 0A44 from 0A5E/min(12B0,0A5C)/0F24 by comparisons'+_TQ),
 0xFFFF0A5C:('Torque Ramp Target (0A5C)','Nm','(x-16000)/80','x*80+16000','0x81394 p8: min(12B0, 0A5C) -> 0A44'+_TQ),
 0xFFFF0A58:('Torque Ramp Output (0A58)','Nm','(x-16000)/80','x*80+16000','0x8208C: 0A5E = max(0A42, 0A58); 0x815F0 0A58 = min(0A5C, ramp)'+_TQ),
 0xFFFF0A42:('Torque Term 0A42','Nm','(x-16000)/80','x*80+16000','0x8208C: 0A5E = max(0A42, 0A58)'+_TQ),
})
V2.update({
 0xFFFF12B0:('Torque 12B0','Nm','(x-16000)/80','x*80+16000','0x81394 (call 0x840B0): p2=12B0 replaced by p8=0A5C (Torque Ramp Target) when smaller, then compared with 0A5E'+_TQ),
 0xFFFF1282:('Accelerator Pedal Angle Limit','%','x*100/65280','x*65280/100','0x82C34: when FFFF03C6==0x18 and pedal FFFEEEF8 <= 1282, output = 1282 (else pedal): same unit as SSM 0x29 pedal'),
})
V2.update({
 0xFFFF0532:('Ignition Timing (0532 path)','deg','x/2','x*2','0x86B58: Ignition Timing 03D3 = 0532 when FFFF0530 == 2 (03D3 0.5 deg)'),
 0xFFFF0531:('Ignition Timing (0531 path)','deg','x/2','x*2','0x86B58: Ignition Timing 03D3 = 0531 when FFFF0530 == 0 (03D3 0.5 deg)'),
 0xFFFF0533:('Ignition Timing (0533 path)','deg','x/2','x*2','0x86B58: Ignition Timing 03D3 = 0533 when FFFF0530 == 3 (03D3 0.5 deg)'),
})
V2.update({
 0xFFFEF33C:('Engine Speed (filtered OBD copy)','rpm','x*25/128','x*128/25','0x4EA64: FFFEF33C = filter 0x16B4D8(FFFEF33C, FFFF2ADA, 0xFFFF) - a first-order filter of Engine Speed (OBD copy) keeps its unit'),
 0xFFFF0D06:('Engine Speed 0D06 (reference)','rpm','x*25/128','x*128/25','0x80968: 0D06 - FFFEF33C (filtered rpm) is a difference, so 0D06 is in rpm (x*25/128)'),
})
V2.update({
 0xFFFF0A40:('Torque Limit 0A40','Nm','(x-16000)/80','x*80+16000','0x82028: Torque Ramp Target 0A5C = min(0A40, T, T)'+_TQ),
 0xFFFF0A46:('Torque 0A46','Nm','(x-16000)/80','x*80+16000','0x810A0: 0A40 = min(0A46, limit)'+_TQ),
})
V2.update({
 0xFFFF0D10:('Target Idle Speed (0D10)','rpm','x*25/128','x*128/25','0xAB738: FFFF0D06 (rpm, SSM via 0xD0C50) = 0D10'),
 0xFFFF0D0E:('Target Idle Speed (0D0E)','rpm','x*25/128','x*128/25','0xAB784: 0D10 = 0D0E when FFFF04CC.4 clear'),
 0xFFFF0D02:('Target Idle Speed (0D02)','rpm','x*25/128','x*128/25','0xAB758: 0D0E = max(0D02, FFFEED47*1024/25); writer 0xAB150 (emulation): 0D02 = min(0D12, (0D08>>6)<<6), 0D08 = Target Idle Speed (base)'),
})
V2.update({
 0xFFFF0AAE:('Torque 0AAE','Nm','(x-16000)/80','x*80+16000','0x86F74: (0AAE-16000)*8192/(0ADC-16000) torque ratio; 0x85580 = 0AAC + P - 16000'+_TQ),
})
V2.update({
 0xFFFF0A04:('Torque 0A04','Nm','(x-16000)/80','x*80+16000','0x8034C p5 (r13+48): min(0A64, 0A7A + 0A78 - 0ADA)'+_TQ),
 0xFFFF0A30:('Torque Limit 0A30','Nm','(x-16000)/80','x*80+16000','0x80EF4: min(0A04, T(rpm))'+_TQ),
 0xFFFF0A76:('Torque 0A76','Nm','(x-16000)/80','x*80+16000','0x82664: 0A30 or 0A04'+_TQ),
})
V2.update({
 0xFFFEECB0:('Mass Airflow (sensor curve, 32-bit)','g/s','x/76800','x*76800','0x3D45E: MAF curve 0x14B7C; 0x4C53C: Mass Airflow FFFEEEE4 (OBD PID10, g/s=x*75/16384) = 16*ECB0/5625'),
 0xFFFEEED2:('Manifold Gauge Pressure (MAP - Atmospheric, halved)','kPa','x/128','x*128','0x4D602: x = (MAP FFFEEECE - Atmospheric FFFEEED0)/2, both kPa = x/256 (signed)'),
})
V2.update({
 0xFFFF0D44:('Radiator Fan Control','%','x*100/65536','x*65536/100','SSM 0x2F (P92 Radiator Fan Control %) via converter 0xD0E40 (byte = x*25>>14); 0xB0234 sets it to mode constants 0xFFFF/0x8000/0xB333 = 100/50/70 %'),
 0xFFFF0D48:('Radiator Fan Duty Request 0D48','%','x*100/65536','x*65536/100','0xB0234 (call 0xB0076): 0D44 = 0D48 in mode 1 and max(0D3C, 0D48) in mode 7'),
 0xFFFF0D3C:('Radiator Fan Duty Request 0D3C','%','x*100/65536','x*65536/100','0xB0234: in mode 7 0D44 = 0D3C (min 0x8000) compared with 0D48'),
})
V2.update({
 0xFFFF2986:('Crank Period (180 deg CA)','ms','x*0.0032','x/0.0032','0x1426AA: = 2B6C = (ticks of the 10 MHz counter per 180 deg CA)/32; rpm (OBD) = 48e6/2B6C*25/128'),
 0xFFFF2B00:('Engine Speed (170 deg segment, misfire)','rpm','x*25/128','x*128/25','0x4DFF2: = 272e6*16/3/2F3C with 2F3C = 10 MHz ticks over 170 deg CA (0x15A822 tooth window) => 3e8*(170/180)... = rpm*128/25'),
})
V2.update({
 0xFFFF2B0C:('Engine Speed Fluctuation (2nd difference, 2B0C)','rpm','x*25/128','x*128/25','0x4E098: sat16((2B02-2B00)-(2B06-2B04)), segment speeds 2B00.. (rpm x*25/128)'),
 0xFFFF2B0E:('Engine Speed Fluctuation (2nd difference, 2B0E)','rpm','x*25/128','x*128/25','0x4E0C6: sat16((2B02-2B00)-(2B0A-2B08))'),
})
V2.update({
 0xFFFEEF10:('Time Since FFFEEEC1.0 Cleared','s','x*0.01','x/0.01','0x4CA56 (from 0x4C10A): +1 per call (saturating) while FFFEEEC1.0 clear, else 0; 0x4C10A runs every 10 ms (task 8 via 0x152A40 / task 28 via 0x153CE0, alarm cycles 10 x 1 ms tick)'),
})
V2.update({
 0xFFFEF406:('Accelerator Pedal Angle (unlimited)','%','x*100/65280','x*65280/100','0x6825A: SSM pedal FFFEEEF8 = min(F406, FFFF13C2) (0x16BD78 = min)'),
 0xFFFF13C2:('Accelerator Pedal Angle Limit 13C2','%','x*100/65280','x*65280/100','0x6825A: SSM pedal FFFEEEF8 = min(FFFEF406, 13C2)'),
 0xFFFEF134:('Accelerator Pedal Angle Sensor 1','%','x*100/65280','x*65280/100','0x6825A: F406 = min(F134, F13A) -> SSM pedal EEF8 = min(F406, 13C2)'),
 0xFFFEF13A:('Accelerator Pedal Angle Sensor 2','%','x*100/65280','x*65280/100','0x6825A: F406 = min(F134, F13A)'),
})
V2.update({
 0xFFFF13AC:('Time While FFFF0935.6 Set','s','x*0.01','x/0.01','0x11EE38 (from 0x11F134, called unconditionally by the 10 ms task 0x152A40): counter +1 per call while the flag is set, else 0; output FFFF13A6+6'),
 0xFFFF13B2:('Time While FFFF0935.5 Set','s','x*0.01','x/0.01','0x11EF0C (from 0x11F134, 10 ms): counter +1 per call while the flag is set, else 0; output FFFF13B0+2'),
})
V2.update({
 0xFFFF03D7:('Required Torque Efficiency','ratio','x/256','x*256','0x870FC: 03D7 = (FFFF0AA8 * r/32768) >> 7 with 0AA8 = Torque Efficiency vs Ignition Retard (T_02C8DC, 32768 = efficiency at zero retard) and r a torque ratio (32768 = 1.0); 0x9B384 uses 03D7<<7 as the T_02D890 input'),
})
V2.update({
 0xFFFF0B9A:('Open Loop Enrichment (phi-1)','%','x*100/32768','x*32768/100','0xB5B38 target AFR = (...)*14.5/43194 - 14.5*0B9A/(32768+0B9A): 0B9A = (phi-1)*32768, lambda = 32768/(32768+x)'),
})
V2.update({
 0xFFFF0A8E:('Accelerator Pedal Angle (limited, 0A8E)','%','x*100/65280','x*65280/100','0x82C34 (emulation: EmuFindWriter 0x82FA0 -> write at 0x82C4A): 0A8E = 1282 (pedal limit) when FFFF03C6 == 0x18 and pedal <= 1282, else Accelerator Pedal Angle FFFEEEF8 (SSM 0x29)'),
})
V2.update({
 0xFFFF0D12:('Target Idle Speed (0D12)','rpm','x*25/128','x*128/25','0xAB150 (call 0xA8F36; writer of 0D02 found by emulation): 0D02 = min(0D12, (0D08>>6)<<6) with 0D08 Target Idle Speed (base) rpm'),
})
V2.update({
 0xFFFF0DA4:('A/F Correction #1 (before offset, 0DA4)','%','x/327.68-100','(x+100)*327.68','0xB34BC (emulated call 0xB4FC4: p5 = @(30,0D86) = 0DA4, p7 = 0D92): A/F Correction #1 FFFF0D92 (SSM 0x09) = 0DA4 [+ coolant offset in mode 10]'),
 0xFFFF0DAE:('A/F Correction #1 Lower Limit (0DAE)','%','x/327.68-100','(x+100)*327.68','0xB538C: 0DA4 = min(max(0DAE, 0D9A), 0xACCD); 0xB5A24 writes 0DAE (emulation)'),
 0xFFFF0D9A:('A/F Correction #1 (unclamped, 0D9A)','%','x/327.68-100','(x+100)*327.68','0xB538C: 0DA4 = min(max(0DAE, 0D9A), 0xACCD); 0xB5088 copies it (emulation)'),
})
V2.update({
 0xFFFF0DA6:('A/F Correction #1 Integrator (signed)','%','x/327.68','x*327.68','0xB518C (writer of 0D9E, found by emulation): 0D9E = 0DA6 + p6 + 32768 (16-bit), clamped 0x3334..0xA53F, then 0D9A -> 0DA4 -> A/F Correction #1 0D92 (SSM 0x09, % = x/327.68 - 100); 0xB53D4 p22 = 0DA6'),
 0xFFFF0D86:('A/F Correction #1 Integrator (filtered)','%','x/327.68','x*327.68','0xB508C: first-order filter (0x16B520) of 0DA6; 0xB518C uses it as the P-term source'),
})
V2.update({
 0xFFFF1422:('Torque 1422 (monitor)','Nm','(x-16000)/80','x*80+16000','0x123CF0 (code twin of 0x8034C; writer found by emulation, call 0x125B1A): 1422 = min(Torque 0A64, a + c - b) in torque-type arithmetic'+_TQ),
})
V2.update({
 0xFFFF0F56:('Air Charge Rate (VE*density*rpm, 0F56)','g/L*rpm','x/5','x*5','0xCF6D4: 0F56 = 1698>>8 (0xCFE6C), 1698 = 169C*1280 (0xCFE80), 169C = VE*rho[g/L]*rpm (0xCFEDC); Engine Load % = 169C*77.34/rpm (0x7E3F8) => 169C = 0F56/5'),
})
V2.update({
 0xFFFF0F1A:('Torque 0F1A (0.1 Nm)','Nm','(x-10000)/10','x*10+10000','0x820A0 / 0x124E28: limit = 0F1A*8 - 64000 compared with Torque 0A44 / 1438 (torque type, Nm = (y-16000)/80) => Nm = (8x-80000)/80 = (x-10000)/10'),
 0xFFFF0F0E:('Torque 0F0E (0.1 Nm)','Nm','(x-10000)/10','x*10+10000','0xAA4C0 (idle, call 0xA9C56): ratio = (0F0E*8 - 64000 - 16000)*32768/(Torque 0ADC - 16000), same 8x-64000 torque encoding as 0F1A in 0x820A0'),
})
V2.update({
 0xFFFF1452:('Torque 1452 (copy of 0A5E)','Nm','(x-16000)/80','x*80+16000','0x125420: copy helper 0x124E24(Torque 0A5E, &1452); only other writer 0x123D4C init 16000'),
 0xFFFF1436:('Torque Limit 1436','Nm','(x-16000)/80','x*80+16000','0x123FE0: = FFFF1452 - T + 16000 (torque-type difference) limited, or FFFF144C'),
 0xFFFF1450:('Torque Limit 1450','Nm','(x-16000)/80','x*80+16000','0x124E10: max(FFFF1436, FFFF144C)'),
})
V2.update({
 0xFFFEF14A:('Accelerator Pedal Angle Change (per sample)','%','x*100/65280','x*65280/100','0x68B96: clamp16(Accelerator Pedal Angle FFFEEEF8 - previous sample FFFEF14E); 0x6825A: FFFEF14E = FFFEEEF8'),
 0xFFFEF146:('Accelerator Pedal Angle Change (2 samples)','%','x*100/65280','x*65280/100','0x68B96: clamp16(Accelerator Pedal Angle FFFEEEF8 - FFFEF150), FFFEF150 = previous FFFEF14E (0x6825A)'),
})
V2.update({
 0xFFFF29A6:('Coolant Temperature (byte, 0.624 C)','C','x*256/410-40','(x+40)*410/256','0x3C578: x = (min(max(FFFF29A5 - 10, 0), 0x9F)*0x19A + 0x80) >> 8, FFFF29A5 = SSM coolant (C = x-50) => x = (C+40)*410/256'),
})
V2.update({
 0xFFFF29A8:('Coolant Temperature (sampled, byte, 0.624 C)','C','x*256/410-40','(x+40)*410/256','0x3C578: x = (min(max(FFFF29A7 - 10, 0), 0x9F)*0x19A + 0x80) >> 8, FFFF29A7 = sampled coolant (C = x-50) => x = (C+40)*410/256'),
})
V2.update({
 0xFFFEE160:('Accelerator Pedal Angle (rate-limited, E160)','%','x*100/65280','x*65280/100','0x11FF90: only writer; = Accelerator Pedal Angle FFFEF406 (param_6) when it is <= the limited value, else the ramped value'),
})
_THR = (' Chain: 0x646E6 FFFF00D6 = slew-limited Main Throttle Sensor FFFF00B8 (OBD PID 11, % = x*100/65535); 0x64792 FFFF00CA = 00D6; '
        '0x64D5C/0x65644 FFFF34DE = 00CA, averaged into FFFF00EE (0x64E88/0x65A5E) = learned closed position FFFF34C0 (0x64A76/0x65E74); '
        '0x66A7C FFFF00E8 = 00CA - 34C0 + 1000 (sub sensor 00EA likewise, 00EC = gain-matched third channel); 0x66FB8 FFFF002A = one of '
        '00E8/00EA/00EC (single runtime store 0x6712C).')
V2.update({
 0xFFFF00D6:('Main Throttle Sensor (slew-limited)','%','x*100/65535','x*65535/100','0x646E6: step-limited copy (10000 per call) of Main Throttle Sensor FFFF00B8'),
 0xFFFF00CA:('Main Throttle Sensor (validated)','%','x*100/65535','x*65535/100','0x64792: = FFFF00D6 (0xFC17 on fault)'),
 0xFFFF34C0:('Throttle Closed Position (learned)','%','x*100/65535','x*65535/100','learned from averages of FFFF34DE = 00CA (0x64E88/0x65A5E -> FFFF00EE -> 34C0)'),
 0xFFFF00E8:('Throttle Opening above Closed (main, +1000)','%TPS','(x-1000)*100/65535','x*65535/100+1000','0x66A7C: 00CA - 34C0 + 1000.'+_THR),
 0xFFFF002A:('Throttle Opening above Closed (selected, +1000)','%TPS','(x-1000)*100/65535','x*65535/100+1000','0x66FB8: selected from 00E8/00EA/00EC.'+_THR),
 0xFFFF00B4:('Throttle Opening (10-bit, +10)','%TPS','(x-10)*6400/65535','x*65535/6400+10','0x67142: x = ((FFFF002A - 1000) >> 6) + 10, clamped 10..0x3F2.'+_THR),
 0xFFFF29B4:('Throttle Opening (0.1 %)','%TPS','x/10','x*10','0x69F44: x = FFFF02C4 - 10, 0x676CC: FFFF02C4 = (FFFF00B4*64000 + 0xFFFF) >> 16 => % = ((x+10)*1.024 - 10)*6400/65535 = 0.100003*x + 0.02 (offset below one count).'+_THR),
 0xFFFF29B7:('Throttle Opening (0.4 %)','%TPS','x*0.4','x/0.4','0x3B712: x = sat8(FFFF29B4 >> 2); FFFF29B8..29BC are the previous samples (shift register)'),
 0xFFFF29B6:('Throttle Opening (0.4 %, 29B6)','%TPS','x*0.4','x/0.4','0x3B712: x = sat8(FFFF29B4 >> 2)'),
 0xFFFF2A26:('Throttle Opening (0.4 %, 2A26)','%TPS','x*0.4','x/0.4','0x3B712: x = FFFF29B6'),
})
for _i in range(1, 6):
    V2[0xFFFF29B7 + _i] = (f'Throttle Opening (0.4 %, {_i} samples ago)', '%TPS', 'x*0.4', 'x/0.4', '0x3B712: shift register FFFF29B8..29BC <- FFFF29B7')
V2.update({
 0xFFFF29C2:('Throttle Opening Change (2 samples, +128)','%TPS','(x-128)*0.4','x/0.4+128','0x3B712: clamp0..255(FFFF29B7 + 0x80 - FFFF29B9) (0x16B5A4), 29B7 = throttle 0.4 %'),
 0xFFFF29C3:('Throttle Opening Change (4 samples, +128)','%TPS','(x-128)*0.4','x/0.4+128','0x3B712: clamp0..255(FFFF29B7 + 0x80 - FFFF29BB)'),
 0xFFFF29C8:('Throttle Opening Change (5 samples, +128)','%TPS','(x-128)*0.4','x/0.4+128','0x3B712: clamp0..255(FFFF29B7 - FFFF29BC + 0x80)'),
 0xFFFF29C4:('Throttle Opening Change (4 samples, +128, word)','%TPS','(x-32768)*0.4/256','x*256/0.4+32768','0x3B712: FFFF29C3 << 8'),
})
V2.update({
 0xFFFF0D80:('A/F Learning #3 (target lambda)','lambda','x/43194','x*43194','SSM 0xD1 via 0xD0B8C: byte = ((x<<15)/0xA8BA - 0x8000)>>8 - 0x80, i.e. x/43194 = 1.0 at 0x80 offset; 0xB3260: 0D80 = 0DBA + 38F8 (lambda*43194)'),
 0xFFFF0DC2:('A/F Correction #3 (target lambda incl. offset)','lambda','x/43194','x*43194','0xB44E2: 0xB5D28 writes r12+28 = 0x0DA6+0x1C = 0DC2 = clamp(0DBA + 0DEA) (0DBA = lambda*43194 = AFR*65536/22); SSM 0xD0 via 0xD0B44 byte = ((x>>1)-0x5587)*0x3BDD>>18 + 0x40 is % deviation from AFR 14.7 (0x5587*2 = 43790 = 14.7*65536/22)'),
 0xFFFEEEB4:('EGR Steps','steps','x','x','SSM 0x39 via 0xD088C (steps = x)'),
})
V2.update({
 0xFFFF0DEA:('Target Lambda Offset (0DEA)','lambda offset','x/43194','x*43194','0xB5D28 (call 0xB44E2): A/F Correction #3 0DC2 = 0DBA + (signed) 0DEA, 0DBA = lambda*43194'),
})
V2.update({
 0xFFFF0DE0:('Target Lambda Offset Term 0DE0','lambda offset','x/43194','x*43194','0xB7248: 0DEA = 0DE0 + 0DE2 + 38F8 + 0F82 (sum with the proven offset 38F8)'),
 0xFFFF0DE2:('Target Lambda Offset Term 0DE2','lambda offset','x/43194','x*43194','0xB7248: 0DEA = 0DE0 + 0DE2 + 38F8 + 0F82'),
 0xFFFF0F82:('Target Lambda Offset Term 0F82','lambda offset','x/43194','x*43194','0xB7248: 0DEA = 0DE0 + 0DE2 + 38F8 + 0F82'),
 0xFFFF0DF2:('Target Lambda (alternative, 0DF2)','lambda','x/43194','x*43194','0xB5D28: A/F Correction #3 0DC2 = 0DF2 (param_4 via @(8,0DEA)) when FFFF06CE.3 and calibration byte 0xD698 are set, else 0DBA + 0DEA'),
 0xFFFF0DF4:('Target Lambda (alternative, unclamped, 0DF4)','lambda','x/43194','x*43194','0xB7C24: 0DF2 = min(max(0DF4, T_02E448), T_02E454)'),
})
_CRU = (' 0x106990 (from 0x101A90; stack args 5 = 12C2, 9 = 127C, 11 = FFFF07AC, 15 = 12BE, 22 = 127E, 24 = &12C6): a = Memorised Cruise '
        'Speed FFFF07AC (SSM 0x10A, km/h) * 10; 12C6 is assigned either 12C2 or a*64/5 (= km/h*128), clamped by 12BE, stepped by +/-127C; '
        'b = 127E*5/64 is compared with a.  => km/h = x/128.')
V2.update({
 0xFFFF07AC:('Memorised Cruise Speed','km/h','x','x','SSM 0x10A reads FFFF07AC directly (km/h = x)'),
 0xFFFF12C6:('Cruise Target Speed (12C6)','km/h','x/128','x*128','0x106990 output.'+_CRU),
 0xFFFF12C2:('Vehicle Speed (cruise, filtered CAN, 12C2)','km/h','x/128','x*128','0x1068D0: = filter(T_02FC98(0554, CAN value 0F42)); assigned into 12C6 in 0x106990.'+_CRU),
 0xFFFF12BE:('Cruise Speed Limit (12BE)','km/h','x/128','x*128','0x106990 clamps 12C6 with 12BE (param_15).'+_CRU),
 0xFFFF127C:('Cruise Speed Step (127C)','km/h','x/128','x*128','0x106990: 12C6 = EDAC6 +/- 127C (param_9).'+_CRU),
 0xFFFF127E:('Cruise Speed Band (127E)','km/h','x/128','x*128','0x106990: b = 127E*5/64 compared with cruise speed*10 (0.1 km/h).'+_CRU),
})
V2.update({
 0xFFFF12AA:('Cruise Speed 12AA','km/h','x/128','x*128','0x105678 (stack arg 24): = 12C2 (param_18) +/- T_02FAxx or 12C6 (param_16), clamped by 12BA and 0x6746 (206.5 km/h)'),
})
_TQC = (' Chain from proven Torque Limit 1436 (0x123FE0, FFFF1452 - T + 16000 with 1452 = copy of Torque 0A5E): 0x124E10 1450 = max(1436, 144C) '
        '=> 144C; 0x124430 end: 144C = min(144E, puVar14) => 144E; 0x124DB8: 144E = min(1434, T_030474, T_030460); 0x123F08: 1434 = '
        'min(143A, T_0300A4 / CAN default 16000 + x*160); 0x124268: 143A = 146C or 147C; 0x124F74: 146C = 16000-offset blend of '
        '1444/1440/143C/1448.')
V2.update({
 0xFFFF144C:('Torque Limit 144C','Nm','(x-16000)/80','x*80+16000','0x124E10: compared with proven 1436 (max).'+_TQC),
 0xFFFF144E:('Torque Limit 144E','Nm','(x-16000)/80','x*80+16000','0x124430: 144C = min(144E, ...).'+_TQC),
 0xFFFF1434:('Torque Limit 1434','Nm','(x-16000)/80','x*80+16000','0x124DB8: 144E = min(1434, T, T).'+_TQC),
 0xFFFF143A:('Torque Limit 143A','Nm','(x-16000)/80','x*80+16000','0x123F08: 1434 = min(143A, ...).'+_TQC),
 0xFFFF146C:('Torque Limit 146C (blend)','Nm','(x-16000)/80','x*80+16000','0x124268: 143A = 146C or 147C.'+_TQC),
 0xFFFF143C:('Torque Limit Input 143C','Nm','(x-16000)/80','x*80+16000','0x124F74 blend input (param_5).'+_TQC),
 0xFFFF1440:('Torque Limit Input 1440','Nm','(x-16000)/80','x*80+16000','0x124F74 blend input (param_4).'+_TQC),
 0xFFFF1444:('Torque Limit Input 1444','Nm','(x-16000)/80','x*80+16000','0x124F74 blend input (param_3).'+_TQC),
 0xFFFF1448:('Torque Limit Input 1448','Nm','(x-16000)/80','x*80+16000','0x124F74: assigned to the output in state 4 (param_12).'+_TQC),
})
_SEG = (' Crank segment time: crank code (0x143790) at angle code 10 sets 2B94 = 2B84 - 2B88 (timer captures), 1A3E = sat16(2B94 >> 5) '
        '-> 2B70[cyl] (0x1438F4); 2B6C = 1A3E + 1A40 and 2B90 = 2B94 + 2B98 (0x1438A0..0x1438E4), 2B6C = proven Crank Period 2986 '
        '(ms = x*0.0032) => same unit.  0x15673A EF474..47A = 2B70..2B76; 0x62032 samples = EF476 - EF474 (cylinder 29D3 == 1); 0x61F6A '
        'EF626.. = mean of 10 samples; 0x62318 EF62E = mean of EF626..62C; 0x6235C EF630..636 = EF626..62C - EF62E.')
V2.update({0xFFFEF474 + 2*_i: (f'Crank Segment Time (slot {_i})', 'ms', 'x*0.0032', 'x/0.0032', '0x15673A copy of 2B70.' + _SEG) for _i in range(4)})
V2.update({0xFFFEF626 + 2*_i: (f'Crank Segment Time Difference Mean (slot {_i+1})', 'ms', 'x*0.0032', 'x/0.0032', '0x61F6A.' + _SEG) for _i in range(5)})
V2.update({0xFFFEF630 + 2*_i: (f'Crank Segment Time Deviation (slot {_i+1})', 'ms', 'x*0.0032', 'x/0.0032', '0x6235C.' + _SEG) for _i in range(4)})
V2.update({
 0xFFFEEED4:('Throttle Opening (EED4)','%TPS','x*39062500/(376832*65535)','x*376832*65535/39062500','0x4CAA6: x = (FFFF002A - 1000)*16384*23/390625 (0x16C6F0 = remainder, 0x16C588 = quotient; exact), 002A = throttle opening above closed +1000, % = (x-1000)*100/65535'),
 0xFFFEF5A0:('Throttle Opening Threshold (EF5A0)','%TPS','x*39062500/(376832*65535)','x*376832*65535/39062500','0x5092A: compared with Throttle Opening FFFEEED4 (EF5A0 < EED4 -> EF5A2 = EED4 - EF5A0)'),
})
V2.update({
 0xFFFF0B18:('Throttle Opening Target (0B18)','%TPS','x*39062500/(376832*65535)','x*376832*65535/39062500','0x4CD26: 0B18 + 0x1FD <= FFFEEED4 and FFFEEED4 < 0B18 + 0x23D (direct comparison with Throttle Opening EEED4); 0x88000: = T_02CA90(09D4)*0x62B/0x640'),
})
_REQ = (' Request unit: T_02CA14 (request max(09D4, 0B16) -> target throttle) is the exact inverse of T_02C1A0 (throttle %TPS*10 -> flow '
        'capacity 09C2): CA14 axis = C1A0 data / 2 and CA14 data = C1A0 axis * 64 at all 16 points, so request = 09C2/2, '
        'g/L*rpm = x*2*1.035944 (09C2 proven via the manifold filling model 0xCF8C8).')
V2.update({
 0xFFFF09D4:('Throttle Flow Request (09D4)','g/L*rpm','x*2.071888','x/2.071888','0x7FAA0: = T_02C200(min(0CD8, T_02C1F4)).'+_REQ),
 0xFFFF0B16:('Throttle Flow Request (0B16)','g/L*rpm','x*2.071888','x/2.071888','0x87F78: = T_02CA7C(rpm, 0B0C) or 0A6E.'+_REQ),
 0xFFFF0A6E:('Throttle Flow Request (0A6E)','g/L*rpm','x*2.071888','x/2.071888','0x8223C: = T_02C7C8(0A9A) + 09D4; assigned to 0B16 in state 2.'+_REQ),
})
V2.update({
 0xFFFF1456:('Throttle Flow Request (1456)','g/L*rpm','x*2.071888','x/2.071888','0x1232C0: target throttle = T_030008(1456)*400/0x2B1 (+pedal), T_030008 = same request->throttle data as T_02CA14.'+_REQ),
 0xFFFF1420:('Throttle Flow Request (1420)','g/L*rpm','x*2.071888','x/2.071888','0x124E60: 1456 = T_030488(1470) + 1420 (additive request term).'+_REQ),
})
V2.update({
 0xFFFF0C3A:('Idle Throttle Flow Request (0C3A)','g/L*rpm','x*2.071888','x/2.071888','0xAA4C0 (call 0xA9C56, stack arg 10): = T_02DCE0(rpm, idle torque ratio); T_02DCF4(0C3A) -> 0CDA, T_02DCF4 = exact inverse of T_02C200.'+_REQ),
})
