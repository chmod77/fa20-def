
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014b19c(void)

{
  uint uVar1;
  
  _DAT_ffff1f36 = _DAT_fffff80c >> 6;
  FUN_00149aa0();
  uVar1 = (uint)_DAT_ffffabd0 * (uint)_DAT_ffff1f36 >> 0xf;
  if (0x3ff < uVar1) {
    uVar1 = 0x3ff;
  }
  _DAT_ffff1f38 = (short)uVar1;
  _DAT_ffff1fcc = (short)uVar1;
  _DAT_ffff1fce = _DAT_ffff1f36;
  return;
}

