
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aa684(ushort param_1,undefined1 param_2,char param_3,char param_4,undefined2 param_5,
                 char param_6,byte param_7,uint param_8,uint param_9,byte param_10,char param_11,
                 short param_12,short *param_13,undefined2 *param_14,ushort *param_15,
                 undefined2 *param_16,undefined2 *param_17,undefined2 *param_18,undefined2 *param_19
                 )

{
  short sVar3;
  uint uVar1;
  uint uVar2;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte bVar8;
  char cVar9;
  undefined *puVar7;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (0x77ff < param_1) goto LAB_000aaa86;
  sVar3 = FUN_0016bc68(&DAT_0001389a,param_5);
  uVar1 = FUN_0016bc68(&DAT_0001397a,param_5);
  iVar6 = (param_8 & 0xffff) * 4 - (param_9 & 0xffff);
  uVar5 = iVar6 >> 2;
  uVar1 = uVar1 & 0xffff;
  if (iVar6 < 0) {
    uVar5 = -uVar5;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
  }
  else if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  _DAT_fffec46e = (undefined2)uVar5;
  uVar5 = uVar5 & 0xffff;
  fVar15 = 0.0;
  if (uVar5 != 0) {
    fVar15 = ((float)(int)param_12 * 0.048828125) / ((float)uVar5 * 0.1953125);
  }
  bVar8 = 8;
  if (param_10 < 8) {
    bVar8 = param_10;
  }
  bVar10 = 1;
  if (1 < bVar8) {
    bVar10 = bVar8;
  }
  uVar2 = uVar1;
  if ((bVar10 != 1) && (bVar10 != 2)) {
    if (bVar10 == 3) {
      uVar2 = FUN_0016bc68(&DAT_0001399a,param_5);
    }
    else if (bVar10 == 4) {
      uVar2 = FUN_0016bc68(&DAT_000139ba,param_5);
    }
    else if (bVar10 == 5) {
      uVar2 = FUN_0016bc68(&DAT_000139da,param_5);
    }
    else if (bVar10 == 6) {
      uVar2 = FUN_0016bc68(&DAT_000139fa,param_5);
    }
    else if (bVar10 == 7) {
      uVar2 = FUN_0016bc68(&DAT_00013a1a,param_5);
    }
    else {
      uVar2 = param_9 & 0xffff;
      if (bVar10 == 8) {
        uVar2 = FUN_0016bc68(&DAT_00013a3a,param_5);
      }
    }
  }
  if ((bVar10 == 1) || (bVar10 == 2)) {
    uVar1 = (uint)sVar3;
  }
  else if (bVar10 == 3) {
    uVar1 = FUN_0016bc68(&DAT_000138ba,param_5);
  }
  else if (bVar10 == 4) {
    uVar1 = FUN_0016bc68(&DAT_000138da,param_5);
  }
  else if (bVar10 == 5) {
    uVar1 = FUN_0016bc68(&DAT_000138fa,param_5);
  }
  else if (bVar10 == 6) {
    uVar1 = FUN_0016bc68(&DAT_0001391a,param_5);
  }
  else if (bVar10 == 7) {
    uVar1 = FUN_0016bc68(&DAT_0001393a,param_5);
  }
  else if (bVar10 == 8) {
    uVar1 = FUN_0016bc68(&DAT_0001395a,param_5);
  }
  if (param_3 == '\0') {
    uVar1 = uVar2;
  }
  _DAT_fffec46a = (undefined2)uVar1;
  fVar12 = (float)(uVar1 & 0xffff) * 0.0390625;
  if (fVar12 < _DAT_fffec474) {
    if (param_7 < 4) {
      uVar4 = 0x100;
    }
    else {
      uVar4 = 0xc;
    }
  }
  else {
    uVar4 = 0xffff;
  }
  fVar14 = fVar12 - _DAT_fffec474;
  if (fVar14 < 0.0) {
    fVar14 = -fVar14;
  }
  fVar11 = 2559.961;
  fVar13 = fVar11;
  if ((fVar14 <= 2559.961) && (fVar13 = fVar14, fVar14 < 0.0)) {
    fVar13 = 0.0;
  }
  if (fVar13 <= 2559.961) {
    if (0.0 <= fVar13) {
      _DAT_fffec470 = (undefined2)(int)(fVar13 * 25.599998);
    }
    else {
      _DAT_fffec470 = 0;
    }
  }
  else {
    _DAT_fffec470 = 0xffff;
  }
  if ((bVar10 == DAT_fffec47b) || (cVar9 = '\x01', param_11 == DAT_fffec47a)) {
    cVar9 = DAT_fffec47c;
  }
  if ((bVar10 != DAT_fffec47b) && (param_11 == DAT_fffec47a)) {
    cVar9 = '\0';
  }
  if ((uVar5 == 0) || (cVar9 != '\0')) {
    fVar14 = (float)uVar4 * 0.0390625;
  }
  else {
    fVar14 = fVar14 * fVar15;
  }
  fVar15 = fVar11;
  if ((fVar14 <= 2559.961) && (fVar15 = fVar14, fVar14 < 0.0)) {
    fVar15 = 0.0;
  }
  if (fVar15 <= 2559.961) {
    if (0.0 <= fVar15) {
      _DAT_fffec46c = (undefined2)(int)(fVar15 * 25.599998);
    }
    else {
      _DAT_fffec46c = 0;
    }
  }
  else {
    _DAT_fffec46c = 0xffff;
  }
  if (_DAT_fffec474 <= fVar12) {
    fVar14 = _DAT_fffec474 + fVar14;
    if (fVar12 < fVar14) goto LAB_000aa9aa;
  }
  else {
    fVar14 = _DAT_fffec474 - fVar14;
    if (fVar14 < fVar12) {
LAB_000aa9aa:
      fVar14 = fVar12;
    }
  }
  if (param_6 != '\0') {
    fVar14 = fVar12;
  }
  if ((fVar14 <= 2559.961) && (fVar11 = fVar14, fVar14 < 0.0)) {
    fVar11 = 0.0;
  }
  uVar1 = 0xffffffff;
  if ((fVar11 <= 2559.961) && (uVar1 = 0, 0.0 <= fVar11)) {
    uVar1 = (uint)(fVar11 * 25.599998);
  }
  _DAT_fffec466 = (undefined2)uVar1;
  DAT_fffec47c = cVar9;
  uVar4 = _DAT_fffec478;
  if (param_4 == '\b') {
    uVar4 = FUN_0016bb44(&DAT_0001c464,param_2);
  }
  if (param_4 == '\x01') {
    uVar4 = FUN_0016bb44(&DAT_0001c3e4,param_2);
  }
  else if (param_4 == '\x02') {
    uVar4 = FUN_0016bb44(&DAT_0001c404,param_2);
  }
  else if (param_4 == '\x03') {
    uVar4 = FUN_0016bb44(&DAT_0001c424,param_2);
  }
  else if (param_4 == '\x04') {
    uVar4 = FUN_0016bb44(&DAT_0001c444,param_2);
  }
  _DAT_fffec468 = uVar4;
  puVar7 = (undefined *)(((int)(uint)_DAT_fffec468 >> 1) + (uVar1 & 0xffff));
  if (puVar7 < &DAT_00014000) {
    if (puVar7 < (undefined *)0x4000) {
      _DAT_fffec464 = 0;
    }
    else {
      _DAT_fffec464 = (short)puVar7 + -0x4000;
    }
  }
  else {
    _DAT_fffec464 = -1;
  }
  DAT_fffec47a = param_11;
  _DAT_fffec474 = fVar14;
  _DAT_fffec478 = _DAT_fffec468;
  DAT_fffec47b = bVar10;
LAB_000aaa86:
  *param_13 = _DAT_fffec464;
  *param_14 = _DAT_fffec466;
  *param_15 = _DAT_fffec468;
  *param_16 = _DAT_fffec46a;
  *param_17 = _DAT_fffec46c;
  *param_18 = _DAT_fffec46e;
  *param_19 = _DAT_fffec470;
  return;
}

