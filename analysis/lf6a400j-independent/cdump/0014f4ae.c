
uint FUN_0014f4ae(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = FUN_0016acd6(&DAT_00014da0,(int)DAT_ffff2c71);
  bVar1 = (uint)DAT_ffff1a3c < (uVar2 & 0xff);
  if (bVar1) {
    DAT_ffff1b0a = 0;
  }
  else {
    uVar2 = FUN_0000152c(DAT_ffff1b0a + 1);
    DAT_ffff1b0a = (byte)uVar2;
  }
  DAT_ffff2c84 = !bVar1;
  return uVar2;
}

