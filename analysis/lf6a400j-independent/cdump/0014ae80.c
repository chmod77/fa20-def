
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014ae80(void)

{
  _DAT_ffff1f20 = _DAT_fffff82c;
  _DAT_ffff1f22 = _DAT_fffff82c;
  DAT_ffff1fb0 = DAT_ffff1fb0 | 0x20;
  _DAT_ffff1fb8 = FUN_0014ae38((int)(short)_DAT_fffff82c);
  if (DAT_ffffab80 == '\x01') {
    _DAT_ffff1fb4 = FUN_0014ae38((int)(short)_DAT_ffff1f22);
  }
  if (((int)DAT_ffff1fb6 & 0x80U) == 0) {
    _DAT_ffff1fa8 = FUN_0014ae38((int)(short)_DAT_ffff1f22);
  }
  else {
    _DAT_ffff1fa8 = FUN_00001540((uint)_DAT_ffff1fba * 0xcc4a >> 0xf);
  }
  _DAT_ffff1fb2 = FUN_0016b5d4(((uint)_DAT_ffff1f22 * 0x13b >> 8) - 0x24ec);
  _DAT_ffff1fae = FUN_0016b5ec((uint)_DAT_ffff1fa8 - (uint)_DAT_ffff1fac);
  _DAT_ffff1fac = _DAT_ffff1fa8;
  return;
}

