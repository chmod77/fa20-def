
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00051cc8(void)

{
  int iVar1;
  
  iVar1 = (int)DAT_fffeef9c;
  if (iVar1 == 3) {
    if ((((DAT_fffeef99 & 0x40) != 0) && (6 < DAT_fffef031)) && ((DAT_fffeef9a & 4) != 0)) {
      if (_DAT_fffeeffc < 0x4100) {
        if (6 < DAT_fffef3be) {
          DAT_fffeef9c = '\a';
        }
      }
      else {
        DAT_fffeef9c = '\x04';
        DAT_fffeef9a = DAT_fffeef9a | 8;
        DAT_fffef00b = DAT_fffef00b | 8;
      }
    }
    iVar1 = FUN_0000152c(DAT_fffef031 + 1);
    DAT_fffef031 = (byte)iVar1;
    if (_DAT_fffeeffc < 0x4100) {
      iVar1 = FUN_0000152c(DAT_fffef3be + 1);
      DAT_fffef3be = (char)iVar1;
      return iVar1;
    }
  }
  else {
    DAT_fffef031 = 0;
  }
  DAT_fffef3be = 0;
  return iVar1;
}

