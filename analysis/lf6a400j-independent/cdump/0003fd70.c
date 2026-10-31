
uint FUN_0003fd70(void)

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
  if ((DAT_ffff2ae1 < 0xb) && (bVar1)) {
    if (99 < DAT_fffef83c) {
      DAT_fffef720 = DAT_fffef720 | 0x80;
      DAT_fffef748 = DAT_fffef748 | 4;
      DAT_fffefa15 = 1;
    }
    uVar2 = FUN_0000152c(DAT_fffef83c + 1);
    DAT_fffef83c = (byte)uVar2;
  }
  else {
    if ((10 < DAT_ffff2ae1) && (bVar1)) {
      uVar2 = (int)(char)DAT_fffef748 & 0xfb;
      DAT_fffef748 = (byte)uVar2;
      DAT_fffefa15 = 1;
    }
    DAT_fffef83c = 0;
  }
  return uVar2;
}

