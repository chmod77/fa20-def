
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005234e(void)

{
  uint uVar1;
  
  if ((int)DAT_fffeef9c != 9) {
    DAT_fffef163 = 0;
    DAT_fffef164 = 0;
    DAT_fffef169 = 0;
    return (int)DAT_fffeef9c;
  }
  if (((DAT_fffef8f0 & 0x40) == 0) && ((DAT_fffef8f0 & 4) == 0)) {
    if ((((((DAT_fffeef9b & 4) == 0) && ((DAT_fffeef9b & 0x10) == 0)) && ((DAT_fffeef9b & 8) == 0))
        && (((DAT_fffeef9b & 0x40) == 0 && ((DAT_fffeef9b & 0x20) == 0)))) || (DAT_fffef169 == 0)) {
      if ((0x31ff < _DAT_fffeefac) || (DAT_fffef164 < 7)) {
        if (0xc < DAT_fffef163) {
          DAT_fffef8f0 = DAT_fffef8f0 | 0x10;
          DAT_fffeef9a = DAT_fffeef9a & 0xdf | 8;
          DAT_fffeef9c = '\x04';
        }
        goto LAB_00052480;
      }
    }
    else if (DAT_fffef159 < 3) {
      DAT_fffef159 = FUN_0000152c(DAT_fffef159 + 1);
      DAT_fffeef9c = '\b';
      goto LAB_00052480;
    }
    DAT_fffeef9a = DAT_fffeef9a | 0x40;
  }
  else {
    DAT_fffeef9c = '\v';
  }
LAB_00052480:
  if (_DAT_fffeefac < 0x3200) {
    DAT_fffef164 = FUN_0000152c(DAT_fffef164 + 1);
  }
  else {
    DAT_fffef164 = 0;
  }
  DAT_fffef163 = FUN_0000152c(DAT_fffef163 + 1);
  if (((((DAT_fffeef9b & 4) == 0) && ((DAT_fffeef9b & 0x10) == 0)) && ((DAT_fffeef9b & 8) == 0)) &&
     (((DAT_fffeef9b & 0x40) == 0 && (((int)(char)DAT_fffeef9b & 0x20U) == 0)))) {
    DAT_fffef169 = 0;
    return (int)(char)DAT_fffeef9b;
  }
  uVar1 = FUN_0000152c(DAT_fffef169 + 1);
  DAT_fffef169 = (char)uVar1;
  return uVar1;
}

