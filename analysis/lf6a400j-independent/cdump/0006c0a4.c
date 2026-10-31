
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006c0a4(void)

{
  uint uVar1;
  
  if (((((int)(char)DAT_fffef911 & 0x80U) == 0) && ((DAT_fffef911 & 8) == 0)) &&
     ((DAT_fffef911 & 0x10) == 0)) {
    if ((299 < _DAT_fffef3b0) && ((DAT_fffef936 & 8) != 0)) {
      DAT_fffef911 = DAT_fffef911 & 0xdf;
      DAT_fffefa10 = 1;
    }
    uVar1 = FUN_00001540(_DAT_fffef3b0 + 1);
    _DAT_fffef3b0 = (ushort)uVar1;
  }
  else {
    uVar1 = (int)(char)DAT_fffef911 | 0x20;
    DAT_fffef911 = (byte)uVar1;
    DAT_fffefa10 = 1;
    _DAT_fffef3b0 = 0;
  }
  return uVar1;
}

