
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00041be8(void)

{
  bool bVar1;
  uint uVar2;
  
  if (((((DAT_fffef371 & 2) == 0) || (DAT_ffff08ee != '\0')) || (DAT_ffff0592 < 100)) ||
     (((DAT_fffef0b5 < 0x21 || (_DAT_fffeef10 < 18000)) ||
      (((DAT_ffff0675 & 0x40) == 0 && (((int)(char)DAT_ffff0675 & 0x80U) == 0)))))) {
    DAT_fffef373 = DAT_fffef373 & 0xfe;
  }
  else {
    DAT_fffef373 = DAT_fffef373 | 1;
  }
  uVar2 = (uint)(char)DAT_fffef373;
  if ((uVar2 & 1) == 0) {
    DAT_fffef9b2 = 0;
  }
  else {
    bVar1 = (DAT_ffff0001 & 0x20) == 0;
    if (bVar1) {
      if (0x3e < DAT_fffef9b2) {
        DAT_fffef8a3 = DAT_fffef8a3 | 0x80;
        DAT_fffef996 = 1;
      }
      uVar2 = FUN_0000152c(DAT_fffef9b2 + 1);
      DAT_fffef9b2 = (char)uVar2;
    }
    else {
      uVar2 = (int)(char)DAT_fffef8a3 & 0x7f;
      DAT_fffef8a3 = (byte)uVar2;
      DAT_fffef996 = 1;
      DAT_fffef9b2 = bVar1;
    }
  }
  return uVar2;
}

