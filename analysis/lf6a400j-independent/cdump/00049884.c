
void FUN_00049884(void)

{
  if ((DAT_fffef9fc < 3) || ((DAT_fffef9f9 & 0x10) == 0)) {
    if (DAT_fffefa00 < 3) {
      return;
    }
    if ((DAT_fffef9f9 & 0x10) != 0) {
      return;
    }
    DAT_fffeff78 = DAT_fffeff78 & 0xfb;
  }
  else {
    DAT_fffeff78 = DAT_fffeff78 | 4;
  }
  DAT_fffeff70 = 1;
  DAT_fffefa00 = 0;
  DAT_fffef9fc = 0;
  return;
}

