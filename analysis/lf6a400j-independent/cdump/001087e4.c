
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001087e4(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,undefined1 *param_10)

{
  bool bVar1;
  short sVar2;
  
  if ((((param_1 == '\0') || (param_2 != '\0')) || (param_3 != '\0')) ||
     ((param_4 != '\0' || (param_5 != '\0')))) {
    bVar1 = false;
  }
  else {
    bVar1 = 4 < _DAT_fffedb64;
  }
  if (((param_1 == '\0') || (param_2 != '\0')) ||
     ((param_3 != '\0' || ((param_4 != '\0' || (param_5 != '\0')))))) {
    _DAT_fffedb64 = 0;
    sVar2 = _DAT_fffedb64;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffedb64 != 0xffff) {
      sVar2 = _DAT_fffedb64 + 1;
    }
  }
  _DAT_fffedb64 = sVar2;
  if ((((param_6 != '\0') || (param_7 != '\0')) || (param_8 != '\0')) || (param_9 != '\0')) {
    DAT_fffedb66 = 0;
  }
  if ((DAT_fffedb67 == '\0') || (bVar1)) {
    DAT_fffedb66 = 1;
  }
  *param_10 = DAT_fffedb66;
  DAT_fffedb67 = 1;
  return;
}

