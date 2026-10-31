
/* WARNING: Removing unreachable block (ram,0x000fd8dc) */
/* WARNING: Removing unreachable block (ram,0x000fdb94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fd7a8(ushort param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,short param_8,short param_9,ushort param_10,undefined2 param_11,
                 short param_12,uint param_13,char param_14,int param_15,ushort param_16,
                 undefined1 param_17,undefined2 *param_18,short *param_19,undefined2 *param_20,
                 undefined1 *param_21,undefined1 *param_22,char *param_23,undefined4 param_24)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  short sVar8;
  short sVar9;
  int iVar7;
  ushort uVar10;
  uint uVar11;
  char cVar12;
  undefined1 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_48;
  undefined2 uStack_40;
  float fStack_3c;
  ushort uStack_34;
  ushort uStack_2e;
  
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
    DAT_fffed921 = '\x01';
    if (*(byte *)(param_15 + 1) < 0x32) {
      DAT_fffed921 = DAT_fffed93f;
    }
    DAT_fffed93f = DAT_fffed921;
    if (bVar3) {
      DAT_fffed921 = '\0';
      DAT_fffed93f = DAT_fffed921;
    }
  }
  puVar6 = (undefined *)__udiv32_r1_by_r0((param_13 & 0xffff) << 0xd,0xe1);
  iVar14 = (int)puVar6 - (uint)param_16;
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
    sVar9 = sVar8 - _DAT_fffed934;
    if (((sVar8 < 0) || (-1 < _DAT_fffed934)) || (-1 < sVar9)) {
      if (((sVar8 < 0) && (-1 < _DAT_fffed934)) && (-1 < sVar9)) {
        sVar9 = -0x8000;
      }
    }
    else {
      sVar9 = 0x7fff;
    }
    fStack_48 = ((float)(int)sVar9 * (float)param_1 * 0.00053644174) / 60.0;
  }
  else {
    fStack_48 = 0.0;
  }
  fVar15 = 0.0;
  if (param_7 == '\0') {
    fVar15 = (_DAT_fffed924 + fStack_48) * 0.5;
  }
  fVar16 = 89.99725;
  if ((fVar15 <= 89.99725) && (fVar16 = fVar15, fVar15 < -90.0)) {
    fVar16 = -90.0;
  }
  if (fVar16 <= 89.99725) {
    if (-90.0 <= fVar16) {
      *param_20 = (short)(int)(fVar16 * 364.08887);
    }
    else {
      *param_20 = 0x8000;
    }
  }
  else {
    *param_20 = 0x7fff;
  }
  bVar4 = false;
  if ((0x3a00 < param_1) && ((0x3bff < param_1 || (DAT_fffed93d != '\0')))) {
    bVar4 = true;
  }
  if (((((param_4 != '\x02') || (0x16c < (uVar11 & 0xffff))) || (param_5 == '\0')) ||
      ((bVar4 || (0x545 < param_10)))) || (param_10 < 0x348)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x31 < _DAT_fffed932;
  }
  if (((param_4 != '\x02') || (0x16c < (uVar11 & 0xffff))) ||
     ((param_5 == '\0' || (((bVar4 || (0x545 < param_10)) || (param_10 < 0x348)))))) {
    _DAT_fffed932 = 0;
    sVar9 = _DAT_fffed932;
  }
  else {
    sVar9 = -1;
    if (_DAT_fffed932 != 0xffff) {
      sVar9 = _DAT_fffed932 + 1;
    }
  }
  _DAT_fffed932 = sVar9;
  bVar2 = true;
  if (DAT_fffed93e != '\0') {
    bVar5 = false;
    if ((bVar1) && ((0x48 < iVar14 || (iVar14 < -0x48)))) {
      bVar5 = true;
    }
    if ((bVar5) && (param_6 == '\0')) {
      bVar2 = false;
    }
  }
  if (bVar2) {
    if (param_6 == '\0') {
      puVar6 = (undefined *)(int)(short)param_16;
    }
    else {
      puVar6 = (undefined *)0xffff98c6;
    }
  }
  else if (&DAT_00010000 <= puVar6) {
    puVar6 = &DAT_0000ffff;
  }
  if (bVar2) {
    uStack_40 = SUB42(puVar6,0);
  }
  else {
    iVar7 = ((uint)puVar6 & 0xffff) - (uint)_DAT_fffed930;
    sVar9 = 0x7fff;
    if ((iVar7 < 0x8000) && (sVar9 = (short)iVar7, iVar7 < -0x8000)) {
      sVar9 = -0x8000;
    }
    puVar6 = (undefined *)((int)(short)((uint)(sVar9 * 0x3bc3) >> 0x10) + (uint)_DAT_fffed930);
    if ((int)puVar6 < (int)&DAT_00010000) {
      if ((int)puVar6 < 0) {
        puVar6 = (undefined *)0x0;
      }
    }
    else {
      puVar6 = &DAT_0000ffff;
    }
    uStack_40 = SUB42(puVar6,0);
  }
  if (&DAT_0000bfff < (undefined *)((uint)puVar6 & 0xffff)) {
    puVar6 = (undefined *)0xffffc000;
  }
  if ((undefined *)((uint)puVar6 & 0xffff) < &UNK_00007778) {
    *param_18 = 0x7777;
  }
  else {
    *param_18 = (short)puVar6;
  }
  *(bool *)param_24 = bVar1;
  cVar12 = DAT_fffed93c;
  if (param_14 != '\0') {
    if (((bVar1) && (-0xb6 < iVar14)) && (iVar14 < 0xb6)) {
      bVar2 = 0x31 < _DAT_fffed938;
    }
    else {
      bVar2 = false;
    }
    if (((bVar1) && (-0xb6 < iVar14)) && (iVar14 < 0xb6)) {
      uVar10 = 0xffff;
      if (_DAT_fffed938 != 0xffff) {
        uVar10 = _DAT_fffed938 + 1;
      }
    }
    else {
      _DAT_fffed938 = 0;
      uVar10 = _DAT_fffed938;
    }
    _DAT_fffed938 = uVar10;
    DAT_fffed920 = '\x01';
    if (((!bVar2) || (cVar12 = DAT_fffed920, bVar3)) &&
       ((bVar3 || (cVar12 = DAT_fffed920, DAT_fffed93c == '\0')))) {
      DAT_fffed920 = '\0';
      cVar12 = DAT_fffed920;
    }
  }
  DAT_fffed93c = cVar12;
  cVar12 = DAT_fffed921;
  if (param_14 != '\0') {
    cVar12 = DAT_fffed920;
  }
  *param_23 = cVar12;
  if (bVar3) {
    *param_22 = 0;
  }
  else if (cVar12 == '\0') {
    *param_22 = param_17;
  }
  else {
    *param_22 = 1;
  }
  fStack_3c = fVar17;
  if (DAT_fffed93e != '\0') {
    fStack_3c = _DAT_fffed92c + (fVar17 - _DAT_fffed92c) * 0.96874994;
  }
  fVar17 = fVar17 - _DAT_fffed928;
  fVar15 = 89.99725;
  if ((fVar17 <= 89.99725) && (fVar15 = fVar17, fVar17 < -90.0)) {
    fVar15 = -90.0;
  }
  uVar10 = 0x7fff;
  if ((fVar15 <= 89.99725) && (uVar10 = 0x8000, -90.0 <= fVar15)) {
    uVar10 = (ushort)(int)(fVar15 * 364.08887);
  }
  iVar14 = (int)(short)uVar10;
  if (iVar14 < 0) {
    uVar11 = -iVar14;
    if ((int)uVar11 < 0) {
      uVar11 = 0;
    }
  }
  else if (iVar14 < 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)uVar10;
  }
  if (((param_3 == '\0') || (0x2d7 < (uVar11 & 0xffff))) || (param_9 < 0x445)) {
    bVar3 = false;
  }
  else {
    bVar3 = 0xe < _DAT_fffed93a;
  }
  if (((param_3 == '\0') || (0x2d7 < (uVar11 & 0xffff))) || (param_9 < 0x445)) {
    _DAT_fffed93a = 0;
    sVar9 = _DAT_fffed93a;
  }
  else {
    sVar9 = -1;
    if (_DAT_fffed93a != 0xffff) {
      sVar9 = _DAT_fffed93a + 1;
    }
  }
  _DAT_fffed93a = sVar9;
  uStack_34 = param_8 - _DAT_fffed936;
  if (((param_8 < 0) || (-1 < _DAT_fffed936)) || (-1 < (short)uStack_34)) {
    if (((param_8 < 0) && (-1 < _DAT_fffed936)) && (-1 < (short)uStack_34)) {
      uStack_34 = 0x8000;
    }
  }
  else {
    uStack_34 = 0x7fff;
  }
  iVar14 = (int)(short)uStack_34;
  if (iVar14 < 0) {
    if (-iVar14 < 0) {
      uStack_2e = 0;
    }
    else {
      uStack_2e = (ushort)-iVar14;
    }
    uStack_34 = uStack_2e;
  }
  else if (iVar14 < 0) {
    uStack_34 = 0;
  }
  uVar13 = 0;
  if ((bVar3) && (uStack_34 < 0x2d8)) {
    uVar13 = 1;
  }
  *param_21 = uVar13;
  DAT_fffed93e = 1;
  _DAT_fffed934 = sVar8;
  _DAT_fffed924 = fStack_48;
  _DAT_fffed930 = uStack_40;
  DAT_fffed93d = bVar4;
  _DAT_fffed92c = fStack_3c;
  _DAT_fffed928 = fStack_3c;
  _DAT_fffed936 = param_11;
  return;
}

