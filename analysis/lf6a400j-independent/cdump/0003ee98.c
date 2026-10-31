
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003ee98(void)

{
  if ((((DAT_fffef371 & 4) == 0) || (DAT_ffff091b != '\0')) || (_DAT_fffeef10 < 0xcc)) {
    DAT_fffef372 = DAT_fffef372 & 0xfe;
  }
  else {
    DAT_fffef372 = DAT_fffef372 | 1;
  }
  if ((DAT_fffef372 & 1) == 0) {
    DAT_fffef966 = 0;
  }
  else {
    if (((_DAT_ffff0f44 < 0x14d6) && (_DAT_ffff0f40 < 0x14d6)) || ((DAT_fffef06c & 4) != 0)) {
      DAT_fffef966 = 0;
    }
    else {
      if (7 < DAT_fffef966) {
        DAT_fffef8a3 = DAT_fffef8a3 | 0x40;
        DAT_fffef957 = 1;
      }
      DAT_fffef966 = FUN_0000152c(DAT_fffef966 + 1);
    }
    if (((_DAT_ffff0f44 != 0) && (_DAT_ffff0f44 < 0x14d6)) &&
       ((_DAT_ffff0f40 != 0 && (_DAT_ffff0f40 < 0x14d6)))) {
      if (7 < DAT_fffef967) {
        DAT_fffef8a3 = DAT_fffef8a3 & 0xbf;
        DAT_fffef957 = 1;
      }
      DAT_fffef967 = FUN_0000152c(DAT_fffef967 + 1);
      return;
    }
  }
  DAT_fffef967 = 0;
  return;
}

