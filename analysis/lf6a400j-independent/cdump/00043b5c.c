
uint FUN_00043b5c(void)

{
  uint uVar1;
  
  if (((DAT_fffef371 & 4) == 0) || (DAT_ffff0912 != '\0')) {
    DAT_fffeffe4 = 0;
    uVar1 = (int)(char)DAT_fffef388 & 0xfd;
    DAT_fffef388 = (byte)uVar1;
  }
  else {
    if ((DAT_fffef388 & 2) != 0) {
      DAT_fffeffe4 = FUN_0000152c(DAT_fffeffe4 + 1);
      DAT_fffef388 = DAT_fffef388 & 0xfd;
    }
    if ((DAT_fffef388 & 8) == 0) {
      if (0x1f < DAT_fffeffe4) {
        DAT_fffef9f5 = DAT_fffef9f5 | 0x40;
        DAT_fffeffe6 = 1;
      }
      uVar1 = (uint)(char)DAT_fffef388;
      if ((uVar1 & 4) == 0) {
        uVar1 = (int)(char)DAT_fffef388 | 2;
        DAT_fffef388 = (byte)uVar1;
      }
    }
    else {
      uVar1 = (uint)(char)DAT_fffef388;
      if (((uVar1 & 4) == 0) && (0xc < DAT_ffff054f)) {
        if (0x1f < DAT_fffeffe5) {
          DAT_fffef9f5 = DAT_fffef9f5 & 0xbf;
          DAT_fffeffe6 = 1;
          DAT_fffeffe4 = 0;
        }
        uVar1 = FUN_0000152c(DAT_fffeffe5 + 1);
        DAT_fffeffe5 = (char)uVar1;
        return uVar1;
      }
    }
  }
  DAT_fffeffe5 = 0;
  return uVar1;
}

