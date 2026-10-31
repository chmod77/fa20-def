
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a0fc(char param_1,undefined1 param_2,ushort param_3,ushort param_4,ushort param_5,
                 byte param_6,short *param_7)

{
  short sVar1;
  
  sVar1 = _DAT_fffedc3e;
  if ((((param_4 < 0x2ee) && (param_5 < 0x7ae1)) && (param_6 < 0xa5)) &&
     (sVar1 = -1, _DAT_fffedc3e != -1)) {
    sVar1 = _DAT_fffedc3e + 1;
  }
  if (((param_1 != '\0') && (DAT_fffedc40 != '\0')) && ((999 < _DAT_fffedc3c && (param_3 < 0x29b))))
  {
    sVar1 = 0;
  }
  *param_7 = sVar1;
  _DAT_fffedc3e = sVar1;
  _DAT_fffedc3c = param_3;
  DAT_fffedc40 = param_2;
  return;
}

