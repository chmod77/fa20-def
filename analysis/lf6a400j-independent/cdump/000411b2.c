
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000411b2(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef370;
  if ((uVar1 & 1) == 0) {
    DAT_fffef36c = 0;
  }
  else if (_DAT_fffef0ba < 0xa5f) {
    if (0xc < DAT_fffef36c) {
      DAT_fffef8a3 = DAT_fffef8a3 | 8;
      DAT_fffef368 = 1;
    }
    uVar1 = FUN_0000152c(DAT_fffef36c + 1);
    DAT_fffef36c = (byte)uVar1;
  }
  else {
    DAT_fffef36c = 0;
    uVar1 = (int)(char)DAT_fffef8a3 & 0xf7;
    DAT_fffef8a3 = (byte)uVar1;
    DAT_fffef368 = 1;
  }
  return uVar1;
}

