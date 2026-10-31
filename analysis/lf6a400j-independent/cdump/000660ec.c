
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000660ec(char param_1)

{
  FUN_00066156(param_1);
  _DAT_ffff00ee = 0xffff;
  _DAT_ffff00f0 = 0xffff;
  _DAT_ffff00f2 = 0xffff;
  _DAT_ffff00b4 = 0x3ff;
  if ((param_1 == '\x02') && ((_DAT_ffff34ee == 0 || ((short)(_DAT_ffff34ee + _DAT_ffff34f0) != 0)))
     ) {
    _DAT_ffff34ee = 0x4000;
    _DAT_ffff34f0 = -0x4000;
  }
  DAT_fffef5c6 = '\x01' - (((int)(char)DAT_ffff3130 & 0x80U) == 0);
  DAT_ffff3130 = DAT_ffff3130 | 0x80;
  return;
}

