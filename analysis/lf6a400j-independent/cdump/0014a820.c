
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014a820(void)

{
  uint uVar1;
  
  _DAT_ffff1f0c = _DAT_fffff804 >> 6;
  FUN_00149aa0();
  uVar1 = (uint)_DAT_ffffabd0 * (uint)_DAT_ffff1f0c >> 0xf;
  if (0x3ff < uVar1) {
    uVar1 = 0x3ff;
  }
  _DAT_ffff1f0e = (short)uVar1;
  _DAT_ffff1f94 = (short)uVar1 << 6;
  if (_DAT_ffff1f0c < 0x3d) {
    DAT_ffff2c56 = DAT_ffff2c56 | 0x40;
  }
  else if (_DAT_ffff1f0c < 1000) {
    DAT_ffff2c56 = DAT_ffff2c56 & 0x3f;
  }
  else {
    DAT_ffff2c56 = DAT_ffff2c56 | 0x80;
  }
  return;
}

