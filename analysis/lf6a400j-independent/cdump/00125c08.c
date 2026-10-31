
void FUN_00125c08(uint param_1,uint param_2,ushort param_3,ushort param_4,char param_5,char param_6,
                 char param_7,ushort param_8,ushort param_9,uint param_10,undefined2 *param_11,
                 undefined1 *param_12,undefined2 *param_13,undefined2 *param_14,undefined2 *param_15
                 ,undefined2 *param_16,undefined2 *param_17,undefined2 *param_18,ushort *param_19,
                 ushort *param_20,ushort *param_21,undefined2 *param_22,undefined2 *param_23,
                 undefined2 *param_24,undefined2 *param_25)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  undefined2 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  param_1 = param_1 & 0xffff;
  uVar2 = LK_135294((uint)&T_03055C,param_1);
  if ((undefined1 *)(uVar2 & 0xffff) == &LAB_00003e80) {
    uVar2 = 0;
  }
  else {
    uVar2 = __sdiv32_r1_by_r0((param_2 & 0xffff) * 0xff + -0x3e4180,
                              (int)((undefined1 *)(uVar2 & 0xffff) + -16000));
    if ((int)uVar2 < 0x100) {
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0xff;
    }
  }
  *param_12 = (char)uVar2;
  uVar3 = LK_138DEC((uint)&T_030548,param_1,uVar2);
  *param_13 = (short)uVar3;
  uVar4 = LK_138DEC((uint)&T_030534,param_1,uVar2);
  *param_16 = (short)uVar4;
  uVar5 = LK_138DEC((uint)&T_030520,param_1,uVar2);
  *param_15 = (short)uVar5;
  uVar6 = LK_138DEC((uint)&T_03050C,param_1,uVar2);
  *param_18 = (short)uVar6;
  uVar7 = LK_138DEC((uint)&T_0304F8,param_1,uVar2);
  *param_17 = (short)uVar7;
  uVar2 = LK_138DEC((uint)&T_0304E4,param_1,uVar2);
  *param_14 = (short)uVar2;
  bVar1 = false;
  if (((param_5 != '\0') && (param_6 != '\0')) && (param_7 == '\0')) {
    bVar1 = true;
  }
  uVar10 = -(uint)param_3;
  puVar14 = (undefined *)0xffffffff;
  if ((int)uVar10 < 0) {
    puVar14 = &DAT_00010000 + (uVar10 & 0xffff);
  }
  if (0x100 < param_4) {
    param_4 = 0x100;
  }
  *param_19 = param_4;
  uVar5 = (uVar5 & 0xffff) * (uint)param_4;
  puVar12 = (undefined *)(uVar5 >> 8);
  if (0xffff00 < uVar5) {
    puVar12 = &DAT_0000ffff;
  }
  uVar5 = (uVar7 & 0xffff) * (uint)param_4;
  puVar15 = (undefined *)(uVar5 >> 8);
  if (0xffff00 < uVar5) {
    puVar15 = &DAT_0000ffff;
  }
  uVar7 = -(uint)param_4;
  uVar5 = 0;
  if (-0x101 < (int)uVar7) {
    uVar5 = (uVar7 & 0xffff) + 0x100;
  }
  uVar4 = (uVar4 & 0xffff) * (uVar5 & 0xffff);
  puVar9 = (undefined *)(uVar4 >> 8);
  if (0xffff00 < uVar4) {
    puVar9 = &DAT_0000ffff;
  }
  uVar8 = (ushort)(puVar12 + ((uint)puVar9 & 0xffff));
  if (((uint)(puVar12 + ((uint)puVar9 & 0xffff)) & 0xffff) < ((uint)puVar12 & 0xffff)) {
    uVar8 = 0xffff;
  }
  *param_20 = uVar8;
  uVar5 = (uint)uVar8 * ((uint)puVar14 & 0xffff) >> 0x10;
  uVar4 = 0;
  if (-0x101 < (int)uVar7) {
    uVar4 = (uVar7 & 0xffff) + 0x100;
  }
  uVar4 = (uVar6 & 0xffff) * (uVar4 & 0xffff);
  puVar14 = (undefined *)(uVar4 >> 8);
  if (0xffff00 < uVar4) {
    puVar14 = &DAT_0000ffff;
  }
  uVar8 = (ushort)(puVar15 + ((uint)puVar14 & 0xffff));
  if (((uint)(puVar15 + ((uint)puVar14 & 0xffff)) & 0xffff) < ((uint)puVar15 & 0xffff)) {
    uVar8 = 0xffff;
  }
  *param_21 = uVar8;
  uVar4 = ((uint)uVar8 * (uint)param_3 >> 0x10) + uVar5;
  if ((uVar4 & 0xffff) < uVar5) {
    uVar4 = 0xffffffff;
  }
  *param_22 = (short)uVar4;
  puVar14 = (undefined *)0xffffffff;
  if ((int)uVar10 < 0) {
    puVar14 = &DAT_00010000 + (uVar10 & 0xffff);
  }
  uVar3 = (uVar3 & 0xffff) * ((uint)puVar14 & 0xffff) >> 0x10;
  uVar2 = ((uVar2 & 0xffff) * (uint)param_3 >> 0x10) + uVar3;
  if ((uVar2 & 0xffff) < uVar3) {
    uVar2 = 0xffffffff;
  }
  if (bVar1) {
    uVar4 = uVar4 & 0xffff;
    uVar3 = uVar4;
  }
  else {
    uVar2 = uVar2 & 0xffff;
    uVar3 = uVar2;
    param_9 = param_8;
  }
  *param_25 = (short)((int)(uVar3 - param_9) >> 1);
  iVar11 = (uVar3 - param_9) + (param_10 & 0xffff);
  if (!bVar1) {
    uVar4 = uVar2;
  }
  uVar3 = uVar4 & 0xffff;
  if ((param_10 & 0xffff) < uVar3) {
    puVar14 = (undefined *)(iVar11 + 0x42);
    if ((int)puVar14 < (int)&DAT_00010000) {
      if ((int)puVar14 < 0) {
        puVar14 = (undefined *)0x0;
      }
    }
    else {
      puVar14 = &DAT_0000ffff;
    }
    uVar13 = SUB42(puVar14,0);
    if (((uint)puVar14 & 0xffff) < uVar3) {
LAB_00125f0c:
      *param_11 = uVar13;
      goto LAB_00125f12;
    }
  }
  else {
    puVar14 = (undefined *)(iVar11 + -0x42);
    if ((int)puVar14 < (int)&DAT_00010000) {
      if ((int)puVar14 < 0) {
        puVar14 = (undefined *)0x0;
      }
    }
    else {
      puVar14 = &DAT_0000ffff;
    }
    uVar13 = SUB42(puVar14,0);
    if (uVar3 <= ((uint)puVar14 & 0xffff)) goto LAB_00125f0c;
  }
  *param_11 = (short)uVar4;
LAB_00125f12:
  *param_24 = (short)uVar4;
  *param_23 = (short)uVar2;
  return;
}

