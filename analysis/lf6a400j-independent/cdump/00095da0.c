
/* WARNING: Removing unreachable block (ram,0x00095f0c) */
/* WARNING: Removing unreachable block (ram,0x00095ec8) */
/* WARNING: Removing unreachable block (ram,0x00095e10) */
/* WARNING: Removing unreachable block (ram,0x00095e16) */
/* WARNING: Removing unreachable block (ram,0x000960fa) */
/* WARNING: Removing unreachable block (ram,0x0009615a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095da0(byte param_1,ushort param_2,char param_3,ushort param_4,char param_5,char param_6,
                 uint param_7,char param_8,short param_9,char param_10,undefined1 *param_11,
                 ushort *param_12,ushort *param_13)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  ushort uVar7;
  byte bVar9;
  ushort uVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined1 uVar13;
  ushort uVar14;
  ushort uVar15;
  
  param_7 = param_7 & 0xff;
  uVar4 = LK_133E10((uint)&T_02D458,param_7);
  if (DAT_fffebf0b == '\0') {
    sVar6 = -0x1e00;
  }
  else {
    sVar6 = -0x1d01;
  }
  DAT_fffebf0b = param_9 <= sVar6;
  bVar3 = false;
  if ((param_8 != '\x01') && ((bool)DAT_fffebf0b)) {
    bVar3 = true;
  }
  if (param_3 == '\0') {
    uVar5 = LK_133E10((uint)&T_02D464,param_7);
  }
  else if (param_4 < 0x8400) {
    uVar5 = LK_133E10((uint)&T_02D47C,param_7);
  }
  else {
    uVar5 = LK_133E10((uint)&T_02D470,param_7);
  }
  if (DAT_fffebf00 == '\0') {
    uVar7 = 0x8e;
  }
  else {
    uVar7 = 0xb2;
  }
  bVar9 = 0;
  if ((param_2 < uVar7) && (param_6 == '\0')) {
    bVar9 = 1;
  }
  if (DAT_fffebf05 == '\0') {
    uVar8 = 0x8e;
  }
  else {
    uVar8 = 0xb2;
  }
  bVar10 = 0;
  if ((param_2 < uVar8) && (param_6 == '\0')) {
    bVar10 = 1;
  }
  bVar2 = true;
  if ((param_1 != 0) && (DAT_fffebf02 != '\0')) {
    bVar2 = false;
  }
  bVar12 = 0;
  if (((!bVar2) && (param_10 != '\0')) && (param_5 != '\0')) {
    bVar12 = 1;
  }
  if (bVar2) {
    DAT_fffebeff = '\0';
  }
  else {
    if (DAT_fffebeff == '\0') {
      DAT_fffebf03 = 0;
      DAT_fffebf01 = 0;
      DAT_fffebeff = '\x01';
    }
    bVar1 = DAT_fffebf01 < bVar12;
    DAT_fffebef4 = bVar1 + DAT_fffebf03;
    DAT_fffebf01 = bVar12;
    DAT_fffebf03 = DAT_fffebef4;
    if (DAT_fffebef4 < bVar1) {
      DAT_fffebef4 = 0xff;
      DAT_fffebf03 = DAT_fffebef4;
    }
  }
  bVar12 = 0;
  if (!bVar2) {
    bVar12 = DAT_fffebef4;
  }
  bVar2 = true;
  if ((param_1 != 0) && (DAT_fffebf02 == '\0')) {
    bVar2 = false;
  }
  bVar11 = 0;
  if ((!bVar2) && (param_10 != '\0')) {
    bVar11 = 1;
  }
  if (bVar2) {
    DAT_fffebf0c = '\0';
  }
  else {
    if (DAT_fffebf0c == '\0') {
      DAT_fffebf08 = 0;
      DAT_fffebf07 = 0;
      DAT_fffebf0c = '\x01';
    }
    bVar1 = DAT_fffebf07 < bVar11;
    DAT_fffebef5 = bVar1 + DAT_fffebf08;
    DAT_fffebf07 = bVar11;
    DAT_fffebf08 = DAT_fffebef5;
    if (DAT_fffebef5 < bVar1) {
      DAT_fffebef5 = 0xff;
      DAT_fffebf08 = DAT_fffebef5;
    }
  }
  bVar11 = 0;
  if (!bVar2) {
    bVar11 = DAT_fffebef5;
  }
  if ((DAT_fffebf09 < param_1) ||
     ((param_1 != 0 && (((short)(ushort)bVar9 < (short)_DAT_fffebef6 || (1 < bVar11)))))) {
    DAT_fffebf0a = 1;
  }
  if ((((param_1 == 0) || (0x18 < bVar12)) || (bVar9 != 0)) || (uVar13 = DAT_fffebf0a, bVar3)) {
    uVar13 = 0;
  }
  bVar2 = true;
  if ((param_1 != 0) && (DAT_fffebf02 != '\0')) {
    bVar2 = false;
  }
  if (bVar2) {
    DAT_fffebf0d = '\0';
  }
  else {
    if (DAT_fffebf0d == '\0') {
      _DAT_fffebefc = 0;
      DAT_fffebf0d = '\x01';
    }
    _DAT_fffebef0 = (param_5 != '\0') + _DAT_fffebefc;
    _DAT_fffebefc = _DAT_fffebef0;
    if (_DAT_fffebef0 < (param_5 != '\0')) {
      _DAT_fffebef0 = 0xffff;
      _DAT_fffebefc = _DAT_fffebef0;
    }
  }
  uVar14 = 0;
  if (!bVar2) {
    uVar14 = _DAT_fffebef0;
  }
  DAT_fffebf0a = uVar13;
  *param_12 = (ushort)bVar12;
  bVar2 = true;
  if ((param_1 != 0) && (DAT_fffebf02 == '\0')) {
    bVar2 = false;
  }
  if (bVar2) {
    DAT_fffebefe = '\0';
  }
  else {
    if (DAT_fffebefe == '\0') {
      _DAT_fffebefa = 0;
      DAT_fffebefe = '\x01';
    }
    _DAT_fffebef2 = _DAT_fffebefa + 1;
    bVar1 = _DAT_fffebefa == 0xffff;
    _DAT_fffebefa = _DAT_fffebef2;
    if (bVar1) {
      _DAT_fffebef2 = 0xffff;
      _DAT_fffebefa = _DAT_fffebef2;
    }
  }
  uVar15 = 0;
  if (!bVar2) {
    uVar15 = _DAT_fffebef2;
  }
  *param_13 = (ushort)bVar11;
  if ((DAT_fffebf06 < param_1) ||
     ((param_1 != 0 && (((short)(ushort)bVar10 < (short)_DAT_fffebef8 || ((ushort)uVar4 <= uVar15)))
      ))) {
    DAT_fffebf04 = 1;
  }
  if ((param_1 == 0) ||
     (((((ushort)uVar4 != 0 && ((uVar5 & 0xffff) <= (uint)uVar14)) || (bVar10 != 0)) || (bVar3)))) {
    DAT_fffebf04 = 0;
  }
  *param_11 = uVar13;
  DAT_fffebf00 = param_2 < uVar7;
  DAT_fffebf09 = param_1;
  _DAT_fffebef6 = (ushort)bVar9;
  DAT_fffebf05 = param_2 < uVar8;
  DAT_fffebf06 = param_1;
  _DAT_fffebef8 = (ushort)bVar10;
  DAT_fffebf02 = uVar13;
  return;
}

