
uint FUN_000588da(void)

{
  uint uVar1;
  
  if (((DAT_fffeef9c == '\t') && ((DAT_fffeef9a & 0x40) != 0)) && (DAT_ffff08c4 == '\0')) {
    if ((((DAT_fffeef9b & 4) != 0) || ((DAT_fffeef9b & 0x10) != 0)) || ((DAT_fffeef9b & 0x40) != 0))
    {
      uVar1 = (uint)(char)DAT_fffef8f0;
      DAT_fffef8f0 = (char)(uVar1 | 4);
      DAT_fffefeee = 1;
      return uVar1 | 4;
    }
    uVar1 = (int)(char)DAT_fffef8f0 | 0x40;
    DAT_fffef8f0 = (byte)uVar1;
  }
  else {
    if (((int)DAT_fffeeca8 & 0x10U) == 0) {
      return (int)DAT_fffeeca8;
    }
    uVar1 = (int)(char)(DAT_fffef8f0 & 0xfb) & 0xbf;
    DAT_fffef8f0 = (byte)uVar1;
    DAT_fffefeee = 1;
  }
  DAT_fffefeef = 1;
  return uVar1;
}

