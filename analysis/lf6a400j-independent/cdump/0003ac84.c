
uint FUN_0003ac84(void)

{
  uint uVar1;
  
  DAT_ffff2984 = FUN_0016acd6(&DAT_0002aa80,(int)DAT_ffff29a6);
  if ((DAT_ffff2ac6 < DAT_ffff2984) && (DAT_ffff299c < 0xff)) {
    uVar1 = (int)DAT_fffeec53 & 0x7f;
    DAT_fffeec53 = (char)uVar1;
  }
  else {
    uVar1 = (int)DAT_fffeec53 | 0x80;
    DAT_fffeec53 = (char)uVar1;
  }
  return uVar1;
}

