
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000401ea(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if (((uVar1 & 2) != 0) && (DAT_ffff0916 == '\0')) {
    if (_DAT_fffeef38 < 0x96b) {
      if (0xc < DAT_fffef880) {
        DAT_fffef82f = DAT_fffef82f | 0x40;
        DAT_fffef94f = 1;
      }
      uVar1 = FUN_0000152c(DAT_fffef880 + 1);
      DAT_fffef880 = (char)uVar1;
      return uVar1;
    }
    uVar1 = (int)(char)DAT_fffef82f & 0xbf;
    DAT_fffef82f = (byte)uVar1;
    DAT_fffef94f = 1;
  }
  DAT_fffef880 = 0;
  return uVar1;
}

