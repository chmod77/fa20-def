
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ccc6c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  undefined1 uVar6;
  
  bVar1 = false;
  if (param_5 == '\0') {
    _DAT_fffecc48 = 0;
    sVar5 = _DAT_fffecc48;
  }
  else {
    bVar1 = 0xe < _DAT_fffecc48;
    sVar5 = -1;
    if (_DAT_fffecc48 != 0xffff) {
      sVar5 = _DAT_fffecc48 + 1;
    }
  }
  _DAT_fffecc48 = sVar5;
  bVar2 = false;
  if (param_4 == '\0') {
    _DAT_fffecc4e = 0;
    sVar5 = _DAT_fffecc4e;
  }
  else {
    bVar2 = 0x31 < _DAT_fffecc4e;
    sVar5 = -1;
    if (_DAT_fffecc4e != 0xffff) {
      sVar5 = _DAT_fffecc4e + 1;
    }
  }
  _DAT_fffecc4e = sVar5;
  bVar3 = false;
  if (param_2 == '\0') {
    _DAT_fffecc4c = 0;
    sVar5 = _DAT_fffecc4c;
  }
  else {
    bVar3 = 0x31 < _DAT_fffecc4c;
    sVar5 = -1;
    if (_DAT_fffecc4c != 0xffff) {
      sVar5 = _DAT_fffecc4c + 1;
    }
  }
  _DAT_fffecc4c = sVar5;
  bVar4 = false;
  if (param_6 == '\0') {
    _DAT_fffecc4a = 0;
    sVar5 = _DAT_fffecc4a;
  }
  else {
    bVar4 = 0xe < _DAT_fffecc4a;
    sVar5 = -1;
    if (_DAT_fffecc4a != 0xffff) {
      sVar5 = _DAT_fffecc4a + 1;
    }
  }
  _DAT_fffecc4a = sVar5;
  uVar6 = 1;
  if ((((!bVar2) && (!bVar1)) && (!bVar4)) && (((!bVar3 || (param_3 != '\0')) || (param_1 == '\0')))
     ) {
    uVar6 = 0;
  }
  *param_7 = uVar6;
  return;
}

