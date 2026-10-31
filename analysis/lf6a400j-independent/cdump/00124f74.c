
void FUN_00124f74(uint param_1,uint param_2,uint param_3,ushort param_4,uint param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,ushort param_12,
                 uint param_13,char param_14,char param_15,uint param_16,uint param_17,uint param_18
                 ,uint param_19,undefined2 *param_20)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 *puVar8;
  short sVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  
  param_1 = param_1 & 0xffff;
  param_2 = param_2 & 0xffff;
  uVar1 = LK_135D60((uint)&T_0304D0,param_1,param_2);
  uVar2 = LK_135D60((uint)&T_0304BC,param_1,param_2);
  uVar2 = uVar2 & 0xff;
  uVar3 = LK_135D60((uint)&T_0304A8,param_1,param_2);
  uVar3 = uVar3 & 0xff;
  param_3 = param_3 & 0xffff;
  uVar4 = __udiv32_r1_by_r0(param_3 * (uVar1 & 0xff),0xff);
  uVar4 = uVar4 & 0xffff;
  uVar5 = __udiv32_r1_by_r0((uVar1 & 0xff) * 0xc80,0x33);
  iVar10 = uVar4 - (uVar5 & 0xffff);
  uVar6 = 0xffff;
  if (iVar10 < (int)&DAT_0000c180) {
    uVar6 = (short)iVar10 + 16000;
  }
  uVar4 = __udiv32_r1_by_r0(param_4 * uVar2,0xff);
  uVar4 = uVar4 & 0xffff;
  uVar5 = __udiv32_r1_by_r0(uVar2 * 0xc80,0x33);
  iVar10 = uVar4 - (uVar5 & 0xffff);
  puVar13 = (undefined1 *)0xffffffff;
  if (iVar10 < (int)&DAT_0000c180) {
    puVar13 = &LAB_00003e80 + iVar10;
  }
  uVar4 = __udiv32_r1_by_r0((param_5 & 0xffff) * uVar3,0xff);
  uVar4 = uVar4 & 0xffff;
  uVar5 = __udiv32_r1_by_r0(uVar3 * 0xc80,0x33);
  iVar10 = uVar4 - (uVar5 & 0xffff);
  puVar14 = (undefined1 *)0xffffffff;
  if (iVar10 < (int)&DAT_0000c180) {
    puVar14 = &LAB_00003e80 + iVar10;
  }
  uVar4 = 0xff - uVar3 & 0xff;
  uVar3 = __udiv32_r1_by_r0(uVar4 * param_3,0xff);
  uVar3 = uVar3 & 0xffff;
  uVar4 = __udiv32_r1_by_r0(uVar4 * 0xc80,0x33);
  iVar10 = uVar3 - (uVar4 & 0xffff);
  puVar8 = (undefined1 *)0xffffffff;
  if (iVar10 < (int)&DAT_0000c180) {
    puVar8 = &LAB_00003e80 + iVar10;
  }
  puVar11 = (undefined *)(((uint)puVar14 & 0xffff) + ((uint)puVar8 & 0xffff));
  uVar7 = 0xffff;
  if ((puVar11 < &UNK_00013e80) && (uVar7 = 0, (undefined *)0x3e7f < puVar11)) {
    uVar7 = (short)puVar11 + 0xc180;
  }
  uVar3 = 0xff - uVar2 & 0xff;
  uVar2 = __udiv32_r1_by_r0(uVar3 * param_3,0xff);
  uVar2 = uVar2 & 0xffff;
  uVar3 = __udiv32_r1_by_r0(uVar3 * 0xc80,0x33);
  iVar10 = uVar2 - (uVar3 & 0xffff);
  puVar14 = (undefined1 *)0xffffffff;
  if (iVar10 < (int)&DAT_0000c180) {
    puVar14 = &LAB_00003e80 + iVar10;
  }
  puVar11 = (undefined *)(((uint)puVar13 & 0xffff) + ((uint)puVar14 & 0xffff));
  puVar15 = (undefined *)0xffffffff;
  if ((puVar11 < &UNK_00013e80) && (puVar15 = (undefined *)0x0, (undefined *)0x3e7f < puVar11)) {
    puVar15 = puVar11 + -16000;
  }
  uVar2 = 0xff - (uVar1 & 0xff) & 0xff;
  uVar1 = __udiv32_r1_by_r0(uVar2 * param_4,0xff);
  uVar1 = uVar1 & 0xffff;
  uVar2 = __udiv32_r1_by_r0(uVar2 * 0xc80,0x33);
  iVar10 = uVar1 - (uVar2 & 0xffff);
  puVar13 = (undefined1 *)0xffffffff;
  if (iVar10 < (int)&DAT_0000c180) {
    puVar13 = &LAB_00003e80 + iVar10;
  }
  puVar12 = (undefined *)((uint)uVar6 + ((uint)puVar13 & 0xffff));
  puVar11 = (undefined *)0xffffffff;
  if ((puVar12 < &UNK_00013e80) && (puVar11 = (undefined *)0x0, (undefined *)0x3e7f < puVar12)) {
    puVar11 = puVar12 + -16000;
  }
  if (param_7 != '\x02') {
    if (param_7 != '\x03') {
      if (param_7 != '\x04') {
        sVar9 = (short)((int)((uint)puVar15 & 0xffff) >> 1) - (short)((int)(param_19 & 0xffff) >> 1)
        ;
      }
      else {
        sVar9 = (short)((int)(uint)param_12 >> 1) - (short)((int)(param_18 & 0xffff) >> 1);
      }
    }
    else {
      sVar9 = (short)((int)(uint)uVar7 >> 1) - (short)((int)(param_17 & 0xffff) >> 1);
    }
  }
  else {
    sVar9 = (short)((int)((uint)puVar11 & 0xffff) >> 1) - (short)((int)(param_16 & 0xffff) >> 1);
  }
  if ((param_6 != '\0') && (param_7 == '\x02')) goto LAB_001252a2;
  if ((param_6 == '\0') || (param_7 != '\x03')) {
    if ((param_6 != '\0') && (param_7 == '\x04')) {
      puVar11 = (undefined *)(int)(short)param_12;
      goto LAB_001252a2;
    }
    puVar11 = puVar15;
    if ((param_6 != '\0') ||
       ((((param_8 != '\0' && (param_9 == '\0')) || (param_8 == '\0')) || (param_9 == '\0'))))
    goto LAB_001252a2;
  }
  puVar11 = (undefined *)(int)(short)uVar7;
