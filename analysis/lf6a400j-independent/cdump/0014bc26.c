
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014bc26(void)

{
  DAT_ffff2014 = DAT_ffff2014 & 0x7f;
  if ((((int)(char)DAT_ffff201a & 0x80U) == 0) || ((DAT_ffff201a & 0x40) == 0)) {
    _DAT_ffff3640 = 0;
    _DAT_ffff3642 = 0;
    _DAT_ffff3644 = 0;
    _DAT_ffff3646 = 0;
  }
  else {
    if (DAT_ffff677c != '\0') {
      _DAT_ffff3640 = 0x146;
      _DAT_ffff3642 = 0x146;
      _DAT_ffff3644 = 0x216;
      _DAT_ffff3646 = 0x216;
    }
    if ((DAT_ffff3648 & 0x40) != 0) {
      _DAT_ffff3640 = FUN_0016b390((int)_DAT_ffff3640,0x5f,0x146);
      _DAT_ffff3642 = FUN_0016b390((int)_DAT_ffff3642,0x5f,0x146);
    }
    if (((int)(char)DAT_ffff3648 & 0x80U) != 0) {
      _DAT_ffff3644 = FUN_0016b944((int)_DAT_ffff3644,0x5f,0x216);
      _DAT_ffff3646 = FUN_0016b944((int)_DAT_ffff3646,0x5f,0x216);
    }
  }
  DAT_ffff3648 = DAT_ffff3648 & 0x3f;
  _DAT_ffff1afc = FUN_00001540(0x186a);
  return;
}

