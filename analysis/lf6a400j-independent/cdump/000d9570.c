
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d9570(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 param_6,undefined1 *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  
  bVar3 = param_3 != '\0';
  bVar4 = param_4 != '\0';
  if ((((param_2 == '\0') || (bVar3)) || (bVar4)) || (param_5 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = 0xf9 < _DAT_fffecf9c;
  }
  if (((param_2 == '\0') || (bVar3)) || ((bVar4 || (param_5 == '\0')))) {
    _DAT_fffecf9c = 0;
    sVar5 = _DAT_fffecf9c;
  }
  else {
    sVar5 = -1;
    if (_DAT_fffecf9c != 0xffff) {
      sVar5 = _DAT_fffecf9c + 1;
    }
  }
  _DAT_fffecf9c = sVar5;
  if (((param_2 == '\0') || (bVar3)) || ((bVar4 || (param_5 != '\0')))) {
    bVar2 = false;
  }
  else {
    bVar2 = 0xf9 < _DAT_fffecf9e;
  }
  if ((((param_2 == '\0') || (bVar3)) || (bVar4)) || (param_5 != '\0')) {
    _DAT_fffecf9e = 0;
    sVar5 = _DAT_fffecf9e;
  }
  else {
    sVar5 = -1;
    if (_DAT_fffecf9e != 0xffff) {
      sVar5 = _DAT_fffecf9e + 1;
    }
  }
  _DAT_fffecf9e = sVar5;
  if (param_1 != '\0') {
    if (bVar1) {
      *param_7 = 1;
      return;
    }
    if (!bVar2) {
      *param_7 = param_6;
      return;
    }
  }
  *param_7 = 0;
  return;
}

