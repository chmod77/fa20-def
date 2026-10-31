
/* WARNING: Removing unreachable block (ram,0x000fd190) */
/* WARNING: Removing unreachable block (ram,0x000fd422) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fcfbc(ushort param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
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
  undefined *puVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  undefined1 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  byte local_64;
  byte bStack_63;
  float fStack_44;
  undefined2 uStack_3c;
  float fStack_38;
  
  uVar10 = (uint)param_12;
  bVar3 = true;
  fVar17 = (float)(int)param_9 * 0.0027465818;
  if ((param_2 == '\0') && (param_6 == '\0')) {
    bVar3 = false;
  }
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
  }
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  if (param_14 == '\0') {
    if ((*param_15 < 0x7e) || (0x80 < *param_15)) {
      local_64 = 0;
    }
    else if (DAT_fffed91b == 0xff) {
      local_64 = 0xff;
    }
    else {
      local_64 = DAT_fffed91b + 1;
    }
    if ((param_15[1] < 0x7e) || (0x80 < param_15[1])) {
      bStack_63 = 0;
    }
    else if (DAT_fffed91c == 0xff) {
      bStack_63 = 0xff;
    }
    else {
      bStack_63 = DAT_fffed91c + 1;
    }
    DAT_fffed8fe = local_64;
    DAT_fffed8ff = bStack_63;
    DAT_fffed8fd = '\x01';
    if (local_64 < 0x32) {
      DAT_fffed8fd = DAT_fffed918;
    }
    if (bVar3) {
      DAT_fffed8fd = '\0';
    }
    DAT_fffed91b = local_64;
    DAT_fffed91c = bStack_63;
    DAT_fffed918 = DAT_fffed8fd;
  }
  *param_25 = DAT_fffed8fe;
  param_25[1] = DAT_fffed8ff;
  puVar7 = (undefined *)__udiv32_r1_by_r0((param_13 & 0xffff) << 0xd,0xe1);
  iVar14 = (int)puVar7 - (uint)param_16;
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
    sVar9 = sVar8 - _DAT_fffed914;
    if (((sVar8 < 0) || (-1 < _DAT_fffed914)) || (-1 < sVar9)) {
      if (((sVar8 < 0) && (-1 < _DAT_fffed914)) && (-1 < sVar9)) {
        sVar9 = -0x8000;
      }
    }
    else {
      sVar9 = 0x7fff;
    }
    fStack_44 = ((float)(int)sVar9 * (float)param_1 * 0.00053644174) / 60.0;
  }
  else {
    fStack_44 = 0.0;
  }
  fVar15 = 0.0;
  if (param_7 == '\0') {
    fVar15 = (_DAT_fffed908 + fStack_44) * 0.5;
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
  if ((0x3a00 < param_1) && ((0x3bff < param_1 || (DAT_fffed91a != '\0')))) {
    bVar4 = true;
  }
  if (((((param_4 != '\x02') || (0x16c < (uVar10 & 0xffff))) || (param_5 == '\0')) ||
      ((bVar4 || (0x545 < param_10)))) || (param_10 < 0x348)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x31 < _DAT_fffed916;
  }
  if (((param_4 != '\x02') || (0x16c < (uVar10 & 0xffff))) ||
     ((param_5 == '\0' || (((bVar4 || (0x545 < param_10)) || (param_10 < 0x348)))))) {
    _DAT_fffed916 = 0;
    sVar9 = _DAT_fffed916;
  }
  else {
    sVar9 = -1;
    if (_DAT_fffed916 != 0xffff) {
      sVar9 = _DAT_fffed916 + 1;
    }
  }
  _DAT_fffed916 = sVar9;
  bVar2 = true;
  if (DAT_fffed91d != '\0') {
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
      puVar7 = (undefined *)(int)(short)param_16;
    }
    else {
      puVar7 = (undefined *)0xffff98c6;
    }
  }
  else if (&DAT_00010000 <= puVar7) {
    puVar7 = &DAT_0000ffff;
  }
  if (bVar2) {
    uStack_3c = SUB42(puVar7,0);
  }
  else {
    iVar11 = ((uint)puVar7 & 0xffff) - (uint)_DAT_fffed90e;
    sVar9 = 0x7fff;
    if ((iVar11 < 0x8000) && (sVar9 = (short)iVar11, iVar11 < -0x8000)) {
      sVar9 = -0x8000;
    }
    puVar7 = (undefined *)((int)(short)((uint)(sVar9 * 0x3bc3) >> 0x10) + (uint)_DAT_fffed90e);
    if ((int)puVar7 < (int)&DAT_00010000) {
      if ((int)puVar7 < 0) {
        puVar7 = (undefined *)0x0;
      }
    }
    else {
      puVar7 = &DAT_0000ffff;
    }
    uStack_3c = SUB42(puVar7,0);
  }
  if (&DAT_0000bfff < (undefined *)((uint)puVar7 & 0xffff)) {
    puVar7 = (undefined *)0xffffc000;
  }
  if ((undefined *)((uint)puVar7 & 0xffff) < &UNK_00007778) {
    *param_18 = 0x7777;
  }
  else {
    *param_18 = (short)puVar7;
  }
  *(bool *)param_24 = bVar1;
  cVar12 = DAT_fffed919;
  if (param_14 != '\0') {
    if (((bVar1) && (-0xb6 < iVar14)) && (iVar14 < 0xb6)) {
      bVar2 = 0x31 < _DAT_fffed910;
    }
    else {
      bVar2 = false;
    }
    if (((bVar1) && (-0xb6 < iVar14)) && (iVar14 < 0xb6)) {
      uVar6 = 0xffff;
      if (_DAT_fffed910 != 0xffff) {
        uVar6 = _DAT_fffed910 + 1;
      }
    }
    else {
      _DAT_fffed910 = 0;
      uVar6 = _DAT_fffed910;
    }
    _DAT_fffed910 = uVar6;
    DAT_fffed8fc = '\x01';
    if (((!bVar2) || (cVar12 = DAT_fffed8fc, bVar3)) &&
       ((bVar3 || (cVar12 = DAT_fffed8fc, DAT_fffed919 == '\0')))) {
      DAT_fffed8fc = '\0';
      cVar12 = DAT_fffed8fc;
    }
  }
  DAT_fffed919 = cVar12;
  cVar12 = DAT_fffed8fd;
  if (param_14 != '\0') {
    cVar12 = DAT_fffed8fc;
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
  fStack_38 = fVar17;
  if (DAT_fffed91d != '\0') {
    fStack_38 = _DAT_fffed904 + (fVar17 - _DAT_fffed904) * 0.96874994;
  }
  fVar17 = fVar17 - _DAT_fffed900;
  fVar15 = 89.99725;
  if ((fVar17 <= 89.99725) && (fVar15 = fVar17, fVar17 < -90.0)) {
    fVar15 = -90.0;
  }
  sVar9 = 0x7fff;
  if ((fVar15 <= 89.99725) && (sVar9 = -0x8000, -90.0 <= fVar15)) {
    sVar9 = (short)(int)(fVar15 * 364.08887);
  }
  uVar10 = (uint)sVar9;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
  }
  else if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  if (((param_3 == '\0') || (0x2d7 < (uVar10 & 0xffff))) || (param_9 < 0x445)) {
    bVar3 = false;
  }
  else {
    bVar3 = 0xe < _DAT_fffed90c;
  }
  if (((param_3 == '\0') || (0x2d7 < (uVar10 & 0xffff))) || (param_9 < 0x445)) {
    _DAT_fffed90c = 0;
    sVar9 = _DAT_fffed90c;
  }
  else {
    sVar9 = -1;
    if (_DAT_fffed90c != 0xffff) {
      sVar9 = _DAT_fffed90c + 1;
    }
  }
  _DAT_fffed90c = sVar9;
  sVar9 = param_8 - _DAT_fffed912;
  if (((param_8 < 0) || (-1 < _DAT_fffed912)) || (-1 < sVar9)) {
    if (((param_8 < 0) && (-1 < _DAT_fffed912)) && (-1 < sVar9)) {
      sVar9 = -0x8000;
    }
  }
  else {
    sVar9 = 0x7fff;
  }
  uVar10 = (uint)sVar9;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
  }
  else if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  uVar13 = 0;
  if ((bVar3) && ((uVar10 & 0xffff) < 0x2d8)) {
    uVar13 = 1;
  }
  *param_21 = uVar13;
  DAT_fffed91d = 1;
  _DAT_fffed914 = sVar8;
  _DAT_fffed908 = fStack_44;
  _DAT_fffed90e = uStack_3c;
  DAT_fffed91a = bVar4;
  _DAT_fffed904 = fStack_38;
  _DAT_fffed900 = fStack_38;
  _DAT_fffed912 = param_11;
  return;
}

