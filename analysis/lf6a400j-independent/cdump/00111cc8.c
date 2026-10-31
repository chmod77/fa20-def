
uint FUN_00111cc8(void)

{
  uint uVar1;
  
  if (((DAT_ffff1995 == '\x14') && (DAT_ffff1996 == '\x02')) ||
     ((uVar1 = (uint)DAT_ffff1995, uVar1 == 0x14 && (uVar1 = (uint)DAT_ffff1996, uVar1 == 1)))) {
    uVar1 = (uint)DAT_fffede1c;
    if ((uVar1 & 3) != 0) {
      if (((int)DAT_ffff1997 & 0x80U) != 0) {
        DAT_fffede60 = DAT_fffede60 | 0x80;
      }
      uVar1 = (int)DAT_ffff1997 & 0x7f;
      DAT_fffede1b = DAT_fffede1b | (byte)uVar1;
    }
  }
  return uVar1;
}

