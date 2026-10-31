
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f251c(char param_1,ushort param_2,char param_3,ushort param_4,char param_5,short param_6
                 ,char param_7,undefined1 *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  
  if ((((param_1 == '\0') || (param_2 < 0xa00)) || (param_3 == '\0')) ||
     (((param_4 < 0xa258 || (param_5 == '\0')) || ((param_6 < 0x78e5 && (-0x78e5 < param_6)))))) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x3e < _DAT_fffed6d8;
  }
  if ((((param_1 == '\0') || (param_2 < 0xa00)) ||
      ((param_3 == '\0' || ((param_4 < 0xa258 || (param_5 == '\0')))))) ||
     ((param_6 < 0x78e5 && (-0x78e5 < param_6)))) {
    _DAT_fffed6d8 = 0;
    sVar4 = _DAT_fffed6d8;
  }
  else {
    sVar4 = -1;
    if (_DAT_fffed6d8 != 0xffff) {
      sVar4 = _DAT_fffed6d8 + 1;
    }
  }
  _DAT_fffed6d8 = sVar4;
  bVar2 = true;
  if ((param_6 < 0x78e5) && (-0x78e5 < param_6)) {
    bVar2 = false;
  }
  if (((((bVar2) || (param_5 == '\0')) || (param_4 < 0xa258)) ||
      ((param_3 == '\0' || (param_2 < 0xa00)))) || (param_1 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = 0x3e < _DAT_fffed6da;
  }
  bVar3 = true;
  if ((param_6 < 0x78e5) && (-0x78e5 < param_6)) {
    bVar3 = false;
  }
  if ((((bVar3) || (param_5 == '\0')) || (param_4 < 0xa258)) ||
     (((param_3 == '\0' || (param_2 < 0xa00)) || (param_1 == '\0')))) {
    _DAT_fffed6da = 0;
    sVar4 = _DAT_fffed6da;
  }
  else {
    sVar4 = -1;
    if (_DAT_fffed6da != 0xffff) {
      sVar4 = _DAT_fffed6da + 1;
    }
  }
  _DAT_fffed6da = sVar4;
  if (param_7 == '\0') {
    if (bVar1) {
      *param_8 = 1;
      return;
    }
    if (bVar2) {
      *param_8 = 2;
      return;
    }
  }
  *param_8 = 0;
  return;
}

