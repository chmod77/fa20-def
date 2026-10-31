
void FUN_0008ccf8(char param_1,char param_2,char param_3,byte param_4,char param_5,uint param_6,
                 short param_7,ushort param_8,ushort param_9,ushort param_10,ushort param_11,
                 uint param_12,ushort *param_13,ushort *param_14,ushort *param_15,ushort *param_16)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  short sVar17;
  short sVar18;
  undefined *puVar19;
  int iVar20;
  undefined *puVar21;
  ushort uVar22;
  int iVar23;
  undefined *puVar24;
  
  uVar15 = (uint)param_5;
  if ((int)uVar15 < 0) {
    uVar15 = (uint)(short)-(short)param_5;
  }
  if ((int)uVar15 < 0) {
    uVar15 = 0;
  }
  uVar8 = LK_135634((uint)&T_02CE30,param_6 & 0xffff);
  uVar9 = LK_135634((uint)&T_02CE3C,param_6 & 0xffff);
  iVar16 = (int)param_7;
  iVar20 = (int)(short)uVar9;
  if (iVar16 < 0) {
    uVar9 = -iVar16;
    if ((int)uVar9 < 0) goto LAB_0008cd9e;
  }
  else if (iVar16 < 0) {
LAB_0008cd9e:
    uVar9 = 0;
  }
  else {
    uVar9 = (uint)param_7;
  }
  bVar1 = (param_12 & 0xff) <= (uVar15 & 0xff);
  puVar24 = &UNK_00007c28;
  puVar19 = (undefined *)0xfffffeb8;
  iVar16 = -iVar20;
  sVar17 = 0x7fff;
  if ((iVar16 < 0x8000) && (sVar17 = -0x8000, -0x8001 < iVar16)) {
    sVar17 = (short)iVar16;
  }
  iVar23 = (int)(short)uVar8;
  iVar16 = -iVar23;
  if (iVar16 < 0x8000) {
    sVar18 = (short)iVar16;
    if (iVar16 < -0x8000) {
      sVar18 = -0x8000;
    }
  }
  else {
    sVar18 = 0x7fff;
  }
  bVar2 = param_4 <= DAT_fffebca0;
  bVar3 = true;
  if (((bVar2) || (bVar1)) &&
     ((bVar2 || (((int)(uVar9 & 0xffff) < iVar20 || (iVar23 <= (int)(uVar9 & 0xffff))))))) {
    bVar3 = false;
  }
  bVar4 = false;
  if (((!bVar2) && (bVar1)) && (iVar23 <= param_7)) {
    bVar4 = true;
  }
  bVar5 = false;
  if (((!bVar2) && (bVar1)) && (param_7 <= sVar18)) {
    bVar5 = true;
  }
  bVar6 = false;
  if (((!bVar2) && (bVar1)) && ((0 < param_7 && (param_7 < iVar20)))) {
    bVar6 = true;
  }
  bVar7 = false;
  if ((((!bVar2) && (bVar1)) && (sVar17 < param_7)) && (param_7 < 0)) {
    bVar7 = true;
  }
  if (((!bVar3) && (!bVar4)) && (!bVar5)) {
    if (bVar6) {
      puVar24 = (undefined *)0xffff8000;
    }
    else if (bVar7) {
      puVar24 = &UNK_00007c28;
    }
  }
  if (((bVar3) || (bVar4)) || (bVar5)) {
LAB_0008cec4:
    uVar22 = 0x83d8;
  }
  else if (bVar6) {
    uVar22 = 0x83d8;
  }
  else {
    uVar22 = 0x8000;
    if (!bVar7) goto LAB_0008cec4;
  }
  if (!bVar3) {
    if (bVar4) {
      puVar19 = &UNK_00000148;
      goto LAB_0008cf0a;
    }
    if ((bVar5) || (bVar6)) goto LAB_0008cf0a;
    if (bVar7) {
      puVar19 = &UNK_00000148;
      goto LAB_0008cf0a;
    }
  }
  puVar19 = (undefined *)0x0;
