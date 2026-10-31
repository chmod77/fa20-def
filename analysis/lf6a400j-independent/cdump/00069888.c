
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00069888(void)

{
  uint uVar1;
  
  if (_DAT_ffff007a != 7) {
    if ((uint)_DAT_ffff0a8e * 0x187 >> 8 < 0xfc) {
      if ((uint)_DAT_ffff0a8e * 0x187 >> 8 == 0) {
        DAT_fffef3b5 = DAT_fffef3b5 | 1;
      }
    }
    else {
      DAT_fffef3b5 = DAT_fffef3b5 & 0xfe;
    }
    if ((DAT_fffef3b5 & 1) == 0) {
      _DAT_fffef3b6 = 0;
    }
    else {
      _DAT_fffef3b6 = FUN_00001540(_DAT_fffef3b6 + 1);
    }
    if (((DAT_fffef3b5 & 1) == 0) || (_DAT_fffef3b6 < 2)) {
      uVar1 = (int)DAT_fffef152 & 0xdf;
      DAT_fffef152 = (char)uVar1;
    }
    else {
      uVar1 = (int)DAT_fffef152 | 0x20;
      DAT_fffef152 = (char)uVar1;
    }
    return uVar1;
  }
  return 7;
}

