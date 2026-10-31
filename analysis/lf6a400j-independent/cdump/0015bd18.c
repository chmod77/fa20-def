
uint FUN_0015bd18(void)

{
  uint uVar1;
  
  if ((DAT_ffff66b8 == -0x5b) || ((DAT_ffff20e2 & 8) == 0)) {
    uVar1 = (int)(char)DAT_fffef204 & 0x7f;
    DAT_fffef204 = (byte)uVar1;
    DAT_fffef206 = 0;
  }
  else {
    DAT_fffef204 = DAT_fffef204 | 0x80;
    if ((((int)(char)DAT_fffef204 & 0x80U) != 0) && (((int)DAT_fffef205 & 8U) == 0)) {
      if (2 < DAT_fffef206) {
        uVar1 = (uint)DAT_fffef911;
        DAT_fffef911 = (char)(uVar1 | 2);
        return uVar1 | 2;
      }
      DAT_fffef206 = DAT_fffef206 + 1;
      return (int)DAT_fffef205;
    }
    uVar1 = (uint)(char)DAT_fffef204;
    if (((uVar1 & 0x80) != 0) && (uVar1 = (uint)DAT_fffef205, (uVar1 & 8) != 0)) {
      DAT_fffef206 = 0;
      uVar1 = (uint)DAT_fffef911;
      DAT_fffef911 = (char)(uVar1 & 0xfd);
      return uVar1 & 0xfd;
    }
  }
  return uVar1;
}

