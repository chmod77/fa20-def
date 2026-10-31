
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014b0b8(void)

{
  uint uVar1;
  
  _DAT_ffff1f2a = _DAT_fffff802 >> 6;
  FUN_00149aa0();
  uVar1 = (uint)_DAT_ffffabd0 * (uint)_DAT_ffff1f2a >> 0xf;
  if (0x3ff < uVar1) {
    uVar1 = 0x3ff;
  }
  _DAT_ffff1f2c = (short)uVar1;
  _DAT_ffff1fc0 = (short)uVar1;
  _DAT_ffff1fc2 = _DAT_ffff1f2a;
  return;
}

