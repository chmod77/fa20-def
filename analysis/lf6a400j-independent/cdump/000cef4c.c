
/* WARNING: Removing unreachable block (ram,0x000cf176) */
/* WARNING: Removing unreachable block (ram,0x000cf10c) */
/* WARNING: Removing unreachable block (ram,0x000cf13e) */
/* WARNING: Removing unreachable block (ram,0x000cf1ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cef4c(ushort param_1,ushort param_2,uint param_3,char param_4,short param_5,
                 ushort param_6,uint param_7,uint param_8,char param_9,undefined1 *param_10,
                 byte *param_11,undefined1 *param_12,byte *param_13,byte *param_14,short *param_15,
                 ushort *param_16)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  byte bVar12;
  char cVar13;
  char cVar14;
  uint p1;
  short sVar15;
  undefined1 uVar16;
  ushort uVar17;
  byte bVar18;
  byte bStack_3c;
  char cStack_34;
  
  uVar17 = (param_1 & 0xff) - (param_2 & 0xff);
  p1 = (uint)param_6;
  uVar3 = LK_13503C((uint)&T_02EC50,p1);
  *param_14 = (byte)uVar3;
  if (param_4 == '\0') {
    uVar4 = LK_13503C((uint)&T_02EC5C,p1);
    bStack_3c = (byte)uVar4;
  }
  else {
    uVar4 = LK_1350D8((uint)&T_02EBE4,(int)param_5);
    bStack_3c = (byte)uVar4;
  }
  *param_13 = bStack_3c;
  if (param_9 == '\0') {
    uVar4 = LK_135634((uint)&T_02EC08,p1);
    sVar9 = (short)uVar4;
    uVar4 = LK_1351FC((uint)&T_02EBF0,p1);
  }
  else {
    uVar4 = LK_135634((uint)&T_02EC14,p1);
    sVar9 = (short)uVar4;
    uVar4 = LK_1351FC((uint)&T_02EBFC,p1);
  }
  if (param_9 == '\0') {
    uVar5 = LK_135634((uint)&T_02EC38,p1);
    sVar10 = (short)uVar5;
    uVar5 = LK_1351FC((uint)&T_02EC20,p1);
  }
  else {
    uVar5 = LK_135634((uint)&T_02EC44,p1);
    sVar10 = (short)uVar5;
    uVar5 = LK_1351FC((uint)&T_02EC2C,p1);
  }
  if (DAT_fffecd42 == '\0') {
    DAT_fffecd41 = '\0';
    DAT_fffecd42 = '\x01';
  }
  if (DAT_fffecd41 == '\0') {
    _DAT_ffff19d0 = param_6;
  }
  else {
    FUN_0016b4d8(&DAT_ffff19d0,p1,0x199a);
  }
  DAT_fffecd41 = 1;
  *param_16 = _DAT_ffff19d0;
  iVar8 = (param_7 & 0xffff) - (uint)_DAT_ffff19d0;
  sVar15 = 0x7fff;
  if ((iVar8 < 0x8000) && (sVar15 = (short)iVar8, iVar8 < -0x8000)) {
    sVar15 = -0x8000;
  }
  *param_15 = sVar15;
  if (DAT_fffecd3d != '\0') {
    iVar8 = (int)sVar9 - (uVar4 & 0xffff);
    if (iVar8 < -0x8000) {
      iVar8 = -0x8000;
    }
    sVar9 = (short)iVar8;
  }
  if (DAT_fffecd40 != '\0') {
    iVar8 = (int)sVar10 + (uVar5 & 0xffff);
    if (0x7fff < iVar8) {
      iVar8 = 0x7fff;
    }
    sVar10 = (short)iVar8;
  }
  if (-1 < (short)uVar17) {
    uVar11 = 0;
  }
  else {
    uVar11 = uVar17;
    if ((short)uVar17 < 0) {
      uVar11 = -uVar17;
    }
    if ((short)uVar11 < 0) {
      uVar11 = 0;
    }
  }
  DAT_fffecd35 = 0x7ffe < param_5;
  DAT_fffecd36 = sVar15 < -0x1ff;
  DAT_fffecd3b = param_5 < -0x7fff;
  DAT_fffecd3d = sVar9 <= sVar15;
  DAT_fffecd3f = 0x7ffe < param_5;
  DAT_fffecd40 = sVar15 <= sVar10;
  *param_12 = (char)uVar11;
  bVar18 = 1;
  if (((((uVar11 & 0xff) == 0) || ((uVar11 & 0xff) < (ushort)(byte)uVar3)) && (sVar15 > sVar10)) &&
     (0x7ffe >= param_5)) {
    bVar18 = 0;
  }
  if (-1 < (short)uVar17) {
    if ((short)uVar17 < 0) {
      uVar17 = 0;
    }
    bVar12 = (byte)uVar17;
  }
  else {
    bVar12 = 0;
  }
  *param_11 = bVar12;
  bVar2 = true;
  if (((bVar12 == 0) || (bVar12 < bStack_3c)) && ((sVar9 > sVar15 && (param_5 >= -0x7fff)))) {
    bVar2 = false;
  }
  if (DAT_fffecd34 == '\0') {
    cStack_34 = '\0';
  }
  else {
    cStack_34 = '\0';
    if (DAT_fffecd34 != '\0') {
      cStack_34 = DAT_fffecd34 + -1;
    }
  }
  if (bVar2) {
    cStack_34 = '\x01';
  }
  else if (bVar18 != 0) {
    cStack_34 = '\0';
  }
  if (DAT_fffecd3a == '\0') {
    cVar13 = '\0';
  }
  else {
    cVar13 = '\0';
    if (DAT_fffecd3a != '\0') {
      cVar13 = DAT_fffecd3a + -1;
    }
  }
  bVar1 = bVar18 <= DAT_fffecd39;
  uVar6 = DAT_fffecd38;
  if (!bVar1) {
    if (param_9 == '\0') {
      uVar3 = LK_138984((uint)&T_02ECB8,param_8 & 0xffff,p1);
      uVar6 = (char)uVar3;
    }
    else {
      uVar3 = LK_138984((uint)&T_02ECCC,param_8 & 0xffff,p1);
      uVar6 = (char)uVar3;
    }
  }
  if (((!bVar1) && (DAT_fffecd3a == '\0')) && (DAT_fffecd37 == '\0')) {
    if (param_9 == '\0') {
      uVar3 = LK_138984((uint)&T_02EC68,param_8 & 0xffff,p1);
      cVar13 = (char)uVar3;
    }
    else {
      uVar3 = LK_138984((uint)&T_02EC7C,param_8 & 0xffff,p1);
      cVar13 = (char)uVar3;
    }
  }
  if (bVar2) {
    cVar13 = '\0';
  }
  cVar14 = '\x01';
  if (bVar1) {
    cVar14 = DAT_fffecd3c;
  }
  if (((sVar15 >= -0x1ff) && (0x7ffe >= param_5)) && (cVar13 == '\0')) {
    cVar14 = '\0';
  }
  uVar16 = 0;
  bVar2 = false;
  if ((cVar13 == '\0') && (cVar14 != '\0')) {
    uVar16 = 1;
    bVar2 = true;
  }
  uVar7 = DAT_fffecd3e;
  DAT_fffecd3c = cVar14;
  if (!bVar1) {
    if (param_9 == '\0') {
      uVar3 = LK_138984((uint)&T_02EC90,param_8 & 0xffff,p1);
      uVar7 = (char)uVar3;
    }
    else {
      uVar3 = LK_138984((uint)&T_02ECA4,param_8 & 0xffff,p1);
      uVar7 = (char)uVar3;
    }
  }
  if (cStack_34 == '\0') {
    if (cVar13 == '\0') {
      if (bVar2) {
        *param_10 = uVar6;
      }
      else {
        *param_10 = 0x80;
      }
    }
    else {
      *param_10 = uVar7;
    }
  }
  else if (param_9 == '\0') {
    uVar3 = LK_134FA8((uint)&T_02EBD8,param_3 & 0xff);
    *param_10 = (char)uVar3;
  }
  else {
    *param_10 = 0xb3;
  }
  DAT_fffecd34 = cStack_34;
  DAT_fffecd3a = cVar13;
  DAT_fffecd39 = bVar18;
  DAT_fffecd38 = uVar6;
  DAT_fffecd37 = uVar16;
  DAT_fffecd3e = uVar7;
  return;
}

