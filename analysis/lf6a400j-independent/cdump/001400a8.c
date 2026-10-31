
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001400a8(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff66b1;
  if ((uVar1 & 0x80) != 0) {
    if ((DAT_fffeeec6 & 1) == 0) {
      if (((int)DAT_fffee710 & 0x20U) != 0) {
        return (int)DAT_fffee710;
      }
      _DAT_fffef508 = 0x10;
    }
    else {
      _DAT_fffef508 = 0x8106;
    }
    uVar1 = (int)DAT_ffff66b1 & 0x7f;
    DAT_ffff66b1 = (char)uVar1;
  }
  return uVar1;
}

