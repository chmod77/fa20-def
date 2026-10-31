
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cc9fc(byte param_1,byte param_2,char param_3,undefined1 *param_4)

{
  bool bVar1;
  short sVar2;
  undefined1 uVar3;
  char cVar4;
  
  cVar4 = '\x01';
  if (DAT_fffecc36 <= param_2) {
    cVar4 = DAT_fffecc38;
  }
  if (param_2 != 0) {
    cVar4 = '\0';
  }
  bVar1 = false;
  if (cVar4 == '\0') {
    _DAT_fffecc32 = 0;
    sVar2 = _DAT_fffecc32;
  }
  else {
    bVar1 = 999 < _DAT_fffecc32;
    sVar2 = -1;
    if (_DAT_fffecc32 != 0xffff) {
      sVar2 = _DAT_fffecc32 + 1;
    }
  }
  _DAT_fffecc32 = sVar2;
  if ((((param_2 == 0) && (DAT_fffecc37 < param_1)) && (param_3 != '\0')) ||
     (((param_3 != '\0' && (param_1 != 0)) && (bVar1)))) {
    DAT_fffecc35 = '\x01';
  }
  if ((param_2 != 0) || (param_3 == '\0')) {
    DAT_fffecc35 = '\0';
  }
  if ((DAT_fffecc35 == '\0') || (param_1 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x31 < _DAT_fffecc30;
  }
  if ((DAT_fffecc35 == '\0') || (param_1 == 0)) {
    _DAT_fffecc30 = 0;
    sVar2 = _DAT_fffecc30;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffecc30 != 0xffff) {
      sVar2 = _DAT_fffecc30 + 1;
    }
  }
  _DAT_fffecc30 = sVar2;
  uVar3 = 1;
  if (!bVar1) {
    uVar3 = DAT_fffecc34;
  }
  DAT_fffecc38 = cVar4;
  *param_4 = uVar3;
  DAT_fffecc37 = param_1;
  DAT_fffecc36 = param_2;
  DAT_fffecc34 = uVar3;
  return;
}

