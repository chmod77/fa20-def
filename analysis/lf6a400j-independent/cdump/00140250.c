
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00140250(void)

{
  uint uVar1;
  
  if ((((int)DAT_fffef59c & 0x80U) == 0) || ((DAT_fffeeec6 & 1) != 0)) {
    uVar1 = (uint)DAT_fffef59c;
    if ((uVar1 & 0x80) == 0) {
      return uVar1;
    }
    if (_DAT_ffff1258 < 0x3f) {
      return uVar1;
    }
  }
  else {
    _DAT_fffef59a = 0x8105;
  }
  uVar1 = (uint)DAT_fffef59c;
  DAT_fffef59c = (char)(uVar1 & 0x7f);
  return uVar1 & 0x7f;
}

