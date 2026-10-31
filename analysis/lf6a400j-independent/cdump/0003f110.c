
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003f110(void)

{
  byte bVar1;
  
  if (((DAT_fffef371 & 2) != 0) && (DAT_ffff090d == '\0')) {
    if ((99 < DAT_ffff0592) &&
       ((((DAT_ffff067d & 4) == 0 && ((DAT_fffeeec1 & 1) == 0)) && ((DAT_ffff000e & 1) != 0)))) {
      if (0x18 < _DAT_fffef96a) {
        DAT_fffef8a7 = DAT_fffef8a7 | 2;
        DAT_fffef962 = 1;
      }
      _DAT_fffef96a = FUN_00001540(_DAT_fffef96a + 1);
      goto LAB_0003f19c;
    }
    if ((99 < DAT_ffff0592) && ((DAT_ffff000e & 1) == 0)) {
      DAT_fffef8a7 = DAT_fffef8a7 & 0xfd;
      DAT_fffef962 = 1;
    }
  }
  _DAT_fffef96a = 0;
LAB_0003f19c:
  bVar1 = DAT_fffef8a9 | 1;
  if ((DAT_fffef8a8 & 1) == 0) {
    bVar1 = DAT_fffef8a9 & 0xfe;
  }
  DAT_fffef8a9 = bVar1;
  if ((DAT_fffeeec1 & 1) == 0) {
    DAT_fffef36d = 0;
    DAT_fffef8a8 = DAT_fffef8a8 & 0xfe;
  }
  else {
    if (9 < DAT_fffef36d) {
      DAT_fffef8a8 = DAT_fffef8a8 | 1;
    }
    DAT_fffef36d = FUN_0000152c(DAT_fffef36d + 1);
  }
  if ((DAT_ffff000e & 1) != 0) {
    DAT_fffef8a8 = DAT_fffef8a8 | 2;
  }
  if ((((DAT_fffef371 & 2) != 0) && (DAT_ffff090d == '\0')) &&
     ((99 < DAT_ffff0592 &&
      (((_DAT_fffef0da < 0x12 && ((DAT_fffef8a9 & 1) != 0)) && ((DAT_fffef8a8 & 1) == 0)))))) {
    if ((DAT_fffef8a8 & 2) == 0) {
      DAT_fffef8a7 = DAT_fffef8a7 | 4;
    }
    else {
      DAT_fffef8a7 = DAT_fffef8a7 & 0xfb;
    }
    DAT_fffef963 = 1;
  }
  return;
}

