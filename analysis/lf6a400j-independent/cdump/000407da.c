
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000407da(void)

{
  ushort uVar2;
  uint uVar1;
  
  if ((((int)DAT_fffef371 & 4U) == 0) || (DAT_ffff08e8 != '\0')) {
    DAT_fffef88f = 0;
    DAT_fffef890 = 0;
    DAT_fffef891 = 0;
    DAT_fffef892 = 0;
    return (int)DAT_fffef371;
  }
  uVar2 = FUN_0016caec((uint)_DAT_ffff123a - (uint)_DAT_ffff123c);
  if ((DAT_ffff0e20 < 0xf9) || (0x1f54 < _DAT_ffff123c)) {
    if ((uVar2 < 0x831) && (0xe56 < _DAT_ffff123a)) {
      if (99 < DAT_fffef891) {
        DAT_fffef886 = DAT_fffef886 & 0xef;
        DAT_fffef98c = 1;
      }
      DAT_fffef88f = 0;
      DAT_fffef891 = FUN_0000152c(DAT_fffef891 + 1);
      goto LAB_00040940;
    }
    DAT_fffef88f = 0;
  }
  else {
    if (99 < DAT_fffef88f) {
      DAT_fffef886 = DAT_fffef886 | 0x10;
      DAT_fffef98c = 1;
    }
    DAT_fffef88f = FUN_0000152c(DAT_fffef88f + 1);
  }
  DAT_fffef891 = 0;
LAB_00040940:
  uVar2 = FUN_0016caec((uint)_DAT_ffff1248 - (uint)_DAT_ffff124a);
  if ((0xfffffff8 < (uint)(int)DAT_ffff0e21) && (_DAT_ffff124a < 0x1f55)) {
    if (99 < DAT_fffef890) {
      DAT_fffef886 = DAT_fffef886 | 0x20;
      DAT_fffef98d = 1;
    }
    uVar1 = FUN_0000152c(DAT_fffef890 + 1);
    DAT_fffef890 = (char)uVar1;
    DAT_fffef892 = 0;
    return uVar1;
  }
  if ((uVar2 < 0x831) && (0xe56 < _DAT_ffff1248)) {
    if (99 < DAT_fffef892) {
      DAT_fffef886 = DAT_fffef886 & 0xdf;
      DAT_fffef98d = 1;
    }
    DAT_fffef890 = 0;
    uVar1 = FUN_0000152c(DAT_fffef892 + 1);
    DAT_fffef892 = (char)uVar1;
    return uVar1;
  }
  DAT_fffef892 = 0;
  DAT_fffef890 = 0;
  return (int)DAT_ffff0e21;
}

