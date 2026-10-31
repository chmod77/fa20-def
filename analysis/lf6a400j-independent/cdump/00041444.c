
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00041444(void)

{
  if (((DAT_ffffab41 < 0x88) || ((DAT_fffef371 & 2) == 0)) || (DAT_ffff08f6 != '\0')) {
    DAT_fffef9ea = 0;
    DAT_fffef9eb = 0;
    DAT_fffef9e9 = 0;
  }
  else if (DAT_fffef9e9 < 0x19) {
    DAT_fffef9e9 = DAT_fffef9e9 + 1;
  }
  else if ((_DAT_fffeef20 < 0x96) || (0x1ae < _DAT_fffeef20)) {
    if (DAT_fffef9ea < 0x19) {
      DAT_fffef9ea = DAT_fffef9ea + 1;
    }
    else {
      DAT_fffef9f2 = DAT_fffef9f2 | 0x80;
      DAT_fffef9e4 = 1;
    }
    DAT_fffef9eb = 0;
  }
  else {
    if (DAT_fffef9eb < 0x19) {
      DAT_fffef9eb = DAT_fffef9eb + 1;
    }
    else {
      DAT_fffef9f2 = DAT_fffef9f2 & 0x7f;
      DAT_fffef9e4 = 1;
    }
    DAT_fffef9ea = 0;
  }
  if (((DAT_ffffab41 < 0x88) || (_DAT_fffeef20 < 0x96)) ||
     ((0x1ae < _DAT_fffeef20 ||
      ((((DAT_fffef371 & 2) == 0 || (DAT_ffff08f5 != '\0')) || ((DAT_fffef9f4 & 1) == 0)))))) {
    DAT_fffef9ed = 0;
    DAT_fffef9ee = 0;
    DAT_fffef9ec = 0;
  }
  else if (DAT_fffef9ec < 0x19) {
    DAT_fffef9ec = DAT_fffef9ec + 1;
  }
  else if ((_DAT_fffeef22 < 0x2e) || (0x220 < _DAT_fffeef22)) {
    if (DAT_fffef9ed < 7) {
      DAT_fffef9ed = DAT_fffef9ed + 1;
    }
    else {
      DAT_fffef9f2 = DAT_fffef9f2 | 0x40;
      DAT_fffef9e5 = 1;
    }
    DAT_fffef9ee = 0;
  }
  else {
    if (DAT_fffef9ee < 7) {
      DAT_fffef9ee = DAT_fffef9ee + 1;
    }
    else {
      DAT_fffef9f2 = DAT_fffef9f2 & 0xbf;
      DAT_fffef9e5 = 1;
    }
    DAT_fffef9ed = 0;
  }
  if ((((int)(char)DAT_fffef9f2 & 0x80U) == 0) && ((DAT_fffef9f2 & 0x40) == 0)) {
    DAT_fffeff5f = DAT_fffeff5f & 0x7f;
  }
  else {
    DAT_fffeff5f = DAT_fffeff5f | 0x80;
  }
  DAT_fffeff6c = 1;
  return;
}

