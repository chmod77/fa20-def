
uint FUN_0014f580(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff1e16;
  if ((uVar1 & 2) == 0) {
    uVar1 = FUN_0000152c(DAT_ffff2ca8 + 1);
    DAT_ffff2ca8 = (byte)uVar1;
  }
  else {
    DAT_ffff2ca8 = 0;
  }
  return uVar1;
}

