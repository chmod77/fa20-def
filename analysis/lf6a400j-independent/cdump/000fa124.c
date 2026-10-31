
/* WARNING: Removing unreachable block (ram,0x000fa23a) */
/* WARNING: Removing unreachable block (ram,0x000fa48e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fa124(ushort param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,short param_8,short param_9,ushort param_10,undefined2 param_11,
                 short param_12,uint param_13,char param_14,int param_15,uint param_16,
                 undefined1 param_17,undefined2 *param_18,short *param_19,undefined2 *param_20,
                 undefined1 *param_21,undefined1 *param_22,char *param_23,undefined4 param_24)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  undefined *puVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  undefined *puVar13;
  char cVar14;
  undefined1 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar11 = (uint)param_12;
  bVar3 = true;
  fVar17 = (float)(int)param_9 * 0.0027465818;
  if ((param_2 == '\0') && (param_6 == '\0')) {
    bVar3 = false;
  }
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
  }
  if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
  if (param_14 == '\0') {
    DAT_fffed849 = '\x01';
    if (*(byte *)(param_15 + 1) < 0x32) {
      DAT_fffed849 = DAT_fffed865;
    }
    DAT_fffed865 = DAT_fffed849;
    if (bVar3) {
      DAT_fffed849 = '\0';
      DAT_fffed865 = DAT_fffed849;
    }
  }
  iVar12 = (int)(param_13 & 0xffff) - (int)(param_16 & 0xffff);
  if (iVar12 < 0x8000) {
    if (iVar12 < -0x8000) {
      iVar12 = -0x8000;
    }
  }
  else {
    iVar12 = 0x7fff;
  }
  sVar10 = (short)iVar12;
  if (param_7 == '\0') {
    sVar8 = param_9 - param_8;
    if (((param_9 < 0) || (-1 < param_8)) || (-1 < sVar8)) {
      if (((param_9 < 0) && (-1 < param_8)) && (-1 < sVar8)) {
        sVar8 = -0x8000;
      }
    }
    else {
      sVar8 = 0x7fff;
    }
  }
  else {
    sVar8 = 0;
  }
  *param_19 = sVar8;
  if (param_7 == '\0') {
    sVar9 = sVar8 - _DAT_fffed85e;
    if (((sVar8 < 0) || (-1 < _DAT_fffed85e)) || (-1 < sVar9)) {
      if (((sVar8 < 0) && (-1 < _DAT_fffed85e)) && (-1 < sVar9)) {
        sVar9 = -0x8000;
      }
    }
    else {
      sVar9 = 0x7fff;
    }
    fVar16 = ((float)(int)sVar9 * (float)param_1 * 0.00053644174) / 60.0;
  }
  else {
    fVar16 = 0.0;
  }
  fVar18 = 0.0;
  if (param_7 == '\0') {
    fVar18 = (_DAT_fffed854 + fVar16) * 0.5;
  }
  fVar19 = 89.99725;
  if ((fVar18 <= 89.99725) && (fVar19 = fVar18, fVar18 < -90.0)) {
    fVar19 = -90.0;
  }
  if (fVar19 <= 89.99725) {
    if (-90.0 <= fVar19) {
      *param_20 = (short)(int)(fVar19 * 364.08887);
    }
    else {
      *param_20 = 0x8000;
    }
  }
  else {
    *param_20 = 0x7fff;
  }
  bVar4 = false;
  if ((0x3a00 < param_1) && ((0x3bff < param_1 || (DAT_fffed867 != '\0')))) {
    bVar4 = true;
  }
  if (((((param_4 != '\x02') || (0x16c < (uVar11 & 0xffff))) || (param_5 == '\0')) ||
      ((bVar4 || (0x9554 < param_10)))) || (param_10 < 0x4fa6)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x31 < _DAT_fffed862;
  }
  if (((param_4 != '\x02') || (0x16c < (uVar11 & 0xffff))) ||
     ((param_5 == '\0' || (((bVar4 || (0x9554 < param_10)) || (param_10 < 0x4fa6)))))) {
    _DAT_fffed862 = 0;
    sVar9 = _DAT_fffed862;
  }
  else {
    sVar9 = -1;
    if (_DAT_fffed862 != 0xffff) {
      sVar9 = _DAT_fffed862 + 1;
    }
  }
  _DAT_fffed862 = sVar9;
  bVar2 = true;
  if (DAT_fffed864 != '\0') {
    bVar5 = false;
    if ((bVar1) && ((0x48 < sVar10 || (sVar10 < -0x48)))) {
      bVar5 = true;
    }
    if ((bVar5) && (param_6 == '\0')) {
      bVar2 = false;
    }
  }
  puVar7 = (undefined *)(param_13 & 0xffff);
  if ((bVar2) && (puVar7 = (undefined *)(param_16 & 0xffff), param_6 != '\0')) {
    puVar7 = (undefined *)((int)&PTR_FUN_00006f80 + 1);
  }
  if (!bVar2) {
    iVar12 = (int)puVar7 - (uint)_DAT_fffed858;
    sVar9 = 0x7fff;
    if ((iVar12 < 0x8000) && (sVar9 = (short)iVar12, iVar12 < -0x8000)) {
      sVar9 = -0x8000;
    }
    puVar13 = (undefined *)((int)(short)((uint)(sVar9 * 0x3bc3) >> 0x10) + (uint)_DAT_fffed858);
    puVar7 = &DAT_0000ffff;
    if (((int)puVar13 < (int)&DAT_00010000) && (puVar7 = puVar13, (int)puVar13 < 0)) {
      puVar7 = (undefined *)0x0;
    }
  }
  puVar13 = puVar7;
  if (&UNK_00009554 < (undefined *)((uint)puVar7 & 0xffff)) {
    puVar13 = (undefined *)0xffff9555;
  }
  if ((undefined *)((uint)puVar13 & 0xffff) < &UNK_00004fa6) {
    *param_18 = 0x4fa5;
  }
  else {
    *param_18 = (short)puVar13;
  }
  *(bool *)param_24 = bVar1;
  cVar14 = DAT_fffed866;
  if (param_14 != '\0') {
    if (((bVar1) && (-0xb6 < sVar10)) && (sVar10 < 0xb6)) {
      bVar2 = 0x31 < _DAT_fffed85c;
    }
    else {
      bVar2 = false;
    }
    if (((bVar1) && (-0xb6 < sVar10)) && (sVar10 < 0xb6)) {
      uVar6 = 0xffff;
      if (_DAT_fffed85c != 0xffff) {
        uVar6 = _DAT_fffed85c + 1;
      }
    }
    else {
      _DAT_fffed85c = 0;
      uVar6 = _DAT_fffed85c;
    }
    _DAT_fffed85c = uVar6;
    DAT_fffed848 = '\x01';
    if (((!bVar2) || (cVar14 = DAT_fffed848, bVar3)) &&
       ((bVar3 || (cVar14 = DAT_fffed848, DAT_fffed866 == '\0')))) {
      DAT_fffed848 = '\0';
      cVar14 = DAT_fffed848;
    }
  }
  DAT_fffed866 = cVar14;
  cVar14 = DAT_fffed849;
  if (param_14 != '\0') {
    cVar14 = DAT_fffed848;
  }
  *param_23 = cVar14;
  if (bVar3) {
    *param_22 = 0;
  }
  else if (cVar14 == '\0') {
    *param_22 = param_17;
  }
  else {
    *param_22 = 1;
  }
  fVar18 = fVar17;
  if (DAT_fffed864 != '\0') {
    fVar18 = _DAT_fffed850 + (fVar17 - _DAT_fffed850) * 0.96874994;
  }
  fVar17 = fVar17 - _DAT_fffed84c;
  fVar19 = 89.99725;
  if ((fVar17 <= 89.99725) && (fVar19 = fVar17, fVar17 < -90.0)) {
    fVar19 = -90.0;
  }
  sVar10 = 0x7fff;
  if ((fVar19 <= 89.99725) && (sVar10 = -0x8000, -90.0 <= fVar19)) {
    sVar10 = (short)(int)(fVar19 * 364.08887);
  }
  uVar11 = (uint)sVar10;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
    if ((int)uVar11 < 0) {
      uVar11 = 0;
    }
  }
  else if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
  if (((param_3 == '\0') || (0x2d7 < (uVar11 & 0xffff))) || (param_9 < -0x2665)) {
    bVar3 = false;
  }
  else {
    bVar3 = 0xe < _DAT_fffed85a;
  }
  if (((param_3 == '\0') || (0x2d7 < (uVar11 & 0xffff))) || (param_9 < -0x2665)) {
    _DAT_fffed85a = 0;
    sVar10 = _DAT_fffed85a;
  }
  else {
    sVar10 = -1;
    if (_DAT_fffed85a != 0xffff) {
      sVar10 = _DAT_fffed85a + 1;
    }
  }
  _DAT_fffed85a = sVar10;
  sVar10 = param_8 - _DAT_fffed860;
  if (((param_8 < 0) || (-1 < _DAT_fffed860)) || (-1 < sVar10)) {
    if (((param_8 < 0) && (-1 < _DAT_fffed860)) && (-1 < sVar10)) {
      sVar10 = -0x8000;
    }
  }
  else {
    sVar10 = 0x7fff;
  }
  uVar11 = (uint)sVar10;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
    if ((int)uVar11 < 0) {
      uVar11 = 0;
    }
  }
  else if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
  uVar15 = 0;
  if ((bVar3) && ((uVar11 & 0xffff) < 0x2d8)) {
    uVar15 = 1;
  }
  *param_21 = uVar15;
  DAT_fffed864 = 1;
  _DAT_fffed85e = sVar8;
  _DAT_fffed854 = fVar16;
  _DAT_fffed858 = (short)puVar7;
  DAT_fffed867 = bVar4;
  _DAT_fffed850 = fVar18;
  _DAT_fffed84c = fVar18;
  _DAT_fffed860 = param_11;
  return;
}

