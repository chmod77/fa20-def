
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00077442(void)

{
  uint uVar1;
  
  if ((DAT_fffeeec6 & 1) == 0) {
    if (((int)DAT_fffef152 & 0x20U) != 0) {
      return (int)DAT_fffef152;
    }
    if (((int)(char)DAT_ffff66b3 & 0x80U) != 0) {
      _DAT_fffef48e = 0x10;
    }
    if ((DAT_ffff66b3 & 0x40) != 0) {
      _DAT_fffef490 = 0x10;
    }
    if ((DAT_ffff66b3 & 0x20) != 0) {
      _DAT_fffef492 = 0x10;
    }
    if ((DAT_ffff66b3 & 0x10) != 0) {
      _DAT_fffef494 = 0x10;
    }
  }
  else {
    if (((int)(char)DAT_ffff66b3 & 0x80U) != 0) {
      _DAT_fffef48e = 0x8106;
    }
    if ((DAT_ffff66b3 & 0x40) != 0) {
      _DAT_fffef490 = 0x8106;
    }
    if ((DAT_ffff66b3 & 0x20) != 0) {
      _DAT_fffef492 = 0x8106;
    }
    if ((DAT_ffff66b3 & 0x10) != 0) {
      _DAT_fffef494 = 0x8106;
    }
  }
  uVar1 = (uint)(char)DAT_ffff66b3;
  DAT_ffff66b3 = DAT_ffff66b3 & 0xf;
  return uVar1;
}

