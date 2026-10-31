
void FUN_00049838(void)

{
  if ((DAT_fffef9fd < 3) || ((DAT_fffef9f9 & 0x20) == 0)) {
    if (DAT_fffefa01 < 3) {
      return;
    }
    if ((DAT_fffef9f9 & 0x20) != 0) {
      return;
    }
    DAT_fffeff78 = DAT_fffeff78 & 0xf7;
  }
  else {
    DAT_fffeff78 = DAT_fffeff78 | 8;
  }
  DAT_fffeff6e = 1;
  DAT_fffefa01 = 0;
  DAT_fffef9fd = 0;
  return;
}

