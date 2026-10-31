
void FUN_0005a470(void)

{
  if (((0xc < DAT_fffefa06) && ((DAT_fffef371 & 4) != 0)) && (DAT_ffff08cf == '\0')) {
    if (DAT_fffefa02 < 3) {
      DAT_fffef9f9 = DAT_fffef9f9 | 4;
      DAT_fffef9fa = FUN_0000152c(DAT_fffef9fa + 1);
    }
    else {
      DAT_fffef9f9 = DAT_fffef9f9 & 0xfb;
      DAT_fffef9fe = FUN_0000152c(DAT_fffef9fe + 1);
    }
    if (DAT_fffefa03 < 3) {
      DAT_fffef9f9 = DAT_fffef9f9 | 8;
      DAT_fffef9fb = FUN_0000152c(DAT_fffef9fb + 1);
    }
    else {
      DAT_fffef9f9 = DAT_fffef9f9 & 0xf7;
      DAT_fffef9ff = FUN_0000152c(DAT_fffef9ff + 1);
    }
    if (DAT_fffefa04 < 2) {
      DAT_fffef9f9 = DAT_fffef9f9 | 0x10;
      DAT_fffef9fc = FUN_0000152c(DAT_fffef9fc + 1);
    }
    else {
      DAT_fffef9f9 = DAT_fffef9f9 & 0xef;
      DAT_fffefa00 = FUN_0000152c(DAT_fffefa00 + 1);
    }
    if (DAT_fffefa05 < 2) {
      DAT_fffef9f9 = DAT_fffef9f9 | 0x20;
      DAT_fffef9fd = FUN_0000152c(DAT_fffef9fd + 1);
    }
    else {
      DAT_fffef9f9 = DAT_fffef9f9 & 0xdf;
      DAT_fffefa01 = FUN_0000152c(DAT_fffefa01 + 1);
    }
  }
  DAT_fffefa02 = 0;
  DAT_fffefa03 = 0;
  DAT_fffefa04 = 0;
  DAT_fffefa05 = 0;
  return;
}

