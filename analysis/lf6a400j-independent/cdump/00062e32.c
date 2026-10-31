
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00062e32(void)

{
  _DAT_ffff34c0 = _DAT_ffff34c6;
  _DAT_ffff34c2 = _DAT_ffff34c8;
  _DAT_ffff34c4 = _DAT_ffff34ca;
  _DAT_ffff34d8 = _DAT_ffff34cc;
  _DAT_ffff34da = _DAT_ffff34ce;
  _DAT_ffff34dc = _DAT_ffff34d0;
  _DAT_ffff34ee = _DAT_ffff34d2;
  _DAT_ffff34f0 = _DAT_ffff34d4;
  if ((byte)(DAT_ffff34d6 + DAT_ffff34d7) == '\0') {
    DAT_ffff0088 = DAT_ffff34d6;
  }
  else {
    DAT_ffff0088 = 0;
  }
  if (((_DAT_ffff34c6 == 0) || (_DAT_ffff34c6 == 0x1999)) ||
     ((short)(_DAT_ffff34c6 + _DAT_ffff34cc) != 0)) {
    DAT_ffff01e2 = DAT_ffff01e2 | 4;
    _DAT_ffff34c0 = 0x1999;
    _DAT_ffff34d8 = -0x1999;
  }
  if (((_DAT_ffff34c8 == 0) || (_DAT_ffff34c8 == 0x1999)) ||
     ((short)(_DAT_ffff34c8 + _DAT_ffff34ce) != 0)) {
    DAT_ffff01e2 = DAT_ffff01e2 | 2;
    _DAT_ffff34c2 = 0x1999;
    _DAT_ffff34da = -0x1999;
  }
  if (((_DAT_ffff34ca == 0) || (_DAT_ffff34ca == 0x248e)) ||
     ((short)(_DAT_ffff34ca + _DAT_ffff34d0) != 0)) {
    DAT_ffff01e2 = DAT_ffff01e2 | 1;
    _DAT_ffff34c4 = 0x248e;
    _DAT_ffff34dc = -0x248e;
  }
  if (((((ushort)(_DAT_ffff34d2 + _DAT_ffff34d4) != 0) || (((int)(char)DAT_ffff0088 & 0x80U) == 0))
      || (_DAT_ffff34d2 < 0x3c3c)) || (0x4444 < _DAT_ffff34d2)) {
    _DAT_ffff34ee = 0x4000;
    _DAT_ffff34f0 = -0x4000;
    DAT_ffff0088 = DAT_ffff0088 & 0x7f;
  }
  return;
}

