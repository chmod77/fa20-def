
void FUN_00098460(char param_1,char param_2,char param_3,byte param_4,short param_5,uint param_6,
                 short param_7,char param_8,char param_9,char param_10,char param_11,char *param_12,
                 char *param_13,char *param_14,char *param_15)

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
  bool bVar10;
  char cVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  char cStack_6c;
  char cStack_6b;
  char cStack_67;
  char cStack_66;
  char cStack_63;
  char cStack_62;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  bool bStack_57;
  bool bStack_56;
  bool bStack_53;
  bool bStack_52;
  bool bStack_4f;
  bool bStack_4e;
  bool bStack_4b;
  bool bStack_4a;
  bool bStack_49;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  bool bStack_40;
  bool bStack_3f;
  bool bStack_3e;
  bool bStack_3d;
  
  if (param_5 < 0) {
    uVar15 = -(int)param_5;
    if ((int)uVar15 < 0) goto LAB_0009850c;
  }
  else if (param_5 < 0) {
LAB_0009850c:
    uVar15 = 0;
  }
  else {
    uVar15 = (uint)param_5;
  }
  uVar8 = LK_135634((uint)&T_02D54C,param_6 & 0xffff);
  uVar9 = LK_135634((uint)&T_02D558,param_6 & 0xffff);
  iVar16 = (int)(short)uVar9;
  iVar13 = -iVar16;
  iVar14 = 0x7fff;
  if ((iVar13 < 0x8000) && (iVar14 = -0x8000, -0x8001 < iVar13)) {
    iVar14 = iVar13;
  }
  bVar1 = param_7 == -0x8000;
  iVar17 = (int)(short)uVar8;
  iVar13 = -iVar17;
  sVar12 = 0x7fff;
  if ((iVar13 < 0x8000) && (sVar12 = (short)iVar13, iVar13 < -0x8000)) {
    sVar12 = -0x8000;
  }
  bVar10 = true;
  cVar11 = -1;
  bVar18 = true;
  cStack_5d = -1;
  bVar2 = DAT_fffebf80 < param_4;
  bVar7 = false;
  if (((bVar2) && (iVar16 <= (int)(uVar15 & 0xffff))) && ((int)(uVar15 & 0xffff) < iVar17)) {
    bVar7 = true;
  }
  bVar6 = false;
  if (((bVar2) && (iVar17 <= param_5)) && (bVar1)) {
    bVar6 = true;
  }
  bVar5 = false;
  if (((bVar2) && (param_5 <= sVar12)) && (bVar1)) {
    bVar5 = true;
  }
  bVar4 = false;
  if ((((bVar2) && (bVar1)) && (0 < param_5)) && (param_5 < iVar16)) {
    bVar4 = true;
  }
  bVar3 = false;
  if (((bVar2) && (bVar1)) && (((short)iVar14 < param_5 && (param_5 < 0)))) {
    bVar3 = true;
  }
  cStack_6b = -1;
  cStack_6c = cStack_5d;
  if (bVar4) {
    cStack_6c = '\0';
    cStack_6b = '\0';
  }
  cStack_67 = cVar11;
  cStack_66 = cStack_5d;
  if (!bVar5) {
    cStack_67 = cStack_6b;
    cStack_66 = cStack_6c;
  }
  cStack_63 = cVar11;
  cStack_62 = cStack_5d;
  if (!bVar6) {
    cStack_63 = cStack_67;
    cStack_62 = cStack_66;
  }
  cStack_5f = cVar11;
  cStack_5e = cStack_5d;
  if (bVar7) {
LAB_00098718:
    cStack_5d = cVar11;
  }
  else {
    cStack_5f = cStack_63;
    cStack_5e = cStack_62;
    if ((bVar6) || (bVar5)) goto LAB_00098718;
    if (bVar4) {
      cStack_5d = '\0';
    }
    else if (!bVar3) goto LAB_00098718;
  }
  bStack_56 = bVar4 || !bVar3;
  bStack_57 = bVar4 || !bVar3;
  bStack_53 = bVar10;
  bStack_52 = bVar18;
  if (!bVar5) {
    bStack_53 = bStack_57;
    bStack_52 = bStack_56;
  }
  bStack_4f = bVar10;
  bStack_4e = bVar18;
  if (!bVar6) {
    bStack_4f = bStack_53;
    bStack_4e = bStack_52;
  }
  bStack_4b = bVar10;
  bStack_4a = bVar18;
  bStack_49 = bVar10;
  if (!bVar7) {
    bStack_4b = bStack_4f;
    bStack_4a = bStack_4e;
    if ((((!bVar6) && (!bVar5)) && (bStack_49 = bVar18, !bVar4)) && (bStack_49 = bVar10, bVar3)) {
      bStack_49 = false;
    }
  }
  if (bVar7) {
LAB_00098828:
    iVar14 = 0;
  }
  else {
    if (!bVar6) {
      if ((bVar5) || (bVar4)) {
        iVar14 = -1;
        goto LAB_0009882a;
      }
      if (!bVar3) goto LAB_00098828;
    }
    iVar14 = 1;
  }
