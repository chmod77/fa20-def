
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0007bf84(void)

{
  uint uVar1;
  
  if ((DAT_fffef4ec & 1) == 0) {
    if (DAT_ffff091d == -1) {
      DAT_fffef054 = DAT_fffef054 | 0x20;
    }
    else {
      DAT_fffef054 = DAT_fffef054 & 0xdf;
    }
    uVar1 = (uint)(char)DAT_fffef4ec;
    DAT_fffef4ec = (char)(uVar1 | 1);
    return uVar1 | 1;
  }
  uVar1 = (uint)(char)DAT_fffef054;
  if (((uVar1 & 0x20) != 0) && (uVar1 = (uint)DAT_fffeeec6, (uVar1 & 1) == 0)) {
    _DAT_ffff66b4 = 0x8105;
    uVar1 = (int)(char)DAT_fffef054 & 0xdf;
    DAT_fffef054 = (byte)uVar1;
  }
  return uVar1;
}

