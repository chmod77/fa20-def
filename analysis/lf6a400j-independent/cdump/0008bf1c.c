
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008bf1c(uint param_1,uint param_2,uint param_3,uint param_4,char param_5,char param_6,
                 char param_7,char param_8,ushort param_9,ushort param_10,ushort param_11,
                 ushort param_12,ushort param_13,ushort param_14,undefined2 *param_15,
                 short *param_16,byte *param_17,short *param_18,ushort *param_19,byte *param_20,
                 byte *param_21,byte *param_22,byte *param_23,byte *param_24)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  short sVar14;
  byte bVar20;
  byte bVar21;
  short sVar15;
  undefined2 uVar16;
  byte bVar22;
  undefined *p1;
  char cVar24;
  int iVar23;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uStack_64;
  ushort uStack_60;
  short sStack_5c;
  char cStack_44;
  short sStack_30;
  short sStack_2c;
  
  uVar5 = LK_133BCC((uint)&T_02CD04,param_1 & 0xffff);
  uVar6 = LK_133BCC((uint)&T_02CD10,param_1 & 0xffff);
  p1 = (undefined *)(param_3 & 0xffff);
  uVar7 = LK_13503C((uint)&T_02CD58,(uint)p1);
  uVar8 = LK_13503C((uint)&T_02CD64,(uint)p1);
  param_4 = param_4 & 0xff;
  if (param_8 == '\0') {
    uVar9 = LK_133F40((uint)&T_02CD28,(uint)p1);
    uStack_64 = (ushort)uVar9;
    uVar9 = LK_1351FC((uint)&T_02CD40,(uint)p1);
    uStack_60 = (ushort)uVar9;
    uVar9 = LK_139C18((uint)&T_02CD70,(uint)p1,param_4);
    sStack_5c = (short)uVar9;
    uVar9 = LK_139C18((uint)&T_02CD98,(uint)p1,param_4);
    sVar15 = (short)uVar9;
  }
  else {
    uVar9 = LK_133F40((uint)&T_02CD34,(uint)p1);
    uStack_64 = (ushort)uVar9;
    uVar9 = LK_1351FC((uint)&T_02CD4C,(uint)p1);
    uStack_60 = (ushort)uVar9;
    uVar9 = LK_139C18((uint)&T_02CD84,(uint)p1,param_4);
    sStack_5c = (short)uVar9;
    uVar9 = LK_139C18((uint)&T_02CDAC,(uint)p1,param_4);
    sVar15 = (short)uVar9;
  }
  uVar11 = 0;
  if (0x28 < param_13) {
    uVar11 = param_13 - 0x29;
  }
  if (param_13 < 0x52) {
    param_13 = 0;
  }
  else {
    param_13 = param_13 - 0x52;
  }
  uVar26 = 0;
  if (0x28 < param_14) {
    uVar26 = param_14 - 0x29;
  }
  uVar25 = 0;
  if (0x51 < param_14) {
    uVar25 = param_14 - 0x52;
  }
  uVar12 = param_11 + 0x29;
  if (uVar12 < param_11) {
    uVar12 = 0xffff;
  }
  uVar27 = param_11 + 0x52;
  if (uVar27 < param_11) {
    uVar27 = 0xffff;
  }
  uVar13 = param_12 + 0x29;
  if (uVar13 < param_12) {
    uVar13 = 0xffff;
  }
  uVar10 = param_12 + 0x52;
  if (uVar10 < param_12) {
    uVar10 = 0xffff;
  }
  cVar24 = '\x01';
  if (uVar13 <= param_10) {
    cVar24 = DAT_fffebc70;
  }
  if (DAT_fffebc71 != '\0') {
    cVar24 = '\0';
  }
  bVar17 = 0;
  if ((cVar24 != '\0') && (uVar10 <= param_10)) {
    bVar17 = 1;
  }
  DAT_fffebc70 = cVar24;
  *param_24 = bVar17;
  cVar24 = '\x01';
  if (uVar12 <= param_9) {
    cVar24 = DAT_fffebc7a;
  }
  if (DAT_fffebc81 != '\0') {
    cVar24 = '\0';
  }
  bVar18 = 0;
  if ((cVar24 != '\0') && (uVar27 <= param_9)) {
    bVar18 = 1;
  }
  DAT_fffebc7a = cVar24;
  *param_23 = bVar18;
  cVar24 = '\x01';
  if (param_10 < uVar26) {
    cVar24 = DAT_fffebc74;
  }
  if (DAT_fffebc80 != '\0') {
    cVar24 = '\0';
  }
  bVar19 = 0;
  if ((cVar24 != '\0') && (param_10 < uVar25)) {
    bVar19 = 1;
  }
  DAT_fffebc74 = cVar24;
  *param_22 = bVar19;
  cVar24 = '\x01';
  if (param_9 < uVar11) {
    cVar24 = DAT_fffebc72;
  }
  if (DAT_fffebc73 != '\0') {
    cVar24 = '\0';
  }
  bVar22 = 0;
  if ((cVar24 != '\0') && (param_9 < param_13)) {
    bVar22 = 1;
  }
  DAT_fffebc72 = cVar24;
  *param_21 = bVar22;
  bVar3 = true;
  if ((bVar22 <= DAT_fffebc7e) && (bVar19 <= DAT_fffebc7d)) {
    bVar3 = false;
  }
  if (_DAT_fffebc6e < 1) {
    iVar23 = (uint)uStack_64 + (int)_DAT_fffebc6e;
    if (0x7fff < iVar23) {
      iVar23 = 0x7fff;
    }
    sStack_30 = (short)iVar23;
    if (-1 < sStack_30) goto LAB_0008c28c;
  }
  else {
    sStack_30 = -0x8000;
    if (-0x8001 < (int)((int)_DAT_fffebc6e - (uint)uStack_64)) {
      sStack_30 = (short)((int)_DAT_fffebc6e - (uint)uStack_64);
    }
    if (sStack_30 < 1) {
LAB_0008c28c:
      sStack_30 = 0;
    }
  }
  bVar2 = true;
  if ((bVar18 <= DAT_fffebc7c) && (bVar17 <= DAT_fffebc79)) {
    bVar2 = false;
  }
  cVar24 = '\x01';
  if (!bVar3) {
    cVar24 = DAT_fffebc75;
  }
  if (bVar2) {
    cVar24 = '\0';
  }
  cStack_44 = '\x01';
  if (!bVar2) {
    cStack_44 = DAT_fffebc77;
  }
  if (bVar3) {
    cStack_44 = '\0';
  }
  DAT_fffebc77 = cStack_44;
  sVar14 = sVar15;
  if (!bVar2) {
    sVar14 = _DAT_fffebc6a;
  }
  if (bVar3) {
    sVar14 = sStack_5c;
  }
  DAT_fffebc75 = cVar24;
  *param_18 = sVar14;
  uVar11 = _DAT_fffebc6c;
  if (bVar2) {
    uVar11 = uStack_60;
  }
  if (bVar3) {
    uVar11 = uStack_64;
  }
  *param_19 = uVar11;
  bVar20 = DAT_fffebc7b;
  if (bVar2) {
    bVar20 = (byte)uVar8;
  }
  if (bVar3) {
    bVar20 = (byte)uVar7;
  }
  *param_20 = bVar20;
  if (_DAT_fffebc68 < 1) {
    iVar23 = (uint)uStack_60 + (int)_DAT_fffebc68;
    if (0x7fff < iVar23) {
      iVar23 = 0x7fff;
    }
    sStack_2c = (short)iVar23;
    if (sStack_2c < 0) goto LAB_0008c38a;
  }
  else {
    sStack_2c = -0x8000;
    if (-0x8001 < (int)((int)_DAT_fffebc68 - (uint)uStack_60)) {
      sStack_2c = (short)((int)_DAT_fffebc68 - (uint)uStack_60);
    }
    if (0 < sStack_2c) goto LAB_0008c38a;
  }
  sStack_2c = 0;
