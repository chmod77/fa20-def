
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e1b2c(byte param_1,char param_2,char param_3,char param_4,ushort param_5,char param_6,
                 uint *param_7,undefined2 *param_8,uint *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  char cVar6;
  uint uVar5;
  char cVar7;
  uint uVar8;
  
  bVar1 = false;
  if ((param_2 != '\0') && (param_1 == 0)) {
    bVar1 = true;
  }
  bVar2 = false;
  if (((param_2 != '\0') && (param_1 != 0)) && (param_3 == '\0')) {
    bVar2 = true;
  }
  cVar7 = '\0';
  if ((bVar1) && (param_4 != '\0')) {
    cVar7 = '\x01';
  }
  if (DAT_fffed221 < param_1) {
    _DAT_fffed214 = _DAT_fffed218;
  }
  if (param_6 != '\0') {
    _DAT_fffed214 = 0;
  }
  *param_9 = _DAT_fffed214;
  _DAT_fffed218 = 0;
  if (((param_2 != '\0') && (param_1 != 0)) && ((param_3 != '\0' && (DAT_fffed220 != '\0')))) {
    _DAT_fffed218 = 1;
  }
  bVar3 = false;
  if ((((param_2 != '\0') && (param_1 != 0)) && (param_3 != '\0')) && (DAT_fffed220 == '\0')) {
    bVar3 = true;
  }
  cVar6 = cVar7;
  if (bVar2) {
    cVar6 = DAT_fffed220;
  }
  if ((!bVar3) && (DAT_fffed220 = cVar6, _DAT_fffed218 != 0)) {
    DAT_fffed220 = '\0';
  }
  uVar5 = 0;
  if (bVar1) {
    uVar5 = _DAT_fffed210;
  }
  uVar8 = _DAT_fffed210;
  if (((_DAT_fffed218 == 0) && (!bVar2)) && (uVar8 = uVar5, cVar7 != '\0')) {
    uVar8 = _DAT_fffed214;
  }
  uVar4 = _DAT_fffed21c;
  if (param_3 != '\0') {
    uVar4 = param_5;
  }
  if ((((_DAT_fffed218 != 0) || (bVar2)) || (cVar7 != '\0')) || (uVar5 = 0, bVar1)) {
    uVar5 = (uint)_DAT_fffed21e;
  }
  if (bVar3) {
    _DAT_fffed218 = (uint)uVar4 - (uint)_DAT_fffed21c;
    if ((int)_DAT_fffed218 < 0) {
      uVar5 = -_DAT_fffed218;
      if ((int)-_DAT_fffed218 < 0) {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = _DAT_fffed218;
      if ((int)_DAT_fffed218 < 0) {
        uVar5 = 0;
      }
    }
  }
  *param_8 = (short)uVar5;
  if (bVar3) {
    uVar5 = uVar5 & 0xffff;
    _DAT_fffed218 = uVar5 + _DAT_fffed210;
    if (_DAT_fffed218 < uVar5) {
      _DAT_fffed218 = 0xffffffff;
    }
  }
  if (param_6 == '\0') {
    if (!bVar3) {
      _DAT_fffed218 = uVar8;
    }
  }
  else {
    _DAT_fffed218 = 0;
  }
  *param_7 = _DAT_fffed218;
  DAT_fffed221 = param_1;
  _DAT_fffed210 = _DAT_fffed218;
  _DAT_fffed21c = uVar4;
  _DAT_fffed21e = (short)uVar5;
  return;
}

