
void FUN_0015c37e(void)

{
  if (DAT_ffff20db == 0) {
    DAT_ffff20c4 = 0xc0;
  }
  else if (DAT_ffff20db == 1) {
    DAT_ffff20c4 = 0xd0;
    DAT_ffff20e2 = DAT_ffff20e2 | 4;
  }
  else {
    DAT_ffff20c4 = 0xf0;
    if (DAT_ffff20db == 2) {
      DAT_ffff20c4 = 0xe0;
    }
  }
  if (DAT_ffff20db < 3) {
    DAT_ffff20db = DAT_ffff20db + 1;
    return;
  }
  DAT_ffff20db = 0;
  return;
}

