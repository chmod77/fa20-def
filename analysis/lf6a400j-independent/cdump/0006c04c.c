
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c04c(void)

{
  byte bVar1;
  
  if (DAT_ffff66b0 == '\x03') {
    DAT_fffef22f = DAT_fffef22f | 0x80;
  }
  if (100 < _DAT_fffeef10) {
    DAT_fffef22f = DAT_fffef22f | 0x40;
  }
  if ((((((int)(char)DAT_fffef22f & 0x80U) != 0) && ((DAT_fffef22f & 0x40) != 0)) &&
      ((DAT_fffeeec2 & 4) == 0)) && ((DAT_fffef22f & 0x20) != 0)) {
    DAT_ffff2fe0 = DAT_ffff2fe0 & 0xfe;
  }
  bVar1 = DAT_fffef22f | 0x20;
  if ((DAT_fffeeec2 & 4) == 0) {
    bVar1 = DAT_fffef22f & 0xdf;
  }
  DAT_fffef22f = bVar1;
  return;
}

