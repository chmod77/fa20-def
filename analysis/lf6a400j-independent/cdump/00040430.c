
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00040430(void)

{
  ushort uVar2;
  uint uVar1;
  
  if ((((int)DAT_fffef371 & 4U) == 0) || (DAT_ffff08f7 != '\0')) {
    DAT_fffef887 = 0;
    DAT_fffef888 = 0;
    DAT_fffef889 = 0;
    DAT_fffef88a = 0;
    return (int)DAT_fffef371;
  }
  uVar2 = FUN_0016caec((uint)_DAT_ffff11ea - (uint)_DAT_ffff11ec);
  if ((DAT_ffff0e06 < 0xf9) || (0x1f54 < _DAT_ffff11ec)) {
    if ((uVar2 < 0x831) && (0xe56 < _DAT_ffff11ea)) {
      if (99 < DAT_fffef889) {
        DAT_fffef886 = DAT_fffef886 & 0xfe;
        DAT_fffef988 = 1;
      }
      DAT_fffef887 = 0;
      DAT_fffef889 = FUN_0000152c(DAT_fffef889 + 1);
      goto LAB_00040504;
    }
    DAT_fffef887 = 0;
  }
  else {
    if (99 < DAT_fffef887) {
      DAT_fffef886 = DAT_fffef886 | 1;
      DAT_fffef988 = 1;
    }
    DAT_fffef887 = FUN_0000152c(DAT_fffef887 + 1);
  }
  DAT_fffef889 = 0;
LAB_00040504:
  uVar2 = FUN_0016caec((uint)_DAT_ffff11f8 - (uint)_DAT_ffff11fa);
  if ((0xfffffff8 < (uint)(int)DAT_ffff0e07) && (_DAT_ffff11fa < 0x1f55)) {
    if (99 < DAT_fffef888) {
      DAT_fffef886 = DAT_fffef886 | 2;
      DAT_fffef989 = 1;
    }
    uVar1 = FUN_0000152c(DAT_fffef888 + 1);
    DAT_fffef888 = (char)uVar1;
    DAT_fffef88a = 0;
    return uVar1;
  }
  if ((uVar2 < 0x831) && (0xe56 < _DAT_ffff11f8)) {
    if (99 < DAT_fffef88a) {
      DAT_fffef886 = DAT_fffef886 & 0xfd;
      DAT_fffef989 = 1;
    }
    DAT_fffef888 = 0;
    uVar1 = FUN_0000152c(DAT_fffef88a + 1);
    DAT_fffef88a = (char)uVar1;
    return uVar1;
  }
  DAT_fffef88a = 0;
  DAT_fffef888 = 0;
  return (int)DAT_ffff0e07;
}

