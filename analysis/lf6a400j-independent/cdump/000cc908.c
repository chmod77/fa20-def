
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cc908(char param_1,byte param_2,byte param_3,char param_4,byte *param_5)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  
  cVar3 = '\x01';
  if (DAT_fffecc2c <= param_3) {
    cVar3 = DAT_fffecc2d;
  }
  if (param_3 != 0) {
    cVar3 = '\0';
  }
  bVar1 = false;
  if (cVar3 == '\0') {
    _DAT_fffecc2a = 0;
    sVar2 = _DAT_fffecc2a;
  }
  else {
    bVar1 = 999 < _DAT_fffecc2a;
    sVar2 = -1;
    if (_DAT_fffecc2a != 0xffff) {
      sVar2 = _DAT_fffecc2a + 1;
    }
  }
  _DAT_fffecc2a = sVar2;
  if ((((param_3 == 0) && (DAT_fffecc2e < param_2)) && (param_4 != '\0')) ||
     (((param_4 != '\0' && (param_2 != 0)) && (bVar1)))) {
    DAT_fffecc2f = '\x01';
  }
  if ((param_3 != 0) || (param_4 == '\0')) {
    DAT_fffecc2f = '\0';
  }
  if ((DAT_fffecc2f == '\0') || (param_2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x31 < _DAT_fffecc28;
  }
  if ((DAT_fffecc2f == '\0') || (param_2 == 0)) {
    _DAT_fffecc28 = 0;
    sVar2 = _DAT_fffecc28;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffecc28 != 0xffff) {
      sVar2 = _DAT_fffecc28 + 1;
    }
  }
  _DAT_fffecc28 = sVar2;
  DAT_fffecc2d = cVar3;
  if ((param_1 == '\0') || (bVar1)) {
    *param_5 = 0;
  }
  else {
    *param_5 = param_2;
  }
  DAT_fffecc2e = param_2;
  DAT_fffecc2c = param_3;
  return;
}

