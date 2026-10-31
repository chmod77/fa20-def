
void FUN_0004bf0e(void)

{
  if ((DAT_fffeeea8 & 0x20) != 0) {
    DAT_fffeeea8 = DAT_fffeeea8 & 0xdf | 0x10;
  }
  DAT_fffff022 = DAT_fffff022 & 0x7f;
  DAT_fffeeeaf = 9;
  DAT_fffeeea8 = DAT_fffeeea8 & 0xfd;
  return;
}

