
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003ff62(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if (((uVar1 & 2) != 0) && (DAT_ffff08f9 == '\0')) {
    if (0xf177 < _DAT_fffef23a) {
      if (0xc < DAT_fffef836) {
        DAT_fffef748 = DAT_fffef748 | 2;
        DAT_fffef93f = 1;
      }
      uVar1 = FUN_0000152c(DAT_fffef836 + 1);
      DAT_fffef836 = (char)uVar1;
      return uVar1;
    }
    uVar1 = (int)(char)DAT_fffef748 & 0xfd;
    DAT_fffef748 = (byte)uVar1;
    DAT_fffef93f = 1;
  }
  DAT_fffef836 = 0;
  return uVar1;
}

