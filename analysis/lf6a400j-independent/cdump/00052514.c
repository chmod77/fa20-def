
uint FUN_00052514(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeef9c;
  if ((uVar1 == 0xb) && (uVar1 = (uint)DAT_fffef157, (uVar1 & 2) != 0)) {
    uVar1 = (uint)DAT_ffff0000;
    if ((uVar1 & 2) == 0) {
      DAT_fffeef9c = '\r';
      uVar1 = FUN_0000152c(DAT_ffff2fdf + 1);
      DAT_ffff2fdf = (byte)uVar1;
    }
  }
  return uVar1;
}

