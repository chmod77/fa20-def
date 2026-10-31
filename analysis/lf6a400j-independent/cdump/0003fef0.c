
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003fef0(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if (((uVar1 & 2) != 0) && (DAT_ffff090e == '\0')) {
    if (_DAT_fffef232 < 0xb6f) {
      if (0xc < DAT_fffef839) {
        DAT_fffef72d = DAT_fffef72d | 0x40;
        DAT_fffef757 = DAT_fffef757 | 0x80;
        DAT_fffef93e = 1;
      }
      uVar1 = FUN_0000152c(DAT_fffef839 + 1);
      DAT_fffef839 = (char)uVar1;
      return uVar1;
    }
    DAT_fffef72d = DAT_fffef72d & 0xbf;
    uVar1 = (int)(char)DAT_fffef757 | 0x80;
    DAT_fffef757 = (byte)uVar1;
    DAT_fffef93e = 1;
  }
  DAT_fffef839 = 0;
  return uVar1;
}

