
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014b058(void)

{
  uint uVar1;
  
  _DAT_ffff1f5a = _DAT_fffff800 >> 6;
  FUN_00149aa0();
  uVar1 = (uint)_DAT_ffffabd0 * (uint)_DAT_ffff1f5a >> 0xf;
  if (0x3ff < uVar1) {
    uVar1 = 0x3ff;
  }
  _DAT_ffff1f5c = (short)uVar1;
  _DAT_ffff1fe4 = (short)uVar1;
  _DAT_ffff1fe6 = _DAT_ffff1f5a;
  return;
}

