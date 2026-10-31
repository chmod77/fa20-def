
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00058990(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeef9c;
  if ((((uVar1 == 6) || (uVar1 = (uint)DAT_fffeef9c, uVar1 == 10)) ||
      ((uVar1 = (uint)DAT_fffeef9c, uVar1 == 4 &&
       (uVar1 = (uint)(char)DAT_fffef16a, (uVar1 & 0x40) != 0)))) && (DAT_ffff08c4 == '\0')) {
    if ((((DAT_fffef02a & 0x10) != 0) && (0x18 < DAT_fffef16d)) ||
       ((((int)(char)DAT_fffef16a & 0x80U) != 0 && (_DAT_fffeeffc < 0x8481)))) {
      DAT_fffef8f0 = DAT_fffef8f0 | 0x80;
      DAT_fffef8f1 = DAT_fffef8f1 | 1;
      DAT_fffef16a = DAT_fffef16a & 0x7f;
    }
    if (((((int)(char)DAT_fffef16a & 0x80U) != 0) && (0x8480 < _DAT_fffeeffc)) ||
       ((DAT_fffef16a & 0x40) != 0)) {
      DAT_fffef8f0 = DAT_fffef8f0 | 1;
      DAT_fffef8f1 = DAT_fffef8f1 | 1;
      DAT_fffef16a = DAT_fffef16a & 0x7f;
    }
    uVar1 = (uint)(char)DAT_fffef02a;
    if ((uVar1 & 0x10) != 0) {
      uVar1 = FUN_0000152c(DAT_fffef16d + 1);
      DAT_fffef16d = (char)uVar1;
      return uVar1;
    }
  }
  DAT_fffef16d = 0;
  return uVar1;
}

