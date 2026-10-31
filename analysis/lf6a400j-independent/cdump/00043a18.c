
uint FUN_00043a18(void)

{
  uint uVar1;
  
  if (((DAT_fffef371 & 4) == 0) || (DAT_ffff0912 != '\0')) {
    DAT_fffef9f6 = 0;
    uVar1 = (int)(char)DAT_fffef388 & 0xdf;
    DAT_fffef388 = (byte)uVar1;
  }
  else {
    if ((DAT_fffef388 & 0x20) != 0) {
      DAT_fffef9f6 = FUN_0000152c(DAT_fffef9f6 + 1);
      DAT_fffef388 = DAT_fffef388 & 0xdf;
    }
    if (((int)(char)DAT_fffef388 & 0x80U) == 0) {
      if (0x1f < DAT_fffef9f6) {
        DAT_fffef9f5 = DAT_fffef9f5 | 0x80;
        DAT_fffef9f8 = 1;
      }
      uVar1 = (uint)(char)DAT_fffef388;
      if ((uVar1 & 0x40) == 0) {
        uVar1 = (int)(char)DAT_fffef388 | 0x20;
        DAT_fffef388 = (byte)uVar1;
      }
    }
    else {
      uVar1 = (uint)(char)DAT_fffef388;
      if (((uVar1 & 0x40) == 0) && (0xc < DAT_ffff054f)) {
        if (0x1f < DAT_fffef9f7) {
          DAT_fffef9f5 = DAT_fffef9f5 & 0x7f;
          DAT_fffef9f8 = 1;
          DAT_fffef9f6 = 0;
        }
        uVar1 = FUN_0000152c(DAT_fffef9f7 + 1);
        DAT_fffef9f7 = (char)uVar1;
        return uVar1;
      }
    }
  }
  DAT_fffef9f7 = 0;
  return uVar1;
}

