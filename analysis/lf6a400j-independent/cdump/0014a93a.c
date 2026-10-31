
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0014a93a(void)

{
  uint uVar1;
  
  if (_DAT_ffff2c5a == 0) {
    _DAT_ffff2c5a = _DAT_ffff1f12;
  }
  else {
    _DAT_ffff2c5a = (ushort)((uint)_DAT_ffff2c5a * 3 + (uint)_DAT_ffff1f12 >> 2);
  }
  if (((int)DAT_ffff1fa0 & 0x80U) == 0) {
    _DAT_ffff1f9a = FUN_0016b5d4(((uint)_DAT_ffff2c5a * 0x72 >> 8) + 0xa8b);
  }
  else {
    _DAT_ffff1f9a = _DAT_ffff1f9c;
  }
  uVar1 = (uint)DAT_ffff1fa0;
  if ((uVar1 & 0x80) == 0) {
    uVar1 = (uint)DAT_ffff1f98;
    if ((uVar1 & 0x80) == 0) {
      uVar1 = (uint)_DAT_ffff1f9a;
      _DAT_ffff2c58 = _DAT_ffff1f9a;
    }
    else {
      _DAT_ffff2c58 = 0x654c;
    }
  }
  else {
    _DAT_ffff2c58 = _DAT_ffff1f9e;
  }
  return uVar1;
}

