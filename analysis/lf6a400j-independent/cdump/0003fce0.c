
uint FUN_0003fce0(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_fffef371;
  if (((uVar2 & 2) == 0) || (DAT_ffff08ff != '\0')) {
    bVar1 = false;
  }
  else {
    uVar2 = 0xffffff80;
    bVar1 = true;
  }
  if ((DAT_ffff2ae1 < 0xee) || (!bVar1)) {
    if ((DAT_ffff2ae1 < 0xee) && (bVar1)) {
      uVar2 = (int)(char)DAT_fffef748 & 0xf7;
      DAT_fffef748 = (byte)uVar2;
      DAT_fffefa14 = 1;
    }
    DAT_fffef83b = 0;
  }
  else {
    if (99 < DAT_fffef83b) {
      DAT_fffef720 = DAT_fffef720 | 0x80;
      DAT_fffef748 = DAT_fffef748 | 8;
      DAT_fffefa14 = 1;
    }
    uVar2 = FUN_0000152c(DAT_fffef83b + 1);
    DAT_fffef83b = (byte)uVar2;
  }
  return uVar2;
}

