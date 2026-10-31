
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00070856(void)

{
  undefined4 uVar1;
  byte bStack_8;
  
  if (_DAT_ffff7b96 == 1) {
    uVar1 = FUN_00071d1a(&DAT_ffff6b92);
    bStack_8 = (byte)((uint)uVar1 >> 8);
    _DAT_ffff7b98 = bStack_8 + 1;
    DAT_ffff6b91 = 0x43;
  }
  else {
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 3;
    uVar1 = 0x12;
    DAT_ffff6b93 = 0x12;
    _DAT_ffff7b98 = 3;
  }
  return uVar1;
}

