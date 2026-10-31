
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000674f0(void)

{
  if (_DAT_ffff003c == 0xf46) {
    if ((_DAT_ffff00b4 < 0x76) && (0x30 < _DAT_ffff00b4)) {
      DAT_fffefff7 = DAT_fffefff7 & 0xf7;
      DAT_fffef910 = DAT_fffef910 & 0x7f;
      DAT_ffff3130 = DAT_ffff3130 & 0x7f;
    }
    else {
      DAT_fffefff7 = DAT_fffefff7 | 8;
      DAT_fffef910 = DAT_fffef910 | 0x80;
    }
    DAT_fffef18a = DAT_fffef18a | 0x80;
    _DAT_ffff2f90 = FUN_0016bd34(_DAT_ffff00b4 - 10);
  }
  return;
}

