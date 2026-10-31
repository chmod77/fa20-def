
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ccf30(char param_1,byte param_2,char param_3,ushort param_4,short param_5,char param_6,
                 undefined1 *param_7)

{
  short sVar1;
  char cVar2;
  undefined1 uVar3;
  
  DAT_fffecc5b = param_5 == 0;
  cVar2 = '\x01';
  if (DAT_fffecc5c <= param_2) {
    cVar2 = DAT_fffecc5d;
  }
  if (param_2 != 0) {
    cVar2 = '\0';
  }
  if (cVar2 == '\0') {
    _DAT_fffecc58 = 0;
    sVar1 = _DAT_fffecc58;
  }
  else {
    sVar1 = -1;
    if (_DAT_fffecc58 != -1) {
      sVar1 = _DAT_fffecc58 + 1;
    }
  }
  _DAT_fffecc58 = sVar1;
  if ((!(bool)DAT_fffecc5b) || (param_6 != '\0')) {
    DAT_fffecc5a = '\0';
  }
  uVar3 = 1;
  if ((((param_1 == '\0') && (param_3 == '\0')) && (param_2 == 0)) &&
     ((0x6666 < param_4 && (DAT_fffecc5a == '\0')))) {
    uVar3 = 0;
  }
  DAT_fffecc5d = cVar2;
  *param_7 = uVar3;
  DAT_fffecc5c = param_2;
  return;
}

