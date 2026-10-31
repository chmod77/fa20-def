
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00082758(uint param_1,uint param_2,uint param_3,ushort param_4,uint param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,ushort param_12,
                 undefined2 *param_13,undefined2 *param_14,undefined2 *param_15,undefined2 *param_16
                 ,ushort *param_17,short *param_18,char *param_19)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar7;
  undefined *puVar6;
  char cVar8;
  undefined1 *puVar9;
  short sVar11;
  short sVar12;
  undefined *puVar10;
  int iVar13;
  undefined *puVar14;
  ushort uVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 *puVar19;
  
  param_1 = param_1 & 0xffff;
  param_2 = param_2 & 0xffff;
  uVar1 = LK_135BE8((uint)&T_02C7FC,param_1,param_2);
  uVar1 = uVar1 & 0xff;
  uVar2 = LK_135BE8((uint)&T_02C810,param_1,param_2);
  uVar2 = uVar2 & 0xff;
  uVar3 = LK_135BE8((uint)&T_02C824,param_1,param_2);
  uVar3 = uVar3 & 0xff;
  param_3 = param_3 & 0xffff;
  uVar4 = __udiv32_r1_by_r0(param_3 * uVar1,0xff);
  uVar4 = uVar4 & 0xffff;
  uVar5 = __udiv32_r1_by_r0(uVar1 * 0xc80,0x33);
  iVar13 = uVar4 - (uVar5 & 0xffff);
  uVar7 = 0xffff;
  if (iVar13 < (int)&DAT_0000c180) {
    uVar7 = (short)iVar13 + 16000;
  }
  uVar4 = __udiv32_r1_by_r0(param_4 * uVar2,0xff);
  uVar4 = uVar4 & 0xffff;
  uVar5 = __udiv32_r1_by_r0(uVar2 * 0xc80,0x33);
  iVar13 = uVar4 - (uVar5 & 0xffff);
  puVar16 = (undefined1 *)0xffffffff;
  if (iVar13 < (int)&DAT_0000c180) {
    puVar16 = &LAB_00003e80 + iVar13;
  }
  uVar4 = __udiv32_r1_by_r0((param_5 & 0xffff) * uVar3,0xff);
  uVar4 = uVar4 & 0xffff;
  uVar5 = __udiv32_r1_by_r0(uVar3 * 0xc80,0x33);
  iVar13 = uVar4 - (uVar5 & 0xffff);
  puVar19 = (undefined1 *)0xffffffff;
  if (iVar13 < (int)&DAT_0000c180) {
    puVar19 = &LAB_00003e80 + iVar13;
  }
  uVar4 = 0xff - uVar3 & 0xff;
  uVar3 = __udiv32_r1_by_r0(uVar4 * param_3,0xff);
  uVar3 = uVar3 & 0xffff;
  uVar4 = __udiv32_r1_by_r0(uVar4 * 0xc80,0x33);
  iVar13 = uVar3 - (uVar4 & 0xffff);
  puVar9 = (undefined1 *)0xffffffff;
  if (iVar13 < (int)&DAT_0000c180) {
    puVar9 = &LAB_00003e80 + iVar13;
  }
  puVar14 = (undefined *)(((uint)puVar19 & 0xffff) + ((uint)puVar9 & 0xffff));
  uVar15 = 0xffff;
  if ((puVar14 < &UNK_00013e80) && (uVar15 = 0, (undefined *)0x3e7f < puVar14)) {
    uVar15 = (short)puVar14 + 0xc180;
  }
  *param_17 = uVar15;
  uVar3 = 0xff - uVar2 & 0xff;
  uVar2 = __udiv32_r1_by_r0(uVar3 * param_3,0xff);
  uVar2 = uVar2 & 0xffff;
  uVar3 = __udiv32_r1_by_r0(uVar3 * 0xc80,0x33);
  iVar13 = uVar2 - (uVar3 & 0xffff);
  puVar19 = (undefined1 *)0xffffffff;
  if (iVar13 < (int)&DAT_0000c180) {
    puVar19 = &LAB_00003e80 + iVar13;
  }
  puVar14 = (undefined *)(((uint)puVar16 & 0xffff) + ((uint)puVar19 & 0xffff));
  puVar17 = (undefined *)0xffffffff;
  if ((puVar14 < &UNK_00013e80) && (puVar17 = (undefined *)0x0, (undefined *)0x3e7f < puVar14)) {
    puVar17 = puVar14 + -16000;
  }
  *param_16 = (short)puVar17;
  uVar2 = 0xff - uVar1 & 0xff;
  uVar1 = __udiv32_r1_by_r0(uVar2 * param_4,0xff);
  uVar1 = uVar1 & 0xffff;
  uVar2 = __udiv32_r1_by_r0(uVar2 * 0xc80,0x33);
  iVar13 = uVar1 - (uVar2 & 0xffff);
  puVar16 = (undefined1 *)0xffffffff;
  if (iVar13 < (int)&DAT_0000c180) {
    puVar16 = &LAB_00003e80 + iVar13;
  }
  puVar14 = (undefined *)((uint)uVar7 + ((uint)puVar16 & 0xffff));
  puVar18 = (undefined *)0xffffffff;
  if ((puVar14 < &UNK_00013e80) && (puVar18 = (undefined *)0x0, (undefined *)0x3e7f < puVar14)) {
    puVar18 = puVar14 + -16000;
  }
  *param_15 = (short)puVar18;
  if ((param_6 == '\0') || (puVar14 = puVar18, param_7 != '\x02')) {
    if ((param_6 == '\0') || (param_7 != '\x03')) {
      if ((param_6 == '\0') || (param_7 != '\x04')) {
        puVar14 = puVar17;
        if ((param_6 == '\0') &&
           ((((param_8 == '\0' || (param_9 != '\0')) && (param_8 != '\0')) && (param_9 != '\0'))))
        goto LAB_000829fc;
      }
      else {
        puVar14 = (undefined *)(int)(short)param_12;
      }
    }
    else {
LAB_000829fc:
      puVar14 = (undefined *)(int)(short)uVar15;
    }
  }
  *param_14 = (short)puVar14;
  puVar6 = puVar14;
  if (DAT_fffebb25 != '\0') {
    puVar6 = (undefined *)(int)_DAT_fffebb1e;
  }
  uVar2 = (uint)puVar6 & 0xffff;
  uVar1 = (int)((uint)puVar14 & 0xffff) - uVar2;
  puVar16 = (undefined1 *)0xffffffff;
  if (((int)uVar1 < (int)&DAT_0000c180) && (puVar16 = (undefined1 *)0x0, -0x3e81 < (int)uVar1)) {
    puVar16 = &LAB_00003e80 + uVar1;
  }
  if ((int)uVar1 < 0) {
    uVar1 = -uVar1;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
  }
  else if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  if (((param_7 == '\x04') && (DAT_fffebb22 != '\x04')) ||
     ((DAT_fffebb22 == '\x04' && (param_7 != '\x04')))) {
    DAT_fffebb24 = '\x01';
  }
  cVar8 = DAT_fffebb24;
  if ((uVar1 & 0xffff) < 0x51) {
    cVar8 = '\0';
  }
  DAT_fffebb24 = cVar8;
  *param_19 = cVar8;
  if (param_7 != '\x04') {
    sVar11 = (short)((int)((uint)puVar17 & 0xffff) >> 1) - (short)((int)(uint)_DAT_fffebb1a >> 1);
  }
  else {
    sVar11 = (short)((int)(uint)param_12 >> 1) - (short)((int)(uint)_DAT_fffebb18 >> 1);
  }
  if (param_7 == '\x03') {
    sVar11 = (short)((int)(uint)uVar15 >> 1) - (short)((int)(uint)_DAT_fffebb1c >> 1);
  }
  if (param_7 == '\x02') {
    sVar11 = (short)((int)((uint)puVar18 & 0xffff) >> 1) - (short)((int)(uint)_DAT_fffebb20 >> 1);
  }
  sVar12 = 0;
  if (DAT_fffebb23 != '\0') {
    sVar12 = sVar11;
  }
  *param_18 = sVar12;
  if ((undefined1 *)((uint)puVar16 & 0xffff) < &LAB_00003e80) {
    if (cVar8 == '\0') {
      uVar7 = 24000;
    }
    else {
      uVar7 = 0x3ea8;
    }
    iVar13 = sVar12 * 2 - (uint)uVar7;
    puVar6 = (undefined *)0xffffffff;
    if ((iVar13 < (int)&UNK_00008300) && (puVar6 = (undefined *)0x0, -0x7d01 < iVar13)) {
      puVar6 = &DAT_00007d00 + iVar13;
    }
    puVar10 = (undefined *)(uVar2 + ((uint)puVar6 & 0xffff));
    puVar6 = (undefined *)0xffffffff;
    if ((puVar10 < &UNK_00013e80) && (puVar6 = (undefined *)0x0, (undefined *)0x3e7f < puVar10)) {
      puVar6 = puVar10 + -16000;
    }
    if (((uint)puVar14 & 0xffff) <= ((uint)puVar6 & 0xffff)) goto LAB_00082bdc;
  }
  else {
    if (param_10 == '\0') {
      if (cVar8 == '\0') {
        uVar7 = 24000;
      }
      else {
        uVar7 = 0x3e88;
      }
    }
    else if (param_11 == '\0') {
      uVar7 = 0x3e88;
    }
    else {
      uVar7 = 56000;
    }
    puVar6 = (undefined *)(sVar12 * 2 + (uint)uVar7);
    if ((int)puVar6 < (int)&DAT_00010000) {
      if ((int)puVar6 < 0) {
        puVar6 = (undefined *)0x0;
      }
    }
    else {
      puVar6 = &DAT_0000ffff;
    }
    puVar10 = (undefined *)(((uint)puVar6 & 0xffff) + uVar2);
    puVar6 = (undefined *)0xffffffff;
    if ((puVar10 < &UNK_00013e80) && (puVar6 = (undefined *)0x0, (undefined *)0x3e7f < puVar10)) {
      puVar6 = puVar10 + -16000;
    }
    if (((uint)puVar6 & 0xffff) <= ((uint)puVar14 & 0xffff)) goto LAB_00082bdc;
  }
  puVar6 = (undefined *)((uint)puVar14 & 0xffff);
LAB_00082bdc:
  *param_13 = (short)puVar6;
  _DAT_fffebb20 = (short)puVar18;
  DAT_fffebb23 = 1;
  _DAT_fffebb1a = (short)puVar17;
  _DAT_fffebb1c = uVar15;
  _DAT_fffebb1e = (short)puVar6;
  DAT_fffebb25 = 1;
  DAT_fffebb22 = param_7;
  _DAT_fffebb18 = param_12;
  return;
}

