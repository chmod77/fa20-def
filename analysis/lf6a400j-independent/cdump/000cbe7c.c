
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cbe7c(char param_1,char param_2,char param_3,char param_4,uint param_5,uint param_6,
                 char param_7,char param_8,short param_9,ushort param_10,undefined1 *param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  
  uVar8 = LK_134C84((uint)&T_02EB1C,param_5 & 0xffff);
  uVar10 = 0;
  if ((param_6 & 0xffff) <= (param_5 & 0xffff)) {
    uVar10 = param_5 - param_6;
  }
  bVar1 = false;
  if (param_7 == '\0') {
    bVar1 = 199 < _DAT_fffecbee;
    sVar7 = -1;
    if (_DAT_fffecbee != 0xffff) {
      sVar7 = _DAT_fffecbee + 1;
    }
  }
  else {
    _DAT_fffecbee = 0;
    sVar7 = _DAT_fffecbee;
  }
  _DAT_fffecbee = sVar7;
  bVar2 = false;
  if (param_8 == '\0') {
    bVar2 = 199 < _DAT_fffecbf0;
    sVar7 = -1;
    if (_DAT_fffecbf0 != 0xffff) {
      sVar7 = _DAT_fffecbf0 + 1;
    }
  }
  else {
    _DAT_fffecbf0 = 0;
    sVar7 = _DAT_fffecbf0;
  }
  _DAT_fffecbf0 = sVar7;
  if ((param_3 == '\0') || (param_4 != '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = 199 < _DAT_fffecbea;
  }
  if ((param_3 == '\0') || (param_4 != '\0')) {
    _DAT_fffecbea = 0;
    sVar7 = _DAT_fffecbea;
  }
  else {
    sVar7 = -1;
    if (_DAT_fffecbea != 0xffff) {
      sVar7 = _DAT_fffecbea + 1;
    }
  }
  _DAT_fffecbea = sVar7;
  uVar10 = uVar10 & 0xffff;
  bVar4 = _DAT_fffecbec < 200;
  if (uVar10 < 0x181) {
    _DAT_fffecbec = 0;
    sVar7 = _DAT_fffecbec;
  }
  else {
    sVar7 = -1;
    if (_DAT_fffecbec != 0xffff) {
      sVar7 = _DAT_fffecbec + 1;
    }
  }
  _DAT_fffecbec = sVar7;
  bVar6 = param_10 < 0x5dc1;
  if (((((param_1 == '\0') || (param_2 == '\0')) || (param_3 == '\0')) || (!bVar3)) ||
     ((((uVar10 < 0x181 || bVar4 || (!bVar1)) || ((!bVar2 || ((param_9 < 0xe3 || (bVar6)))))) &&
      ((bVar6 || (param_9 <= (short)uVar8)))))) {
    bVar5 = false;
  }
  else {
    bVar5 = 299 < _DAT_fffecbe8;
  }
  if (((((param_1 == '\0') || (param_2 == '\0')) || (param_3 == '\0')) || (!bVar3)) ||
     ((((uVar10 < 0x181 || bVar4 || (!bVar1)) || ((!bVar2 || ((param_9 < 0xe3 || (bVar6)))))) &&
      ((bVar6 || (param_9 <= (short)uVar8)))))) {
    _DAT_fffecbe8 = 0;
    sVar7 = _DAT_fffecbe8;
  }
  else {
    sVar7 = -1;
    if (_DAT_fffecbe8 != 0xffff) {
      sVar7 = _DAT_fffecbe8 + 1;
    }
  }
  _DAT_fffecbe8 = sVar7;
  uVar9 = 1;
  if (!bVar5) {
    uVar9 = DAT_fffecbf2;
  }
  *param_11 = uVar9;
  DAT_fffecbf2 = uVar9;
  return;
}

