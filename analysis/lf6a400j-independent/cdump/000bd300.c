
/* WARNING: Removing unreachable block (ram,0x000bd530) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bd300(char param_1,uint param_2,uint param_3,uint param_4,uint param_5,ushort param_6,
                 ushort param_7,undefined1 param_8,short *param_9,short *param_10,short *param_11,
                 short *param_12,byte *param_13,short *param_14,short *param_15,short *param_16,
                 byte *param_17,short *param_18,byte *param_19,short *param_20,short *param_21)

{
  bool bVar1;
  uint uVar2;
  short sVar5;
  uint uVar3;
  uint uVar4;
  byte bVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined1 *p1;
  short sVar12;
  undefined1 *puVar11;
  uint p1_00;
  
  iVar7 = (param_2 & 0xffff) - (param_3 & 0xffff);
  sVar8 = 0x7fff;
  if ((iVar7 < 0x72b3) && (sVar8 = -0x8000, -0x8d4e < iVar7)) {
    sVar8 = (short)iVar7 + 0xd4d;
  }
  *param_20 = sVar8;
  p1 = (undefined1 *)(param_4 & 0xffff);
  uVar2 = LK_135634((uint)&T_02E5B0,(uint)p1);
  iVar7 = (param_2 & 0xffff) - (param_5 & 0xffff);
  sVar9 = 0x7fff;
  sVar5 = (short)uVar2;
  if ((iVar7 < 0x8000) && (sVar9 = -0x8000, -0x8001 < iVar7)) {
    sVar9 = (short)iVar7;
  }
  p1_00 = (uint)sVar9;
  *param_21 = sVar9;
  uVar2 = LK_134E2C((uint)&T_02E5BC,p1_00);
  *param_16 = (short)uVar2;
  uVar3 = LK_134E2C((uint)&T_02E5C8,p1_00);
  *param_18 = (short)uVar3;
  uVar4 = LK_134E2C((uint)&T_02E5D4,p1_00);
  *param_12 = (short)uVar4;
  bVar6 = FUN_0016ba04(&DAT_00015378,param_8);
  *param_17 = bVar6;
  iVar7 = (int)(short)uVar2 * (uint)bVar6;
  sVar9 = 0x7fff;
  if (iVar7 < 0x3fff81) {
    if (iVar7 < -0x3fff81) {
      sVar9 = -0x8000;
    }
    else {
      sVar9 = (short)((ulonglong)((longlong)iVar7 * 0x2000000) >> 0x20);
    }
  }
  *param_14 = sVar9;
  bVar6 = FUN_0016ba04(&DAT_00015388,param_8);
  *param_19 = bVar6;
  iVar7 = (int)(short)uVar3 * (uint)bVar6;
  sVar10 = 0x7fff;
  if (iVar7 < 0x3fff81) {
    if (iVar7 < -0x3fff81) {
      sVar10 = -0x8000;
    }
    else {
      sVar10 = (short)((ulonglong)((longlong)iVar7 * 0x2000000) >> 0x20);
    }
  }
  *param_15 = sVar10;
  bVar6 = FUN_0016ba04(&DAT_00015398,param_8);
  *param_13 = bVar6;
  sVar12 = _SUB_fffec8e0;
  if ((0xa9 < (int)p1_00) && (param_6 < param_7)) {
    sVar12 = _SUB_fffec8e0 + sVar10;
    if ((_SUB_fffec8e0 < 0) || ((sVar10 < 0 || (-1 < sVar12)))) {
      if ((_SUB_fffec8e0 < 0) && ((sVar10 < 0 && (-1 < sVar12)))) {
        sVar12 = -0x8000;
      }
    }
    else {
      sVar12 = 0x7fff;
    }
    if (0xa00 < sVar12) {
      sVar12 = 0xa00;
    }
  }
  if (((int)p1_00 < 0) && (0x4ff < param_6)) {
    sVar12 = _SUB_fffec8e0 + sVar9;
    if ((_SUB_fffec8e0 < 0) || ((sVar9 < 0 || (-1 < sVar12)))) {
      if ((_SUB_fffec8e0 < 0) && ((sVar9 < 0 && (-1 < sVar12)))) {
        sVar12 = -0x8000;
      }
    }
    else {
      sVar12 = 0x7fff;
    }
    if (sVar12 < -0x5a00) {
      sVar12 = -0x5a00;
    }
  }
  if (DAT_fffec8e2 != '\0') {
    iVar7 = sVar5 + 0x6aa;
    if (0x7fff < iVar7) {
      iVar7 = 0x7fff;
    }
    sVar5 = (short)iVar7;
  }
  if (DAT_fffec8e3 == '\0') {
    puVar11 = &LAB_00001400;
  }
  else {
    puVar11 = (undefined1 *)0x1600;
  }
  bVar1 = true;
  if ((((param_1 != '\x01') && (param_1 != '\x03')) && (param_1 != '\x04')) &&
     (((param_1 != '\x05' && (param_1 != '\x06')) &&
      ((param_1 != '\a' && ((sVar8 > sVar5 && (p1 > puVar11)))))))) {
    bVar1 = false;
  }
  if (bVar1) {
    sVar12 = 0;
  }
  *param_11 = sVar12;
  if (bVar1) {
    sVar9 = 0;
  }
  else {
    iVar7 = (int)(short)uVar4 * (uint)bVar6;
    if (iVar7 < 0x3fff81) {
      sVar9 = -0x8000;
      if (-0x3fff82 < iVar7) {
        sVar9 = (short)((ulonglong)((longlong)iVar7 * 0x2000000) >> 0x20);
      }
    }
    else {
      sVar9 = 0x7fff;
    }
  }
  *param_10 = sVar9;
  sVar10 = sVar9 + sVar12;
  if (((sVar9 < 0) || (sVar12 < 0)) || (-1 < sVar10)) {
    if (((sVar9 < 0) && (sVar12 < 0)) && (-1 < sVar10)) {
      sVar10 = -0x8000;
    }
  }
  else {
    sVar10 = 0x7fff;
  }
  *param_9 = sVar10;
  _SUB_fffec8e0 = sVar12;
  DAT_fffec8e2 = sVar8 <= sVar5;
  DAT_fffec8e3 = p1 <= puVar11;
  return;
}

