
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00041214(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef36f;
  if ((uVar1 & 1) == 0) {
    DAT_fffef369 = 0;
  }
  else if (0xf997 < _DAT_fffef0be) {
    if (0xc < DAT_fffef369) {
      DAT_fffef8a3 = DAT_fffef8a3 | 0x10;
      DAT_fffef365 = 1;
    }
    uVar1 = FUN_0000152c(DAT_fffef369 + 1);
    DAT_fffef369 = (char)uVar1;
  }
  else {
    uVar1 = (int)(char)DAT_fffef8a3 & 0xef;
    DAT_fffef8a3 = (byte)uVar1;
    DAT_fffef365 = 1;
    DAT_fffef369 = 0xf997 < _DAT_fffef0be;
  }
  return uVar1;
}

