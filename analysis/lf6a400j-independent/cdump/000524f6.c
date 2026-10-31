
uint FUN_000524f6(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeef9c;
  if (uVar1 == 10) {
    if ((((int)DAT_fffef8f0 & 0x80U) != 0) || (uVar1 = (uint)DAT_fffef8f0, (uVar1 & 1) != 0)) {
      uVar1 = (uint)DAT_fffef8f0;
      DAT_fffeef9c = '\v';
    }
  }
  return uVar1;
}

