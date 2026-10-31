
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00149c40(void)

{
  uint uVar1;
  
  _DAT_ffff1f18 = _DAT_fffff84e >> 6;
  FUN_00149aa0();
  uVar1 = (uint)_DAT_ffffabd0 * (uint)_DAT_ffff1f18 >> 0xf;
  if (0x3ff < uVar1) {
    uVar1 = 0x3ff;
  }
  _DAT_ffff1f1a = (short)uVar1;
  return;
}

