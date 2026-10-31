
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ed798(char param_1,ushort param_2,char param_3,short param_4,ushort param_5,
                 ushort param_6,short param_7,char param_8,short param_9,char param_10,
                 undefined1 *param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  undefined1 uVar5;
  
  bVar2 = false;
  if ((((param_1 != '\0') && (0x9ff < param_2)) && (param_3 == '\x04')) &&
     ((param_4 != 0 && (0x31 < param_5)))) {
    bVar2 = true;
  }
  if (((bVar2) && ((0x78e4 < param_9 || (param_9 < -0x78e4)))) && (param_10 == '\0')) {
    bVar1 = 0xc < _DAT_fffed588;
  }
  else {
    bVar1 = false;
  }
  if ((bVar2) && (((0x78e4 < param_9 || (param_9 < -0x78e4)) && (param_10 == '\0')))) {
    sVar4 = -1;
    if (_DAT_fffed588 != 0xffff) {
      sVar4 = _DAT_fffed588 + 1;
    }
  }
  else {
    _DAT_fffed588 = 0;
    sVar4 = _DAT_fffed588;
  }
  _DAT_fffed588 = sVar4;
  if (((param_1 != '\0') && (DAT_fffed58c == '\x04')) &&
     ((param_3 != '\x04' && ((param_8 == '\0' && (param_7 != 0)))))) {
    bVar3 = true;
    if ((_DAT_fffed58a < 0x78e5) && (-0x78e5 < _DAT_fffed58a)) {
      bVar3 = false;
    }
    if (!bVar3) {
      uVar5 = 3;
      goto LAB_000ed8b6;
    }
  }
  uVar5 = 0;
  if (!bVar2) {
    uVar5 = 4;
  }
LAB_000ed8b6:
  if (param_10 == '\0') {
    if (bVar1) {
      *param_11 = 1;
    }
    else if ((((param_1 == '\0') || ((uint)param_6 * 0x168 >> 0x10 < 0x10000)) ||
             (DAT_fffed58c != '\x04')) || ((param_3 == '\x04' || (param_7 == 0)))) {
      *param_11 = uVar5;
    }
    else {
      *param_11 = 2;
    }
  }
  else {
    *param_11 = 0;
  }
  DAT_fffed58c = param_3;
  _DAT_fffed58a = param_9;
  return;
}

