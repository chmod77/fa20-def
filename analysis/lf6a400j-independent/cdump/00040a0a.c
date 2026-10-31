
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00040a0a(void)

{
  ushort uVar2;
  uint uVar1;
  
  if ((((int)DAT_fffef371 & 4U) == 0) || (DAT_ffff08e8 != '\0')) {
    DAT_fffef893 = 0;
    DAT_fffef894 = 0;
    DAT_fffef895 = 0;
    DAT_fffef896 = 0;
    return (int)DAT_fffef371;
  }
  uVar2 = FUN_0016caec((uint)_DAT_ffff123a - (uint)_DAT_ffff123c);
  if ((DAT_ffff0e20 < 0x14) && (0x1f55 < _DAT_ffff123c)) {
    if (99 < DAT_fffef893) {
      DAT_fffef886 = DAT_fffef886 | 0x40;
      DAT_fffef98a = 1;
    }
    DAT_fffef893 = FUN_0000152c(DAT_fffef893 + 1);
  }
  else {
    if (uVar2 < 0x831) {
      if (99 < DAT_fffef895) {
        DAT_fffef886 = DAT_fffef886 & 0xbf;
        DAT_fffef98a = 1;
      }
      DAT_fffef893 = 0;
      DAT_fffef895 = FUN_0000152c(DAT_fffef895 + 1);
      goto LAB_00040ad2;
    }
    DAT_fffef893 = 0;
  }
  DAT_fffef895 = 0;
LAB_00040ad2:
  uVar2 = FUN_0016caec((uint)_DAT_ffff1248 - (uint)_DAT_ffff124a);
  if (((uint)(int)DAT_ffff0e21 < 0x14) && (0x1f55 < _DAT_ffff124a)) {
    if (99 < DAT_fffef894) {
      DAT_fffef886 = DAT_fffef886 | 0x80;
      DAT_fffef98b = 1;
    }
    uVar1 = FUN_0000152c(DAT_fffef894 + 1);
    DAT_fffef894 = (char)uVar1;
    DAT_fffef896 = 0;
    return uVar1;
  }
  if (0x830 < uVar2) {
    DAT_fffef896 = 0;
    DAT_fffef894 = 0;
    return (int)DAT_ffff0e21;
  }
  if (99 < DAT_fffef896) {
    DAT_fffef886 = DAT_fffef886 & 0x7f;
    DAT_fffef98b = 1;
  }
  DAT_fffef894 = 0;
  uVar1 = FUN_0000152c(DAT_fffef896 + 1);
  DAT_fffef896 = (char)uVar1;
  return uVar1;
}

