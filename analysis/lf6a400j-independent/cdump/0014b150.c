
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014b150(void)

{
  uint uVar1;
  
  _DAT_ffff1f32 = _DAT_fffff80a >> 6;
  FUN_00149aa0();
  uVar1 = (uint)_DAT_ffffabd0 * (uint)_DAT_ffff1f32 >> 0xf;
  if (0x3ff < uVar1) {
    uVar1 = 0x3ff;
  }
  _DAT_ffff1f34 = (short)uVar1;
  _DAT_ffff1fc8 = (short)uVar1;
  _DAT_ffff1fca = _DAT_ffff1f32;
  return;
}

