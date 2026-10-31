
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003db34(void)

{
  if ((DAT_fffef214 < 0xd) && ((DAT_fffef210 & 1) != 0)) {
    _DAT_fffef212 = _DAT_fffef20c;
  }
  else if (DAT_fffef214 < 0xd) {
    _DAT_fffef212 = _v_Atmospheric_Pressure_E6AA;
  }
  else {
    _DAT_fffef212 = FUN_0016b4d8(&DAT_fffef212,(int)_DAT_fffef20c,0x800);
  }
  if ((DAT_fffef32c & 1) == 0) {
    if ((((DAT_fffef913 & 2) == 0) && ((DAT_fffef913 & 1) == 0)) && (_DAT_ffff0bea < 0xfb35)) {
      if (0x7c < _DAT_fffef216) {
        _DAT_ffff2f82 = _DAT_fffef212;
        _DAT_ffff2f80 = _DAT_fffef20c;
      }
      _DAT_fffef216 = FUN_00001540(_DAT_fffef216 + 1);
      goto LAB_0003dbe0;
    }
  }
  else {
    _DAT_ffff2f82 = 0x654d;
    _DAT_ffff2f80 = _DAT_fffef20c;
  }
  _DAT_fffef216 = 0;
LAB_0003dbe0:
  DAT_fffef214 = FUN_0000152c(DAT_fffef214 + 1);
  return;
}

