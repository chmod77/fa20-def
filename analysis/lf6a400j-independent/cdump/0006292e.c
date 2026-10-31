
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006292e(void)

{
  DAT_ffff01c7 = DAT_ffff01c7 | 0x80;
  if ((short)(_DAT_ffff2f9c + _DAT_ffff2fa6) != 0) {
    DAT_fffeffed = DAT_fffeffed | 4;
    DAT_ffff34bd = DAT_ffff34bd | 0x90;
  }
  if ((short)(_DAT_ffff2f9e + _DAT_ffff2fa8) != 0) {
    DAT_fffeffed = DAT_fffeffed | 2;
    DAT_ffff34bd = DAT_ffff34bd | 0x90;
  }
  FUN_000635ba();
  if (_DAT_ffff007a == 0) {
    FUN_000629ec();
  }
  else if (_DAT_ffff007a == 4) {
    FUN_00062adc();
  }
  else if (_DAT_ffff007a == 2) {
    FUN_00062b3c();
  }
  FUN_000676cc();
  if (((int)(char)DAT_ffff01c7 & 0x80U) == 0) {
    DAT_ffff34bd = DAT_ffff34bd | 0xa0;
  }
  else {
    DAT_ffff01c7 = DAT_ffff01c7 & 0x7f;
  }
  FUN_000680ba();
  FUN_00068224();
  FUN_00069384();
  FUN_00068072();
  return;
}

