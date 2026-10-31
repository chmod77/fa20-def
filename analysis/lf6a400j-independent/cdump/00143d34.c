
uint FUN_00143d34(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff2b7c;
  if ((uVar1 & 0x80) != 0) {
    uVar1 = FUN_0016b5a4(DAT_ffff2bac + 1);
    DAT_ffff2bac = (byte)uVar1;
  }
  return uVar1;
}

