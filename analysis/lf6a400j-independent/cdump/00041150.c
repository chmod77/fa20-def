
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00041150(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef370;
  if ((uVar1 & 1) == 0) {
    DAT_fffef36b = 0;
  }
  else if (0xf697 < _DAT_fffef0ba) {
    if (0xc < DAT_fffef36b) {
      DAT_fffef8a3 = DAT_fffef8a3 | 4;
      DAT_fffef367 = 1;
    }
    uVar1 = FUN_0000152c(DAT_fffef36b + 1);
    DAT_fffef36b = (char)uVar1;
  }
  else {
    uVar1 = (int)(char)DAT_fffef8a3 & 0xfb;
    DAT_fffef8a3 = (byte)uVar1;
    DAT_fffef367 = 1;
    DAT_fffef36b = 0xf697 < _DAT_fffef0ba;
  }
  return uVar1;
}

