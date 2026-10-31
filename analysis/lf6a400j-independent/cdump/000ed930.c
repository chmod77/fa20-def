
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ed930(char param_1,ushort param_2,char param_3,ushort param_4,char param_5,short param_6
                 ,char param_7,char param_8,undefined1 *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  
  bVar4 = param_4 < 0x7ce2;
  bVar3 = param_2 < 0xa00;
  bVar5 = true;
  if ((param_6 < 0x78e5) && (-0x78e5 < param_6)) {
    bVar5 = false;
  }
  if ((((param_1 == '\0') || (bVar3)) || (param_3 == '\0')) ||
     (((bVar4 || (param_5 == '\0')) || ((!bVar5 || (param_7 == '\0')))))) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x3e < _DAT_fffed590;
  }
  if (((param_1 == '\0') || (bVar3)) ||
     ((param_3 == '\0' || ((((bVar4 || (param_5 == '\0')) || (!bVar5)) || (param_7 == '\0')))))) {
    _DAT_fffed590 = 0;
    sVar6 = _DAT_fffed590;
  }
  else {
    sVar6 = -1;
    if (_DAT_fffed590 != 0xffff) {
      sVar6 = _DAT_fffed590 + 1;
    }
  }
  _DAT_fffed590 = sVar6;
  if (((((param_1 == '\0') || (bVar3)) || ((param_3 == '\0' || ((bVar4 || (param_5 == '\0')))))) ||
      (bVar5)) || (param_7 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = 0x3e < _DAT_fffed592;
  }
  if (((((param_1 == '\0') || (bVar3)) || (param_3 == '\0')) || ((bVar4 || (param_5 == '\0')))) ||
     ((bVar5 || (param_7 == '\0')))) {
    _DAT_fffed592 = 0;
    sVar6 = _DAT_fffed592;
  }
  else {
    sVar6 = -1;
    if (_DAT_fffed592 != 0xffff) {
      sVar6 = _DAT_fffed592 + 1;
    }
  }
  _DAT_fffed592 = sVar6;
  if (param_8 == '\0') {
    if (bVar1) {
      *param_9 = 1;
      return;
    }
    if (bVar2) {
      *param_9 = 2;
      return;
    }
  }
  *param_9 = 0;
  return;
}

