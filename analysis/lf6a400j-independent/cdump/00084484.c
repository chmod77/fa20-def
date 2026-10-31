
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00084484(uint param_1,uint param_2,ushort param_3,ushort param_4,char param_5,char param_6,
                 char param_7,undefined2 *param_8,undefined1 *param_9,undefined2 *param_10,
                 undefined2 *param_11,undefined2 *param_12,undefined2 *param_13,undefined2 *param_14
                 ,undefined2 *param_15,ushort *param_16,ushort *param_17,ushort *param_18,
                 undefined2 *param_19,undefined2 *param_20,undefined2 *param_21,undefined2 *param_22
                 )

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  ushort uVar11;
  undefined2 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  undefined *puVar16;
  
  param_1 = param_1 & 0xffff;
  uVar3 = LK_1351FC((uint)&T_02C838,param_1);
  if ((undefined1 *)(uVar3 & 0xffff) == &LAB_00003e80) {
    uVar3 = 0;
  }
  else {
    uVar3 = __sdiv32_r1_by_r0((param_2 & 0xffff) * 0xff + -0x3e4180,
                              (int)((undefined1 *)(uVar3 & 0xffff) + -16000));
    if ((int)uVar3 < 0x100) {
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xff;
    }
  }
  uVar4 = LK_138C74((uint)&T_02C844,param_1,uVar3);
  *param_10 = (short)uVar4;
  uVar5 = LK_136050((uint)&T_02C858,param_1,uVar3);
  *param_13 = (short)uVar5;
  uVar6 = LK_136050((uint)&T_02C86C,param_1,uVar3);
  *param_12 = (short)uVar6;
  uVar7 = LK_136050((uint)&T_02C880,param_1,uVar3);
  *param_15 = (short)uVar7;
  uVar8 = LK_136050((uint)&T_02C894,param_1,uVar3);
  *param_14 = (short)uVar8;
  uVar9 = LK_138C74((uint)&T_02C8A8,param_1,uVar3);
  *param_11 = (short)uVar9;
  *param_9 = (char)uVar3;
  bVar1 = false;
  if (((param_5 != '\0') && (param_6 != '\0')) && (param_7 == '\0')) {
    bVar1 = true;
  }
  uVar3 = -(uint)param_3;
  puVar16 = (undefined *)0xffffffff;
  if ((int)uVar3 < 0) {
    puVar16 = &DAT_00010000 + (uVar3 & 0xffff);
  }
  if (0x100 < param_4) {
    param_4 = 0x100;
  }
  *param_16 = param_4;
  uVar6 = (uVar6 & 0xffff) * (uint)param_4;
  puVar13 = (undefined *)(uVar6 >> 8);
  if (0xffff00 < uVar6) {
    puVar13 = &DAT_0000ffff;
  }
  uVar6 = (uVar8 & 0xffff) * (uint)param_4;
  puVar14 = (undefined *)(uVar6 >> 8);
  if (0xffff00 < uVar6) {
    puVar14 = &DAT_0000ffff;
  }
  uVar8 = -(uint)param_4;
  uVar6 = 0;
  if (-0x101 < (int)uVar8) {
    uVar6 = (uVar8 & 0xffff) + 0x100;
  }
  uVar5 = (uVar5 & 0xffff) * (uVar6 & 0xffff);
  puVar10 = (undefined *)(uVar5 >> 8);
  if (0xffff00 < uVar5) {
    puVar10 = &DAT_0000ffff;
  }
  uVar11 = (ushort)(puVar13 + ((uint)puVar10 & 0xffff));
  if (((uint)(puVar13 + ((uint)puVar10 & 0xffff)) & 0xffff) < ((uint)puVar13 & 0xffff)) {
    uVar11 = 0xffff;
  }
  *param_17 = uVar11;
  uVar6 = (uint)uVar11 * ((uint)puVar16 & 0xffff) >> 0x10;
  uVar5 = 0;
  if (-0x101 < (int)uVar8) {
    uVar5 = (uVar8 & 0xffff) + 0x100;
  }
  uVar5 = (uVar7 & 0xffff) * (uVar5 & 0xffff);
  puVar16 = (undefined *)(uVar5 >> 8);
  if (0xffff00 < uVar5) {
    puVar16 = &DAT_0000ffff;
  }
  uVar11 = (ushort)(puVar14 + ((uint)puVar16 & 0xffff));
  if (((uint)(puVar14 + ((uint)puVar16 & 0xffff)) & 0xffff) < ((uint)puVar14 & 0xffff)) {
    uVar11 = 0xffff;
  }
  *param_18 = uVar11;
  uVar5 = ((uint)uVar11 * (uint)param_3 >> 0x10) + uVar6;
  if ((uVar5 & 0xffff) < uVar6) {
    uVar5 = 0xffffffff;
  }
  *param_19 = (short)uVar5;
  puVar16 = (undefined *)0xffffffff;
  if ((int)uVar3 < 0) {
    puVar16 = &DAT_00010000 + (uVar3 & 0xffff);
  }
  uVar4 = (uVar4 & 0xffff) * ((uint)puVar16 & 0xffff) >> 0x10;
  uVar3 = ((uVar9 & 0xffff) * (uint)param_3 >> 0x10) + uVar4;
  if ((uVar3 & 0xffff) < uVar4) {
    uVar3 = 0xffffffff;
  }
  uVar4 = uVar3;
  if (bVar1) {
    uVar4 = uVar5;
  }
  uVar12 = (undefined2)uVar4;
  *param_21 = uVar12;
  *param_20 = (short)uVar3;
  if (bVar1) {
    uVar5 = uVar5 & 0xffff;
    iVar15 = uVar5 - _DAT_fffebb38;
  }
  else {
    uVar3 = uVar3 & 0xffff;
    iVar15 = uVar3 - _DAT_fffebb36;
  }
  *param_22 = (short)(iVar15 >> 1);
  uVar4 = uVar4 & 0xffff;
  if (_DAT_fffebb34 < uVar4) {
    puVar13 = (undefined *)((uint)_DAT_fffebb34 + iVar15 + 0x42);
    puVar16 = &DAT_0000ffff;
    if (((int)puVar13 < (int)&DAT_00010000) && (puVar16 = puVar13, (int)puVar13 < 0)) {
      puVar16 = (undefined *)0x0;
    }
    uVar2 = (short)puVar16;
    if (uVar4 <= ((uint)puVar16 & 0xffff)) goto LAB_00084782;
  }
  else {
    puVar16 = (undefined *)(iVar15 + (uint)_DAT_fffebb34 + -0x42);
    if ((int)puVar16 < (int)&DAT_00010000) {
      if ((int)puVar16 < 0) {
        puVar16 = (undefined *)0x0;
      }
    }
    else {
      puVar16 = &DAT_0000ffff;
    }
    uVar2 = (short)puVar16;
    if (((uint)puVar16 & 0xffff) < uVar4) goto LAB_00084782;
  }
  uVar12 = uVar2;
LAB_00084782:
  *param_8 = uVar12;
  _DAT_fffebb38 = (short)uVar5;
  _DAT_fffebb36 = (short)uVar3;
  _DAT_fffebb34 = uVar12;
  return;
}

