
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004024c(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef36e;
  if ((uVar1 & 1) == 0) {
    DAT_fffef882 = 0;
  }
  else {
    if (_DAT_fffef238 < 0xe4bc) {
      DAT_fffef881 = DAT_fffef881 & 0xfe;
      DAT_fffef94a = 1;
      DAT_fffef882 = 0;
    }
    else {
      if (0xc < DAT_fffef882) {
        DAT_fffef881 = DAT_fffef881 | 1;
        DAT_fffef94a = 1;
      }
      DAT_fffef882 = FUN_0000152c(DAT_fffef882 + 1);
    }
    if (0xe4bb < _DAT_fffef236) {
      if (0xc < DAT_fffef883) {
        DAT_fffef881 = DAT_fffef881 | 2;
        DAT_fffef94b = 1;
      }
      uVar1 = FUN_0000152c(DAT_fffef883 + 1);
      DAT_fffef883 = (char)uVar1;
      return uVar1;
    }
    uVar1 = (int)(char)DAT_fffef881 & 0xfd;
    DAT_fffef881 = (byte)uVar1;
    DAT_fffef94b = 1;
  }
  DAT_fffef883 = 0;
  return uVar1;
}

