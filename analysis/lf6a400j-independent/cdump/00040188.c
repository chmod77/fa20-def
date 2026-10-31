
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00040188(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if (((uVar1 & 2) != 0) && (DAT_ffff0916 == '\0')) {
    if (0xf149 < _DAT_fffeef38) {
      if (0xc < DAT_fffef87f) {
        DAT_fffef82f = DAT_fffef82f | 0x80;
        DAT_fffef94e = 1;
      }
      uVar1 = FUN_0000152c(DAT_fffef87f + 1);
      DAT_fffef87f = (char)uVar1;
      return uVar1;
    }
    uVar1 = (int)(char)DAT_fffef82f & 0x7f;
    DAT_fffef82f = (byte)uVar1;
    DAT_fffef94e = 1;
  }
  DAT_fffef87f = 0;
  return uVar1;
}

