
uint FUN_00112eb0(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff1998;
  if (((uVar1 == 0x14) && (uVar1 = (uint)DAT_ffff1999, (uVar1 & 3) != 0)) &&
     (uVar1 = 0, DAT_ffff199a != '\0')) {
    uVar1 = (uint)DAT_fffede84;
    if ((uVar1 & 3) != 0) {
      if (((int)DAT_ffff199a & 0x80U) != 0) {
        DAT_fffedec8 = DAT_fffedec8 | 0x80;
      }
      uVar1 = (int)DAT_ffff199a & 0x7f;
      DAT_fffede83 = DAT_fffede83 | (byte)uVar1;
    }
  }
  return uVar1;
}

