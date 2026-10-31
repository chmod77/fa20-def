
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003f87c(void)

{
  uint uVar1;
  short sStack_8;
  
  if (((int)DAT_ffff2982 & 0x10U) == 0) {
    DAT_fffef722 = 0;
    DAT_fffef723 = 0;
    return (int)DAT_ffff2982;
  }
  if (((DAT_fffef371 & 2) == 0) || (DAT_ffff0908 != '\0')) {
    DAT_fffef722 = 0;
  }
  else {
    if (_DAT_fffef234 < 0x1134) {
      if (DAT_fffef722 < 200) {
        DAT_fffef722 = DAT_fffef722 + 1;
        goto LAB_0003f936;
      }
      sStack_8 = FUN_00001550(0xf0);
      DAT_fffef73b = DAT_fffef73b | 4;
      DAT_fffef748 = DAT_fffef748 | 0x10;
    }
    else {
      sStack_8 = FUN_00001550(0xf0);
      DAT_fffef73b = DAT_fffef73b & 0xfb;
      DAT_fffef748 = DAT_fffef748 & 0xef;
      DAT_fffef722 = 0;
    }
    DAT_fffef7c3 = DAT_fffef7c3 | 0x80;
    DAT_fffef93c = 1;
    FUN_0007e168();
    FUN_00001550((int)sStack_8);
  }
LAB_0003f936:
  uVar1 = (uint)(char)DAT_fffef371;
  if (((uVar1 & 2) != 0) && (DAT_ffff0908 == '\0')) {
    if (_DAT_fffef234 < 0xf84f) {
      sStack_8 = FUN_00001550(0xf0);
      DAT_fffef73b = DAT_fffef73b & 0xfd;
      DAT_fffef748 = DAT_fffef748 & 0xdf;
      DAT_fffef723 = 0;
    }
    else {
      if (DAT_fffef723 < 200) {
        DAT_fffef723 = DAT_fffef723 + 1;
        return uVar1;
      }
      sStack_8 = FUN_00001550(0xf0);
      DAT_fffef73b = DAT_fffef73b | 2;
      DAT_fffef748 = DAT_fffef748 | 0x20;
    }
    DAT_fffef7c2 = DAT_fffef7c2 | 0x80;
    DAT_fffef93b = 1;
    FUN_0007e168();
    uVar1 = FUN_00001550((int)sStack_8);
    return uVar1;
  }
  DAT_fffef723 = 0;
  return uVar1;
}

