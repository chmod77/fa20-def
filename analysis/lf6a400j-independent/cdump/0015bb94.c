
void FUN_0015bb94(void)

{
  if (DAT_ffff20d0 < 5) {
    DAT_ffff20d0 = DAT_ffff20d0 + 1;
    DAT_ffff20d1 = 0;
  }
  else {
    if ((DAT_ffff20cc & 2) != 0) {
      FUN_0015bbd8();
      FUN_0015bd18();
    }
    DAT_ffff20d0 = '\x01';
    DAT_ffff20d1 = 1;
  }
  return;
}

