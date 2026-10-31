
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a8cc(char param_1,undefined1 param_2,ushort param_3,short *param_4)

{
  if ((((_DAT_fffedc6e < 0x29b) && (999 < param_3)) && (_DAT_fffedc6c < 0x2ee)) ||
     (0xfffe < _DAT_fffedc6c)) {
    _DAT_fffedc6c = -1;
  }
  else {
    _DAT_fffedc6c = _DAT_fffedc6c + 1;
  }
  if (((param_1 != '\0') && (DAT_fffedc70 != '\0')) && ((999 < _DAT_fffedc6e && (param_3 < 0x29b))))
  {
    _DAT_fffedc6c = 0;
  }
  *param_4 = _DAT_fffedc6c;
  _DAT_fffedc6e = param_3;
  DAT_fffedc70 = param_2;
  return;
}

