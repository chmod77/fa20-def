
/* WARNING: Removing unreachable block (ram,0x000f9b1e) */
/* WARNING: Removing unreachable block (ram,0x000f9d86) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f9970(ushort param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,short param_8,short param_9,ushort param_10,undefined2 param_11,
                 short param_12,uint param_13,char param_14,byte *param_15,ushort param_16,
                 undefined1 param_17,undefined2 *param_18,short *param_19,undefined2 *param_20,
                 undefined1 *param_21,undefined1 *param_22,char *param_23,undefined4 param_24,
                 byte *param_25)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  char cVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  short sVar13;
  undefined *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  byte local_5c;
  float fStack_40;
  float fStack_34;
  ushort uStack_2c;
  uint uStack_28;
  
  uVar11 = (uint)param_12;
  bVar3 = true;
  fVar15 = (float)(int)param_9 * 0.0027465818;
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
    if ((*param_15 < 0x82) || (0x84 < *param_15)) {
      local_5c = 0;
    }
    else if (DAT_fffed844 == 0xff) {
      local_5c = 0xff;
    }
    else {
      local_5c = DAT_fffed844 + 1;
    }
    if ((param_15[1] < 0x82) || (0x84 < param_15[1])) {
      DAT_fffed827 = 0;
    }
    else {
      DAT_fffed827 = 0xff;
      if (DAT_fffed845 != 0xff) {
        DAT_fffed827 = DAT_fffed845 + 1;
      }
    }
    DAT_fffed826 = local_5c;
    DAT_fffed825 = '\x01';
    if (local_5c < 0x32) {
      DAT_fffed825 = DAT_fffed841;
    }
    if (bVar3) {
      DAT_fffed825 = '\0';
    }
    DAT_fffed844 = local_5c;
    DAT_fffed841 = DAT_fffed825;
    DAT_fffed845 = DAT_fffed827;
  }
  *param_25 = DAT_fffed826;
  param_25[1] = DAT_fffed827;
  puVar14 = (undefined *)(param_13 & 0xffff);
  iVar12 = (int)puVar14 - (uint)param_16;
  if (iVar12 < 0x8000) {
    if (iVar12 < -0x8000) {
      iVar12 = -0x8000;
    }
  }
  else {
    iVar12 = 0x7fff;
  }
  sVar13 = (short)iVar12;
  if (param_7 == '\0') {
    sVar7 = param_9 - param_8;
    if (((param_9 < 0) || (-1 < param_8)) || (-1 < sVar7)) {
      if (((param_9 < 0) && (-1 < param_8)) && (-1 < sVar7)) {
        sVar7 = -0x8000;
      }
    }
    else {
      sVar7 = 0x7fff;
    }
  }
  else {
    sVar7 = 0;
  }
  *param_19 = sVar7;
  if (param_7 == '\0') {
    sVar8 = sVar7 - _DAT_fffed83e;
    if (((sVar7 < 0) || (-1 < _DAT_fffed83e)) || (-1 < sVar8)) {
      if (((sVar7 < 0) && (-1 < _DAT_fffed83e)) && (-1 < sVar8)) {
        sVar8 = -0x8000;
      }
    }
    else {
      sVar8 = 0x7fff;
    }
    fStack_40 = ((float)(int)sVar8 * (float)param_1 * 0.00053644174) / 60.0;
  }
  else {
    fStack_40 = 0.0;
  }
  fVar16 = 0.0;
  if (param_7 == '\0') {
    fVar16 = (_DAT_fffed830 + fStack_40) * 0.5;
  }
  fVar17 = 89.99725;
  if ((fVar16 <= 89.99725) && (fVar17 = fVar16, fVar16 < -90.0)) {
    fVar17 = -90.0;
  }
  if (fVar17 <= 89.99725) {
    if (-90.0 <= fVar17) {
      *param_20 = (short)(int)(fVar17 * 364.08887);
    }
    else {
      *param_20 = 0x8000;
    }
  }
  else {
    *param_20 = 0x7fff;
  }
  bVar4 = false;
  if ((0x3a00 < param_1) && ((0x3bff < param_1 || (DAT_fffed843 != '\0')))) {
    bVar4 = true;
  }
  if (((((param_4 != '\x02') || (0x16c < (uVar11 & 0xffff))) || (param_5 == '\0')) ||
      ((bVar4 || (0x9554 < param_10)))) || (param_10 < 0x4fa6)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x31 < _DAT_fffed838;
  }
  if (((param_4 != '\x02') || (0x16c < (uVar11 & 0xffff))) ||
     ((param_5 == '\0' || (((bVar4 || (0x9554 < param_10)) || (param_10 < 0x4fa6)))))) {
    _DAT_fffed838 = 0;
    sVar8 = _DAT_fffed838;
  }
  else {
    sVar8 = -1;
    if (_DAT_fffed838 != 0xffff) {
      sVar8 = _DAT_fffed838 + 1;
    }
  }
  _DAT_fffed838 = sVar8;
  bVar2 = true;
  if (DAT_fffed840 != '\0') {
    bVar5 = false;
    if ((bVar1) && ((0x48 < sVar13 || (sVar13 < -0x48)))) {
      bVar5 = true;
    }
    if ((bVar5) && (param_6 == '\0')) {
      bVar2 = false;
    }
  }
  if (bVar2) {
    if (param_6 == '\0') {
      puVar14 = (undefined *)(int)(short)param_16;
    }
    else {
      puVar14 = (undefined *)((int)&PTR_FUN_00006f80 + 1);
    }
  }
  if (!bVar2) {
    iVar12 = ((uint)puVar14 & 0xffff) - (uint)_DAT_fffed836;
    sVar8 = 0x7fff;
    if ((iVar12 < 0x8000) && (sVar8 = (short)iVar12, iVar12 < -0x8000)) {
      sVar8 = -0x8000;
    }
    puVar14 = (undefined *)((int)(short)((uint)(sVar8 * 0x3bc3) >> 0x10) + (uint)_DAT_fffed836);
    if ((int)puVar14 < (int)&DAT_00010000) {
      if ((int)puVar14 < 0) {
        puVar14 = (undefined *)0x0;
      }
    }
    else {
      puVar14 = &DAT_0000ffff;
    }
  }
  _DAT_fffed836 = (ushort)puVar14;
  if (&UNK_00009554 < (undefined *)((uint)puVar14 & 0xffff)) {
    puVar14 = (undefined *)0xffff9555;
  }
  if ((undefined *)((uint)puVar14 & 0xffff) < &UNK_00004fa6) {
    *param_18 = 0x4fa5;
  }
  else {
    *param_18 = (short)puVar14;
  }
  *(bool *)param_24 = bVar1;
  cVar9 = DAT_fffed842;
  if (param_14 != '\0') {
    if (((bVar1) && (-0xb6 < sVar13)) && (sVar13 < 0xb6)) {
      bVar2 = 0x31 < _DAT_fffed83c;
    }
    else {
      bVar2 = false;
    }
    if (((bVar1) && (-0xb6 < sVar13)) && (sVar13 < 0xb6)) {
      uVar6 = 0xffff;
      if (_DAT_fffed83c != 0xffff) {
        uVar6 = _DAT_fffed83c + 1;
      }
    }
    else {
      _DAT_fffed83c = 0;
      uVar6 = _DAT_fffed83c;
    }
    _DAT_fffed83c = uVar6;
    DAT_fffed824 = '\x01';
    if (((!bVar2) || (cVar9 = DAT_fffed824, bVar3)) &&
       ((bVar3 || (cVar9 = DAT_fffed824, DAT_fffed842 == '\0')))) {
      DAT_fffed824 = '\0';
      cVar9 = DAT_fffed824;
    }
  }
  DAT_fffed842 = cVar9;
  cVar9 = DAT_fffed825;
  if (param_14 != '\0') {
    cVar9 = DAT_fffed824;
  }
  *param_23 = cVar9;
  if (bVar3) {
    *param_22 = 0;
  }
  else if (cVar9 == '\0') {
    *param_22 = param_17;
  }
  else {
    *param_22 = 1;
  }
  fStack_34 = fVar15;
  if (DAT_fffed840 != '\0') {
    fStack_34 = _DAT_fffed82c + (fVar15 - _DAT_fffed82c) * 0.96874994;
  }
  fVar15 = fVar15 - _DAT_fffed828;
  fVar16 = 89.99725;
  if ((fVar15 <= 89.99725) && (fVar16 = fVar15, fVar15 < -90.0)) {
    fVar16 = -90.0;
  }
  sVar13 = 0x7fff;
  if ((fVar16 <= 89.99725) && (sVar13 = -0x8000, -90.0 <= fVar16)) {
    sVar13 = (short)(int)(fVar16 * 364.08887);
  }
  uVar11 = (uint)sVar13;
  if ((int)uVar11 < 0) {
    if ((int)-uVar11 < 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = -uVar11 & 0xffff;
    }
  }
  else if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
  if (((param_3 == '\0') || (0x2d7 < (uVar11 & 0xffff))) || (param_9 < -0x2665)) {
    bVar3 = false;
  }
  else {
    bVar3 = 0xe < _DAT_fffed83a;
  }
  if (((param_3 == '\0') || (0x2d7 < (uVar11 & 0xffff))) || (param_9 < -0x2665)) {
    _DAT_fffed83a = 0;
    sVar13 = _DAT_fffed83a;
  }
  else {
    sVar13 = -1;
    if (_DAT_fffed83a != 0xffff) {
      sVar13 = _DAT_fffed83a + 1;
    }
  }
  _DAT_fffed83a = sVar13;
  uStack_2c = param_8 - _DAT_fffed834;
  if (((param_8 < 0) || (-1 < _DAT_fffed834)) || (-1 < (short)uStack_2c)) {
    if (((param_8 < 0) && (-1 < _DAT_fffed834)) && (-1 < (short)uStack_2c)) {
      uStack_2c = 0x8000;
    }
  }
  else {
    uStack_2c = 0x7fff;
  }
  if ((short)uStack_2c < 0) {
    uStack_28 = -(int)(short)uStack_2c;
    if ((int)uStack_28 < 0) {
      uStack_28 = 0;
    }
  }
  else if ((short)uStack_2c < 0) {
    uStack_28 = 0;
  }
  else {
    uStack_28 = (uint)uStack_2c;
  }
  uVar10 = 0;
  if ((bVar3) && ((uStack_28 & 0xffff) < 0x2d8)) {
    uVar10 = 1;
  }
  *param_21 = uVar10;
  DAT_fffed840 = 1;
  _DAT_fffed83e = sVar7;
  _DAT_fffed830 = fStack_40;
  DAT_fffed843 = bVar4;
  _DAT_fffed82c = fStack_34;
  _DAT_fffed828 = fStack_34;
  _DAT_fffed834 = param_11;
  return;
}

