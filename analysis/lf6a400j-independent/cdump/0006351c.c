
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006351c(void)

{
  uint uVar1;
  
  if (((((DAT_fffefff7 & 1) == 0) && ((DAT_fffefff7 & 2) == 0)) &&
      (((int)(char)DAT_ffff002c & 0x80U) == 0)) &&
     (((DAT_ffff002c & 0x40) == 0 || (_DAT_ffff007a != 0)))) {
    if ((int)_DAT_ffff007a != 4) {
      return (int)_DAT_ffff007a;
    }
    if ((int)DAT_ffff0130 != 1) {
      return (int)DAT_ffff0130;
    }
    if (DAT_ffff0028 != '\0') {
      uVar1 = (uint)DAT_ffff009a;
      DAT_ffff009a = (char)(uVar1 & 0xfe);
      _DAT_ffff0106 = 0;
      _DAT_ffff0108 = 0;
      return uVar1 & 0xfe;
    }
  }
  uVar1 = (uint)DAT_ffff009a;
  _DAT_ffff0108 = 0;
  _DAT_ffff0106 = 0;
  DAT_ffff009a = (char)(uVar1 | 1);
  return uVar1 | 1;
}

