
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003ffc4(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if (((uVar1 & 2) != 0) && (DAT_ffff08f9 == '\0')) {
    if (_DAT_fffef23a < 0xb6f) {
      if (0xc < DAT_fffef837) {
        DAT_fffef748 = DAT_fffef748 | 1;
        DAT_fffef940 = 1;
      }
      uVar1 = FUN_0000152c(DAT_fffef837 + 1);
      DAT_fffef837 = (char)uVar1;
      return uVar1;
    }
    uVar1 = (int)(char)DAT_fffef748 & 0xfe;
    DAT_fffef748 = (byte)uVar1;
    DAT_fffef940 = 1;
  }
  DAT_fffef837 = 0;
  return uVar1;
}

