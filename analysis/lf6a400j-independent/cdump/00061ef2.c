
uint FUN_00061ef2(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef63a;
  if ((uVar1 & 1) == 0) {
    DAT_fffef5d0 = 0;
  }
  else {
    if (DAT_fffef5d1 == '\0') {
      return uVar1;
    }
    if (DAT_fffef5d2 == '\0') {
      return uVar1;
    }
    if (DAT_fffef5d3 == '\0') {
      return uVar1;
    }
    if (DAT_fffef5d4 == '\0') {
      return uVar1;
    }
    uVar1 = FUN_0000152c(DAT_fffef5d0 + 1);
    DAT_fffef5d0 = (byte)uVar1;
  }
  DAT_fffef5d4 = 0;
  DAT_fffef5d3 = 0;
  DAT_fffef5d2 = 0;
  DAT_fffef5d1 = 0;
  return uVar1;
}

