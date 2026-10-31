
/* WARNING: Removing unreachable block (ram,0x000b13aa) */
/* WARNING: Removing unreachable block (ram,0x000b15b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b12e8(char param_1,char param_2,undefined4 param_3,ushort param_4,byte param_5,
                 ushort param_6,byte param_7,ushort param_8,undefined4 param_9,undefined4 param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  ushort uVar7;
  
  if ((DAT_fffec67c == '\0') || (cVar8 = '\x01', param_1 != '\0')) {
    cVar8 = DAT_fffec67b;
  }
  if (param_1 != '\0') {
    cVar8 = '\0';
  }
  bVar6 = false;
  if ((cVar8 != '\0' && _DAT_fffec66a < 5000) && (param_1 == '\0')) {
    bVar6 = true;
  }
  if (cVar8 == '\0') {
    _DAT_fffec66a = 0;
  }
  else {
    _DAT_fffec66a = _DAT_fffec66a + 1;
    if (_DAT_fffec66a == 0) {
      _DAT_fffec66a = -1;
    }
  }
  if (DAT_fffec674 == '\0') {
    uVar7 = 0x2a4;
  }
  else {
    uVar7 = 0x2c8;
  }
  DAT_fffec674 = param_4 <= uVar7;
  bVar2 = false;
  if (((bool)DAT_fffec674) && ((bool)DAT_fffec674 && 29999 < _DAT_fffec668)) {
    bVar2 = true;
  }
  if ((bool)DAT_fffec674) {
    _DAT_fffec668 = _DAT_fffec668 + 1;
    if (_DAT_fffec668 == 0) {
      _DAT_fffec668 = -1;
    }
  }
  else {
    _DAT_fffec668 = 0;
  }
  if (DAT_fffec677 == '\0') {
    uVar7 = 0x960;
  }
  else {
    uVar7 = 0x8f5;
  }
  DAT_fffec677 = uVar7 <= param_4;
  bVar1 = param_7 < 0x3e;
  DAT_fffec67d = 0xfe < param_7;
  if ((DAT_fffec676 == '\0') || (cVar9 = '\x01', (bool)DAT_fffec67d)) {
    cVar9 = DAT_fffec672;
  }
  if ((bool)DAT_fffec67d) {
    cVar9 = '\0';
  }
  bVar3 = true;
  if ((!(bool)DAT_fffec67d) && (cVar9 == '\0' || 8999 < _DAT_fffec670)) {
    bVar3 = false;
  }
  if (cVar9 == '\0') {
    _DAT_fffec670 = 0;
  }
  else {
    _DAT_fffec670 = _DAT_fffec670 + 1;
    if (_DAT_fffec670 == 0) {
      _DAT_fffec670 = -1;
    }
  }
  bVar5 = false;
  if ((!bVar1) && (!bVar1 && 499 < _DAT_fffec66e)) {
    bVar5 = true;
  }
  if ((DAT_fffec675 == '\0') || (cVar10 = '\x01', bVar5)) {
    cVar10 = DAT_fffec678;
  }
  if (bVar5) {
    cVar10 = '\0';
  }
  if (bVar1) {
    _DAT_fffec66e = 0;
  }
  else {
    _DAT_fffec66e = _DAT_fffec66e + 1;
    if (_DAT_fffec66e == 0) {
      _DAT_fffec66e = -1;
    }
  }
  bVar1 = true;
  if ((!bVar5) && (cVar10 == '\0' || 8999 < _DAT_fffec66c)) {
    bVar1 = false;
  }
  if (cVar10 == '\0') {
    _DAT_fffec66c = 0;
  }
  else {
    _DAT_fffec66c = _DAT_fffec66c + 1;
    if (_DAT_fffec66c == 0) {
      _DAT_fffec66c = -1;
    }
  }
  if (DAT_fffec679 == '\0') {
    bVar11 = 0x8c;
  }
  else {
    bVar11 = 0x88;
  }
  if (DAT_fffec67a == '\0') {
    uVar7 = 0x9000;
  }
  else {
    uVar7 = 0x8800;
  }
  bVar4 = true;
  if ((((((!bVar2) && (!(bool)DAT_fffec677)) && (bVar11 > param_5)) &&
       ((param_1 == '\0' && (!bVar6)))) && ((0x9fff >= param_6 && ((!bVar3 && (!bVar1)))))) &&
     ((uVar7 > param_8 && (param_2 == '\0')))) {
    bVar4 = false;
  }
  DAT_fffec672 = cVar9;
  DAT_fffec675 = bVar5;
  DAT_fffec676 = DAT_fffec67d;
  DAT_fffec678 = cVar10;
  DAT_fffec67b = cVar8;
  DAT_fffec67c = param_1;
  *(bool *)param_10 = !bVar4;
  DAT_fffec679 = bVar11 <= param_5;
  DAT_fffec673 = 0x9fff < param_6;
  DAT_fffec67a = uVar7 <= param_8;
  return;
}

