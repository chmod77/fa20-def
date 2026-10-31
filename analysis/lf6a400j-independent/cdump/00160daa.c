
void FUN_00160daa(void)

{
  if ((DAT_fffff00c & 0x20) == 0) {
    if ((DAT_fffff00c & 0x10) == 0) {
      DAT_fffff00c = DAT_fffff00c & 0xf7;
    }
    else {
      DAT_fffff00c = DAT_fffff00c & 0xef;
    }
  }
  else {
    DAT_fffff00c = DAT_fffff00c & 0xdf;
    DAT_fffeb8c7 = 0;
    DAT_fffeb9e9 = 0;
  }
  FUN_00160d98();
  return;
}