LAB_0008c38a:
  bVar21 = DAT_fffebc76;
  if (bVar2) {
    bVar21 = (byte)uVar6;
  }
  if (bVar3) {
    bVar21 = (byte)uVar5;
  }
  *param_17 = bVar21;
  bVar1 = false;
  if (cVar24 == '\0' || DAT_fffebc7f < (byte)uVar5) {
    DAT_fffebc82 = '\0';
    cVar4 = DAT_fffebc82;
  }
  else {
    bVar1 = DAT_fffebc82 < (byte)uVar7;
    cVar4 = -1;
    if (DAT_fffebc82 != 0xff) {
      cVar4 = DAT_fffebc82 + 1;
    }
  }
  DAT_fffebc82 = cVar4;
  if (bVar2) {
    sStack_30 = 0;
  }
  else if (bVar1) {
    sStack_30 = sStack_5c;
  }
  if (cVar24 == '\0') {
    DAT_fffebc7f = '\0';
    cVar24 = DAT_fffebc7f;
  }
  else {
    cVar24 = -1;
    if (DAT_fffebc7f != 0xff) {
      cVar24 = DAT_fffebc7f + 1;
    }
  }
  DAT_fffebc7f = cVar24;
  bVar2 = false;
  if (cStack_44 == '\0' || DAT_fffebc78 < (byte)uVar6) {
    DAT_fffebc83 = '\0';
    cVar24 = DAT_fffebc83;
  }
  else {
    bVar2 = DAT_fffebc83 < (byte)uVar8;
    cVar24 = -1;
    if (DAT_fffebc83 != 0xff) {
      cVar24 = DAT_fffebc83 + 1;
    }
  }
  DAT_fffebc83 = cVar24;
  if (bVar3) {
    sStack_2c = 0;
  }
  else if (bVar2) {
    sStack_2c = sVar15;
  }
  if ((&UNK_000047ff < p1) || (((param_5 != '\0' && (param_6 != '\x17')) || (param_7 == '\0')))) {
    sVar15 = 0;
  }
  else {
    sVar15 = sStack_30 + sStack_2c;
    if (((sStack_30 < 0) || (sStack_2c < 0)) || (-1 < sVar15)) {
      if (((sStack_30 < 0) && (sStack_2c < 0)) && (-1 < sVar15)) {
        sVar15 = -0x8000;
      }
    }
    else {
      sVar15 = 0x7fff;
    }
  }
  *param_16 = sVar15;
  uVar5 = LK_133F40((uint)&T_02CD1C,param_2 & 0xffff);
  uVar5 = (uVar5 & 0xffff) * (int)sVar15;
  uVar16 = 0x7fff;
  if ((int)uVar5 < 0x3fff8001) {
    if ((int)uVar5 < -0x3fff8001) {
      uVar16 = 0x8000;
    }
    else {
      uVar16 = (undefined2)((uVar5 & 0x7fffffff) >> 0xf);
    }
  }
  *param_15 = uVar16;
  if (cStack_44 == '\0') {
    DAT_fffebc78 = '\0';
    cVar24 = DAT_fffebc78;
  }
  else {
    cVar24 = -1;
    if (DAT_fffebc78 != 0xff) {
      cVar24 = DAT_fffebc78 + 1;
    }
  }
  DAT_fffebc78 = cVar24;
  DAT_fffebc71 = bVar17;
  DAT_fffebc81 = bVar18;
  DAT_fffebc80 = bVar19;
  DAT_fffebc73 = bVar22;
  DAT_fffebc7e = bVar22;
  DAT_fffebc7d = bVar19;
  _DAT_fffebc6a = sVar14;
  _DAT_fffebc6c = uVar11;
  DAT_fffebc7b = bVar20;
  _DAT_fffebc6e = sStack_30;
  DAT_fffebc7c = bVar18;
  DAT_fffebc79 = bVar17;
  _DAT_fffebc68 = sStack_2c;
  DAT_fffebc76 = bVar21;
  return;
}

