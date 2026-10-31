
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003fe7e(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if (((uVar1 & 2) != 0) && (DAT_ffff090e == '\0')) {
    if (0xf177 < _DAT_fffef232) {
      if (0xc < DAT_fffef838) {
        DAT_fffef72d = DAT_fffef72d | 0x20;
        DAT_fffef756 = DAT_fffef756 | 0x80;
        DAT_fffef93d = 1;
      }
      uVar1 = FUN_0000152c(DAT_fffef838 + 1);
      DAT_fffef838 = (char)uVar1;
      return uVar1;
    }
    DAT_fffef72d = DAT_fffef72d & 0xdf;
    uVar1 = (int)(char)DAT_fffef756 | 0x80;
    DAT_fffef756 = (byte)uVar1;
    DAT_fffef93d = 1;
  }
  DAT_fffef838 = 0;
  return uVar1;
}

