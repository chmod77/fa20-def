
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00040384(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef36e;
  if ((uVar1 & 1) == 0) {
    DAT_fffef884 = 0;
  }
  else {
    if (_DAT_fffef238 < 0xae7) {
      if (0xc < DAT_fffef884) {
        DAT_fffef881 = DAT_fffef881 | 4;
        DAT_fffef94c = 1;
      }
      DAT_fffef884 = FUN_0000152c(DAT_fffef884 + 1);
    }
    else {
      DAT_fffef881 = DAT_fffef881 & 0xfb;
      DAT_fffef94c = 1;
      DAT_fffef884 = 0;
    }
    if (_DAT_fffef236 < 0xae7) {
      if (0xc < DAT_fffef885) {
        DAT_fffef881 = DAT_fffef881 | 8;
        DAT_fffef94d = 1;
      }
      uVar1 = FUN_0000152c(DAT_fffef885 + 1);
      DAT_fffef885 = (char)uVar1;
      return uVar1;
    }
    uVar1 = (int)(char)DAT_fffef881 & 0xf7;
    DAT_fffef881 = (byte)uVar1;
    DAT_fffef94d = 1;
  }
  DAT_fffef885 = 0;
  return uVar1;
}