LAB_0009882a:
  if ((param_2 == '\0') || (param_3 == '\0')) {
    bStack_40 = (bool)param_8;
  }
  else {
    iVar13 = iVar14 + param_8;
    if (iVar13 < 0x80) {
      if (iVar13 < -0x80) {
        iVar13 = -0x80;
      }
    }
    else {
      iVar13 = 0x7f;
    }
    cStack_44 = (char)iVar13;
    if (cStack_44 < cStack_5e) {
      cStack_44 = cStack_5e;
    }
    if (bStack_4a < cStack_44) {
      bStack_40 = bStack_4a;
    }
    else {
      bStack_40 = (bool)cStack_44;
    }
  }
  if ((param_2 == '\0') || (param_3 != '\0')) {
    bStack_3f = (bool)param_9;
  }
  else {
    iVar13 = iVar14 + param_9;
    if (iVar13 < 0x80) {
      if (iVar13 < -0x80) {
        iVar13 = -0x80;
      }
    }
    else {
      iVar13 = 0x7f;
    }
    cStack_43 = (char)iVar13;
    if (cStack_43 < cStack_5f) {
      cStack_43 = cStack_5f;
    }
    if (bStack_4b < cStack_43) {
      bStack_3f = bStack_4b;
    }
    else {
      bStack_3f = (bool)cStack_43;
    }
  }
  if ((param_2 == '\0') && (param_3 != '\0')) {
    iVar13 = iVar14 + param_10;
    if (iVar13 < 0x80) {
      if (iVar13 < -0x80) {
        iVar13 = -0x80;
      }
    }
    else {
      iVar13 = 0x7f;
    }
    cStack_42 = (char)iVar13;
    if (cStack_42 < cStack_5e) {
      cStack_42 = cStack_5e;
    }
    if (bStack_4a < cStack_42) {
      bStack_3e = bStack_4a;
    }
    else {
      bStack_3e = (bool)cStack_42;
    }
  }
  else {
    bStack_3e = (bool)param_10;
  }
  if ((param_2 == '\0') && (param_3 == '\0')) {
    iVar14 = iVar14 + param_11;
    iVar13 = 0x7f;
    if ((iVar14 < 0x80) && (iVar13 = iVar14, iVar14 < -0x80)) {
      iVar13 = -0x80;
    }
    cStack_41 = (char)iVar13;
    if (cStack_41 < cStack_5d) {
      cStack_41 = cStack_5d;
    }
    if (bStack_49 < cStack_41) {
      bStack_3d = bStack_49;
    }
    else {
      bStack_3d = (bool)cStack_41;
    }
  }
  else {
    bStack_3d = (bool)param_11;
  }
  if (param_1 == '\0') {
    *param_12 = param_8;
    *param_13 = param_9;
    *param_14 = param_10;
    *param_15 = param_11;
  }
  else {
    *param_12 = bStack_40;
    *param_13 = bStack_3f;
    *param_14 = bStack_3e;
    *param_15 = bStack_3d;
  }
  DAT_fffebf80 = param_4;
  return;
}

