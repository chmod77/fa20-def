
/* WARNING: Removing unreachable block (ram,0x000abd00) */
/* WARNING: Removing unreachable block (ram,0x000abd34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ab7b4(char param_1,byte param_2,char param_3,char param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,char param_9,ushort param_10,ushort param_11,
                 char param_12,char param_13,uint param_14,ushort param_15,char param_16,
                 char param_17,byte param_18,char param_19,char param_20,char param_21,char param_22
                 ,char param_23,char param_24,char param_25,char param_26,uint param_27,
                 char param_28,undefined2 *param_29,ushort *param_30,byte *param_31,byte *param_32,
                 byte *param_33,ushort *param_34,byte *param_35,undefined2 *param_36,
                 undefined4 param_37,undefined4 param_38,byte *param_39,byte *param_40)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  ushort uVar8;
  uint uVar7;
  byte bVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined *puVar10;
  char cVar17;
  ushort uVar16;
  ushort uVar19;
  byte bVar20;
  uint uVar18;
  ushort uVar21;
  undefined2 uVar22;
  bool bVar23;
  ushort uStack_2c;
  
  bVar5 = param_13 == '\0';
  if (param_4 == '\0') {
    bVar23 = 0x13 < DAT_fffec4c2;
    cVar17 = -1;
    if (DAT_fffec4c2 != 0xff) {
      cVar17 = DAT_fffec4c2 + 1;
    }
  }
  else {
    bVar23 = false;
    DAT_fffec4c2 = '\0';
    cVar17 = DAT_fffec4c2;
  }
  DAT_fffec4c2 = cVar17;
  if (param_13 == '\0') {
    uVar16 = 0xe00;
    uVar8 = 0x1000;
  }
  else {
    uVar16 = 0xe9a;
    uVar8 = 0x114d;
  }
  bVar3 = false;
  if (((((undefined **)(param_8 & 0xffff) < &PTR_LAB_0000999a) && (param_9 == '\0')) ||
      ((param_9 != '\0' &&
       (uVar7 = LK_133F40((uint)&T_02DF0C,param_7 & 0xffff),
       (undefined **)(param_8 & 0xffff) < (undefined **)(uVar7 & 0xffff))))) && (999 < param_10)) {
    bVar3 = true;
  }
  bVar1 = false;
  if (bVar3) {
    _DAT_fffec4b4 = 0;
    sVar6 = _DAT_fffec4b4;
  }
  else {
    bVar1 = 29999 < _DAT_fffec4b4;
    sVar6 = -1;
    if (_DAT_fffec4b4 != 0xffff) {
      sVar6 = _DAT_fffec4b4 + 1;
    }
  }
  _DAT_fffec4b4 = sVar6;
  bVar2 = false;
  if (bVar3) {
    bVar2 = 0x5db < _DAT_fffec4b0;
    sVar6 = -1;
    if (_DAT_fffec4b0 != 0xffff) {
      sVar6 = _DAT_fffec4b0 + 1;
    }
  }
  else {
    _DAT_fffec4b0 = 0;
    sVar6 = _DAT_fffec4b0;
  }
  _DAT_fffec4b0 = sVar6;
  bVar3 = false;
  if (param_12 == '\0') {
    _DAT_fffec4b8 = 0;
    sVar6 = _DAT_fffec4b8;
  }
  else {
    bVar3 = true;
    sVar6 = -1;
    if (_DAT_fffec4b8 != -1) {
      sVar6 = _DAT_fffec4b8 + 1;
    }
  }
  _DAT_fffec4b8 = sVar6;
  bVar11 = 0;
  if (param_28 == '\0') {
    uVar7 = LK_133BCC((uint)&T_02DF18,param_27 & 0xffff);
    bVar11 = (byte)uVar7;
  }
  *param_40 = bVar11;
  if (((param_25 == '\x02') && (param_13 == '\0')) &&
     (((param_23 != '\a' && (param_26 != '\0')) || ((param_23 != '\x0e' && (param_24 != '\0')))))) {
    bVar12 = 0x40;
  }
  else {
    bVar12 = 0;
  }
  *param_39 = bVar12;
  if ((param_1 == '\0') && (param_3 != '\0')) {
    uVar21 = uVar16;
    if (bVar3) {
      uVar21 = uVar8;
    }
  }
  else {
    uVar21 = 0;
  }
  *param_34 = uVar21;
  cVar17 = '\x06';
  if (param_24 != '\0') {
    cVar17 = '\r';
  }
  bVar3 = param_23 == cVar17;
  if (bVar23) {
    uVar19 = DAT_fffec4bf - 0x3c;
  }
  else {
    uVar19 = (ushort)DAT_fffec4bf;
  }
  if (param_4 != '\0') {
    uVar19 = 0x3c;
  }
  if ((short)uVar19 < 1) {
    uVar19 = 0;
  }
  else if ((short)uVar19 < 0) {
    uVar19 = 0;
  }
  bVar13 = (byte)uVar19;
  *param_31 = bVar13;
  bVar14 = 0;
  if (!bVar1) {
    bVar14 = DAT_fffec4be;
  }
  if (bVar2) {
    bVar14 = 0x43;
  }
  *param_32 = bVar14;
  cVar17 = '\x01';
  if (DAT_fffec4bb <= bVar3) {
    cVar17 = DAT_fffec4c1;
  }
  if (bVar3) {
    cVar17 = '\0';
  }
  bVar23 = false;
  if (cVar17 == '\0') {
    _DAT_fffec4b2 = 0;
  }
  else {
    bVar23 = _DAT_fffec4b2 < 100;
    _DAT_fffec4b2 = _DAT_fffec4b2 + 1;
    if (_DAT_fffec4b2 == 0) {
      _DAT_fffec4b2 = -1;
    }
  }
  bVar1 = true;
  if ((!bVar3) && (!bVar23)) {
    bVar1 = false;
  }
  DAT_fffec4c1 = cVar17;
  *(bool *)param_38 = !bVar1;
  if (DAT_fffec4bd == '\0') {
    bVar15 = 0x35;
  }
  else {
    bVar15 = 0x29;
  }
  bVar23 = false;
  if (bVar15 < param_2) {
    bVar23 = true;
    sVar6 = -1;
    if (_DAT_fffec4b6 != -1) {
      sVar6 = _DAT_fffec4b6 + 1;
    }
  }
  else {
    _DAT_fffec4b6 = 0;
    sVar6 = _DAT_fffec4b6;
  }
  _DAT_fffec4b6 = sVar6;
  if (bVar23) {
    uVar16 = uVar8;
  }
  bVar20 = (byte)((int)(uint)uVar16 >> 6);
  if ((param_1 == '\0') || (param_3 == '\0')) {
    bVar9 = 0;
  }
  else {
    uVar8 = 0x1e00;
    if (param_11 < 0x1e00) {
      uVar8 = param_11;
    }
    uVar8 = uVar8 >> 6;
    bVar9 = bVar20;
    if (((uint)((int)(uint)uVar16 >> 6) < (uint)uVar8) && (bVar9 = (byte)uVar8, 0xff < uVar8)) {
      bVar9 = 0xff;
    }
  }
  uVar16 = (ushort)bVar9 << 6;
  if ((ushort)((ushort)bVar9 << 6) < uVar21) {
    uVar16 = uVar21;
  }
  *param_30 = uVar16;
  *param_35 = bVar9;
  *param_33 = bVar20;
  if (DAT_fffec4ba == '\0') {
    uVar8 = 0x8e;
  }
  else {
    uVar8 = 0xc3;
  }
  bVar23 = param_15 < uVar8;
  if (DAT_fffec4c0 == '\0') {
    bVar20 = 5;
  }
  else {
    bVar20 = 6;
  }
  bVar2 = param_18 < bVar20;
  if (((((bVar5) && (bVar23)) && (param_16 == '\0')) && (param_17 == '\0')) ||
     ((((bVar5 && (bVar23)) && ((bVar2 && ((param_17 != '\0' && (param_19 != '\0')))))) &&
      ((param_20 == '\0' && ((param_21 == '\0' && (param_22 == '\0')))))))) {
    bVar4 = _DAT_fffec4ac != 0;
  }
  else {
    bVar4 = false;
  }
  if (((((bVar5) && (bVar23)) && (param_16 == '\0')) && (param_17 == '\0')) ||
     ((((bVar5 && (bVar23)) && ((bVar2 && ((param_17 != '\0' && (param_19 != '\0')))))) &&
      ((param_20 == '\0' && ((param_21 == '\0' && (param_22 == '\0')))))))) {
    _DAT_fffec4ac = _DAT_fffec4ac + 1;
    if (_DAT_fffec4ac == 0) {
      _DAT_fffec4ac = -1;
    }
  }
  else {
    _DAT_fffec4ac = 0;
  }
  bVar5 = false;
  if ((bVar4) && (!bVar1)) {
    bVar5 = true;
  }
  if (bVar5) {
    uStack_2c = _DAT_fffec4ae + 4000;
    if (uStack_2c < _DAT_fffec4ae) {
      uStack_2c = 0xffff;
    }
    if (14999 < uStack_2c) {
      uStack_2c = 15000;
    }
  }
  else {
    if (_DAT_fffec4ae < 1000) {
      uStack_2c = 0;
    }
    else {
      uStack_2c = _DAT_fffec4ae - 1000;
    }
    if (uStack_2c == 0) {
      uStack_2c = 0;
    }
  }
  if (DAT_fffec4bc < bVar5) {
    puVar10 = (undefined *)((param_14 & 0xffff) * 1000 >> 8);
    if (&DAT_0000ffff < puVar10) {
      puVar10 = &DAT_0000ffff;
    }
  }
  else {
    puVar10 = (undefined *)(int)(short)uStack_2c;
  }
  uVar18 = (param_6 & 0xff) << 6;
  uVar7 = (int)(short)uVar16;
  if (uVar16 < uVar18) {
    uVar7 = uVar18;
  }
  uVar18 = (uint)bVar13 << 6;
  uVar22 = (short)uVar7;
  if (uVar7 < uVar18) {
    uVar7 = uVar18;
    uVar22 = (short)uVar18;
  }
  if (uVar7 < (param_5 & 0xffff)) {
    uVar7 = param_5 & 0xffff;
    uVar22 = param_5._2_2_;
  }
  uVar18 = (uint)bVar14 << 6;
  if (uVar7 < uVar18) {
    uVar7 = uVar18;
    uVar22 = (short)uVar18;
  }
  uVar18 = __udiv32_r1_by_r0(((uint)puVar10 & 0xffff) << 5,0x7d);
  if (uVar7 < (uVar18 & 0xffff)) {
    uVar7 = uVar18 & 0xffff;
    uVar22 = (short)uVar18;
  }
  uVar18 = (uint)bVar12 << 6;
  if (uVar7 < uVar18) {
    uVar7 = uVar18;
    uVar22 = (short)uVar18;
  }
  if (uVar7 < (uint)bVar11 << 6) {
    uVar22 = (short)((uint)bVar11 << 6);
  }
  *param_29 = uVar22;
  *param_36 = (short)puVar10;
  *(bool *)param_37 = bVar4;
  DAT_fffec4bf = bVar13;
  DAT_fffec4be = bVar14;
  _DAT_fffec4ae = (short)puVar10;
  DAT_fffec4bc = bVar5;
  DAT_fffec4bb = bVar3;
  DAT_fffec4bd = bVar15 < param_2;
  DAT_fffec4ba = bVar23;
  DAT_fffec4c0 = bVar2;
  return;
}

