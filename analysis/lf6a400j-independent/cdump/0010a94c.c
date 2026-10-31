
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a94c(char param_1,undefined1 param_2,ushort param_3,short *param_4)

{
  if ((((_DAT_fffedc76 < 1000) || (0x29a < param_3)) || (0x2ed < _DAT_fffedc74)) &&
     (_DAT_fffedc74 < 0xffff)) {
    _DAT_fffedc74 = _DAT_fffedc74 + 1;
  }
  else {
    _DAT_fffedc74 = -1;
  }
  if (((param_1 != '\0') && (DAT_fffedc78 != '\0')) && ((_DAT_fffedc76 < 0x29b && (999 < param_3))))
  {
    _DAT_fffedc74 = 0;
  }
  *param_4 = _DAT_fffedc74;
  _DAT_fffedc76 = param_3;
  DAT_fffedc78 = param_2;
  return;
}

