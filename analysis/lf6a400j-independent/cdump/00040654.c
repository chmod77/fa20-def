
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00040654(void)

{
  ushort uVar2;
  uint uVar1;
  
  if ((((int)DAT_fffef371 & 4U) == 0) || (DAT_ffff08f7 != '\0')) {
    DAT_fffef88b = 0;
    DAT_fffef88c = 0;
    DAT_fffef88d = 0;
    DAT_fffef88e = 0;
    return (int)DAT_fffef371;
  }
  uVar2 = FUN_0016caec((uint)_DAT_ffff11ea - (uint)_DAT_ffff11ec);
  if ((DAT_ffff0e06 < 0x14) && (0x1f55 < _DAT_ffff11ec)) {
    if (99 < DAT_fffef88b) {
      DAT_fffef886 = DAT_fffef886 | 4;
      DAT_fffef986 = 1;
    }
    DAT_fffef88b = FUN_0000152c(DAT_fffef88b + 1);
  }
  else {
    if (uVar2 < 0x831) {
      if (99 < DAT_fffef88d) {
        DAT_fffef886 = DAT_fffef886 & 0xfb;
        DAT_fffef986 = 1;
      }
      DAT_fffef88b = 0;
      DAT_fffef88d = FUN_0000152c(DAT_fffef88d + 1);
      goto LAB_0004071c;
    }
    DAT_fffef88b = 0;
  }
  DAT_fffef88d = 0;
LAB_0004071c:
  uVar2 = FUN_0016caec((uint)_DAT_ffff11f8 - (uint)_DAT_ffff11fa);
  if (((uint)(int)DAT_ffff0e07 < 0x14) && (0x1f55 < _DAT_ffff11fa)) {
    if (99 < DAT_fffef88c) {
      DAT_fffef886 = DAT_fffef886 | 8;
      DAT_fffef987 = 1;
    }
    uVar1 = FUN_0000152c(DAT_fffef88c + 1);
    DAT_fffef88c = (char)uVar1;
    DAT_fffef88e = 0;
    return uVar1;
  }
  if (0x830 < uVar2) {
    DAT_fffef88e = 0;
    DAT_fffef88c = 0;
    return (int)DAT_ffff0e07;
  }
  if (99 < DAT_fffef88e) {
    DAT_fffef886 = DAT_fffef886 & 0xf7;
    DAT_fffef987 = 1;
  }
  DAT_fffef88c = 0;
  uVar1 = FUN_0000152c(DAT_fffef88e + 1);
  DAT_fffef88e = (char)uVar1;
  return uVar1;
}