LAB_0008cf0a:
  uVar10 = (ushort)puVar24;
  uVar11 = param_8;
  if ((param_2 != '\0') && (param_3 != '\0')) {
    iVar16 = 0;
    if ((int)puVar19 < 0) {
      iVar16 = -1;
    }
    puVar21 = puVar19 + param_8;
    if (puVar21 < puVar19) {
      iVar16 = iVar16 + 1;
    }
    if ((iVar16 < 1) && ((iVar16 != 0 || (puVar21 <= &DAT_0000ffff)))) {
      if (iVar16 < 0) {
        puVar21 = (undefined *)0x0;
      }
    }
    else {
      puVar21 = &DAT_0000ffff;
    }
    uVar11 = (ushort)puVar21;
    if (((uint)puVar21 & 0xffff) < ((uint)puVar24 & 0xffff)) {
      uVar11 = uVar10;
    }
    if (uVar22 < uVar11) {
      uVar11 = uVar22;
    }
  }
  uVar12 = param_9;
  if ((param_2 != '\0') && (param_3 == '\0')) {
    iVar16 = 0;
    if ((int)puVar19 < 0) {
      iVar16 = -1;
    }
    puVar21 = puVar19 + param_9;
    if (puVar21 < puVar19) {
      iVar16 = iVar16 + 1;
    }
    if ((iVar16 < 1) && ((iVar16 != 0 || (puVar21 <= &DAT_0000ffff)))) {
      if (iVar16 < 0) {
        puVar21 = (undefined *)0x0;
      }
    }
    else {
      puVar21 = &DAT_0000ffff;
    }
    uVar12 = (ushort)puVar21;
    if (((uint)puVar21 & 0xffff) < ((uint)puVar24 & 0xffff)) {
      uVar12 = uVar10;
    }
    if (uVar22 < uVar12) {
      uVar12 = uVar22;
    }
  }
  uVar13 = param_10;
  if ((param_2 == '\0') && (param_3 != '\0')) {
    iVar16 = 0;
    if ((int)puVar19 < 0) {
      iVar16 = -1;
    }
    puVar21 = puVar19 + param_10;
    if (puVar21 < puVar19) {
      iVar16 = iVar16 + 1;
    }
    if ((iVar16 < 1) && ((iVar16 != 0 || (puVar21 <= &DAT_0000ffff)))) {
      if (iVar16 < 0) {
        puVar21 = (undefined *)0x0;
      }
    }
    else {
      puVar21 = &DAT_0000ffff;
    }
    uVar13 = (ushort)puVar21;
    if (((uint)puVar21 & 0xffff) < ((uint)puVar24 & 0xffff)) {
      uVar13 = uVar10;
    }
    if (uVar22 < uVar13) {
      uVar13 = uVar22;
    }
  }
  uVar14 = param_11;
  if ((param_2 == '\0') && (param_3 == '\0')) {
    iVar16 = 0;
    if ((int)puVar19 < 0) {
      iVar16 = -1;
    }
    puVar21 = puVar19 + param_11;
    if (puVar21 < puVar19) {
      iVar16 = iVar16 + 1;
    }
    if ((iVar16 < 1) && ((iVar16 != 0 || (puVar21 <= &DAT_0000ffff)))) {
      if (iVar16 < 0) {
        puVar21 = (undefined *)0x0;
      }
    }
    else {
      puVar21 = &DAT_0000ffff;
    }
    uVar14 = (ushort)puVar21;
    if (((uint)puVar21 & 0xffff) < ((uint)puVar24 & 0xffff)) {
      uVar14 = uVar10;
    }
    if (uVar22 < uVar14) {
      uVar14 = uVar22;
    }
  }
  if (param_1 == '\0') {
    *param_13 = param_8;
    *param_14 = param_9;
    *param_15 = param_10;
    *param_16 = param_11;
  }
  else {
    *param_13 = uVar11;
    *param_14 = uVar12;
    *param_15 = uVar13;
    *param_16 = uVar14;
  }
  DAT_fffebca0 = param_4;
  return;
}

