
/* WARNING: Removing unreachable block (ram,0x00069fac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00069f44(void)

{
  byte bVar1;
  
  _DAT_fffef6ea = _DAT_ffff02c4;
  if (DAT_ffff66b0 == '\x04') {
    _DAT_ffff29b4 = 0;
  }
  else {
    _DAT_ffff29b4 = FUN_0016bd34(_DAT_ffff02c4 - 10);
  }
  _DAT_fffeed0c = _DAT_fffeed0a;
  _DAT_fffeed0a = _DAT_fffeed08;
  _DAT_fffeed08 = _DAT_fffeed06;
  _DAT_fffeed06 = _DAT_fffeed04;
  _DAT_fffeed04 = _DAT_fffeecb6;
  if (DAT_ffff66b0 == '\x04') {
    DAT_fffeecfe = 0;
  }
  else {
    DAT_fffeecfe = FUN_0000152c((int)(uint)_DAT_fffeecb6 >> 2);
  }
  if ((DAT_fffeed0e & 0x40) == 0) {
    _DAT_fffeed04 = _DAT_fffeecb6;
    _DAT_fffeed06 = _DAT_fffeecb6;
    _DAT_fffeed08 = _DAT_fffeecb6;
    _DAT_fffeed0a = _DAT_fffeecb6;
    _DAT_fffeed0c = _DAT_fffeecb6;
    DAT_fffeed0e = DAT_fffeed0e | 0x40;
  }
  _DAT_fffeed10 = FUN_0016b5ec((uint)_DAT_fffeecb6 - (uint)_DAT_fffeed0c);
  _DAT_fffeed02 = _v_Accelerator_Pedal_Angle_EEF8;
  if (((((DAT_fffeffed & 0x20) == 0) && ((DAT_fffefff1 & 4) == 0)) && ((DAT_fffeffed & 0x10) == 0))
     && ((DAT_fffefff1 & 4) == 0)) {
    _DAT_fffeecb4 = _DAT_fffef134;
  }
  else if (((int)DAT_ffff34f7 & 0x80U) == 0) {
    _DAT_fffeecb4 = _v_Accelerator_Pedal_Angle_EEF8;
  }
  else {
    _DAT_fffeecb4 = FUN_0016bd78((int)_DAT_fffef134,(int)_DAT_fffef13a);
  }
  if ((DAT_ffff01c6 & 2) == 0) {
    DAT_fffef6ec = DAT_fffef6ec & 0xfe;
  }
  else {
    DAT_fffef6ec = DAT_fffef6ec | 1;
  }
  bVar1 = DAT_fffeecf8 | 4;
  if ((DAT_fffefff7 & 4) == 0) {
    bVar1 = DAT_fffeecf8 & 0xfb;
  }
  DAT_fffeecf8 = bVar1;
  return;
}

