
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000625e2(void)

{
  DAT_ffff01c7 = DAT_ffff01c7 | 0x40;
  DAT_ffff01c9 = 0;
  if ((short)(_DAT_ffff34c0 + _DAT_ffff34d8) != 0) {
    DAT_fffef739 = DAT_fffef739 | 0x10;
    DAT_fffefff3 = DAT_fffefff3 | 4;
    DAT_ffff34bd = DAT_ffff34bd | 0x90;
  }
  if ((short)(_DAT_ffff34c2 + _DAT_ffff34da) != 0) {
    DAT_fffef739 = DAT_fffef739 | 0x20;
    DAT_fffefff3 = DAT_fffefff3 | 2;
    DAT_ffff34bd = DAT_ffff34bd | 0x90;
  }
  if ((short)(_DAT_ffff34c4 + _DAT_ffff34dc) != 0) {
    DAT_fffefff3 = DAT_fffefff3 | 1;
    DAT_ffff34bd = DAT_ffff34bd | 0x90;
  }
  FUN_000675be();
  if (((DAT_ffff34f7 & 0x20) == 0) && ((DAT_ffff34f7 & 0x10) == 0)) {
    _DAT_ffff34ea = _DAT_ffff34fc;
  }
  else {
    _DAT_ffff34ea = 1000;
  }
  _DAT_ffff34ec = -_DAT_ffff34ea;
  if (((DAT_ffff20cc & 2) == 0) && ((DAT_ffff0006 & 2) == 0)) {
    _DAT_ffff0034 = 0;
  }
  else if (_DAT_ffff0034 < 50000) {
    _DAT_ffff0034 = _DAT_ffff0034 + 1;
  }
  thunk_FUN_0006759a();
  thunk_FUN_00067578();
  if ((_DAT_ffff007a == 7) && (DAT_ffff02da == '\x01')) {
    _DAT_ffff007a = 2;
    _DAT_ffff0034 = 0;
  }
  if (_DAT_ffff007a == 0) {
    FUN_0006282c();
  }
  else if (_DAT_ffff007a == 4) {
    FUN_00062876();
  }
  else if (_DAT_ffff007a == 2) {
    FUN_000628e0();
  }
  if ((DAT_ffff01c7 & 0x40) == 0) {
    DAT_ffff34bd = DAT_ffff34bd | 0xa0;
  }
  else {
    DAT_ffff01c7 = DAT_ffff01c7 & 0xbf;
  }
  FUN_000694bc();
  FUN_00069754();
  FUN_00069820();
  DAT_ffff01c9 = 0;
  return;
}

