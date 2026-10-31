
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004bd2e(void)

{
  if ((DAT_fffff024 & 0x20) == 0) {
    if ((DAT_fffff024 & 0x10) == 0) {
      DAT_fffff024 = DAT_fffff024 & 0xf7;
    }
    else {
      DAT_fffff024 = DAT_fffff024 & 0xef;
    }
  }
  else {
    DAT_fffff024 = DAT_fffff024 & 0xdf;
  }
  _DAT_ffffecd8 = 1;
  DAT_fffeeea8 = DAT_fffeeea8 & 0xfe;
  FUN_0004b61c();
  return;
}

