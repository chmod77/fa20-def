
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00064d5c(void)

{
  if (DAT_ffff0386 == '\0') {
    if (((DAT_ffff6569 & 0x20) == 0) && (DAT_fffef5c6 == '\0')) {
      _DAT_ffff00fa = _DAT_ffff00ca;
      _DAT_ffff00fc = _DAT_ffff00cc;
      _DAT_ffff00fe = _DAT_ffff00ce;
    }
    else {
      _DAT_ffff00fa = 0x3db2;
      _DAT_ffff00fc = 0x3db2;
      _DAT_ffff00fe = 0xf6c9;
    }
    DAT_ffff0386 = '\x01';
  }
  _DAT_ffff0100 = 0x674;
  FUN_0006315e();
  _DAT_ffff34de = _DAT_ffff00ca;
  _DAT_ffff34e4 = _DAT_ffff00ca;
  _DAT_ffff34e0 = _DAT_ffff00cc;
  _DAT_ffff34e6 = _DAT_ffff00cc;
  _DAT_ffff34e2 = _DAT_ffff00ce;
  _DAT_ffff34e8 = _DAT_ffff00ce;
  return;
}

