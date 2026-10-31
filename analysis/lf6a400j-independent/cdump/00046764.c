
void FUN_00046764(void)

{
  if (((int)DAT_ffff6569 & 0x80U) == 0) {
    DAT_fffeff79 = DAT_fffeff79 & 0xfd;
  }
  else {
    DAT_fffeff79 = DAT_fffeff79 | 2;
  }
  DAT_fffef782 = DAT_fffef782 | 0x80;
  DAT_fffefeb1 = 1;
  return;
}