LAB_001252a2:
  uVar2 = (uint)puVar11 & 0xffff;
  uVar1 = uVar2 - (param_13 & 0xffff);
  puVar13 = (undefined1 *)0xffffffff;
  if (((int)uVar1 < (int)&DAT_0000c180) && (puVar13 = (undefined1 *)0x0, -0x3e81 < (int)uVar1)) {
    puVar13 = &LAB_00003e80 + uVar1;
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
  if ((uVar1 & 0xffff) < 0x51) {
    param_15 = '\0';
  }
  else if (((param_7 == '\x04') && (param_14 != '\x04')) ||
          ((param_14 == '\x04' && (param_7 != '\x04')))) {
    param_15 = '\x01';
  }
  if ((undefined1 *)((uint)puVar13 & 0xffff) < &LAB_00003e80) {
    if (param_15 == '\0') {
      uVar6 = 24000;
    }
    else {
      uVar6 = 0x3ea8;
    }
    iVar10 = sVar9 * 2 - (uint)uVar6;
    puVar15 = (undefined *)0xffffffff;
    if ((iVar10 < (int)&UNK_00008300) && (puVar15 = (undefined *)0x0, -0x7d01 < iVar10)) {
      puVar15 = &DAT_00007d00 + iVar10;
    }
    puVar12 = (undefined *)((param_13 & 0xffff) + ((uint)puVar15 & 0xffff));
    puVar15 = (undefined *)0xffffffff;
    if ((puVar12 < &UNK_00013e80) && (puVar15 = (undefined *)0x0, (undefined *)0x3e7f < puVar12)) {
      puVar15 = puVar12 + -16000;
    }
    if (uVar2 <= ((uint)puVar15 & 0xffff)) {
      *param_20 = (short)puVar15;
      return;
    }
  }
  else {
    if (param_10 == '\0') {
      if (param_15 == '\0') {
        uVar6 = 24000;
      }
      else {
        uVar6 = 0x3e88;
      }
    }
    else if (param_11 == '\0') {
      uVar6 = 0x3e88;
    }
    else {
      uVar6 = 56000;
    }
    puVar15 = (undefined *)(sVar9 * 2 + (uint)uVar6);
    if ((int)puVar15 < (int)&DAT_00010000) {
      if ((int)puVar15 < 0) {
        puVar15 = (undefined *)0x0;
      }
    }
    else {
      puVar15 = &DAT_0000ffff;
    }
    puVar15 = (undefined *)(((uint)puVar15 & 0xffff) + (param_13 & 0xffff));
    puVar12 = (undefined *)0xffffffff;
    if ((puVar15 < &UNK_00013e80) && (puVar12 = (undefined *)0x0, (undefined *)0x3e7f < puVar15)) {
      puVar12 = puVar15 + -16000;
    }
    if (((uint)puVar12 & 0xffff) <= uVar2) {
      *param_20 = (short)puVar12;
      return;
    }
  }
  *param_20 = (short)puVar11;
  return;
}

