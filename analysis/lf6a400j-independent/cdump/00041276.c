
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00041276(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef36f;
  if ((uVar1 & 1) == 0) {
    DAT_fffef36a = 0;
  }
  else if (_DAT_fffef0be < 0xb95) {
    if (0xc < DAT_fffef36a) {
      DAT_fffef8a3 = DAT_fffef8a3 | 0x20;
      DAT_fffef366 = 1;
    }
    uVar1 = FUN_0000152c(DAT_fffef36a + 1);
    DAT_fffef36a = (byte)uVar1;
  }
  else {
    DAT_fffef36a = 0;
    uVar1 = (int)(char)DAT_fffef8a3 & 0xdf;
    DAT_fffef8a3 = (byte)uVar1;
    DAT_fffef366 = 1;
  }
  return uVar1;
}

