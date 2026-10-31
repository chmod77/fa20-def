
/* WARNING: Removing unreachable block (ram,0x000880fe) */
/* WARNING: Removing unreachable block (ram,0x0008812a) */

void FUN_00088054(uint param_1,uint param_2,char param_3,char param_4,byte param_5,ushort param_6,
                 char param_7,char param_8,uint param_9,char param_10,char param_11,char param_12,
                 char param_13,uint param_14,undefined2 *param_15,undefined2 *param_16)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  uint uVar9;
  
  uVar9 = (param_1 & 0xffff) * 0xe60b;
  param_2 = param_2 & 0xffff;
  puVar7 = &DAT_0000ffff;
  if (uVar9 < 0x7fff8001) {
    puVar7 = (undefined *)(uVar9 >> 0xf);
  }
  puVar6 = puVar7 + 10;
  puVar3 = (undefined *)((uint)puVar6 & 0xffff);
  if (puVar3 < (undefined *)((uint)puVar7 & 0xffff)) {
    puVar6 = (undefined *)0xffffffff;
    puVar3 = &DAT_0000ffff;
  }
  if (puVar3 < &UNK_0000000b) {
    puVar6 = &UNK_0000000a;
  }
  puVar7 = &DAT_ffffb3c3;
  if ((undefined *)((uint)puVar6 & 0xffff) < &UNK_0000b3c3) {
    puVar7 = puVar6;
  }
  uVar8 = SUB42(puVar7,0);
  uVar9 = (uint)puVar7 & 0xffff;
  if (DAT_fffebc0c == '\0') {
    uVar4 = 0x33;
  }
  else {
    uVar4 = 0x600;
  }
  if (((((param_2 <= uVar4) && (param_4 != '\0')) && (param_5 < 4)) &&
      ((param_6 < 200 && (param_7 == '\0')))) && (param_8 != '\0')) {
    uVar1 = LK_133F40((uint)&T_02CACC,param_9 & 0xffff);
    puVar7 = (undefined *)(uVar1 & 0xffff);
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    if (&UNK_0000ad39 < puVar7) {
      puVar7 = (undefined *)0xffffad3a;
    }
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  if (param_3 == '\0') {
    iVar2 = __udiv32_r1_by_r0((param_14 & 0xffff) * 0x150d,0x13e9);
    puVar7 = (undefined *)((uint)puVar7 & 0xffff);
    puVar6 = puVar7 + iVar2;
    if ((puVar6 < puVar7) || (&DAT_0000ffff < puVar6)) {
      puVar6 = (undefined *)0xffffffff;
    }
    uVar5 = SUB42(puVar6,0);
    if (uVar9 <= ((uint)puVar6 & 0xffff)) goto LAB_000881d8;
  }
  else {
    uVar1 = LK_1351FC((uint)&T_02CA9C,param_2);
    uVar5 = (short)uVar1;
    if ((uVar1 & 0xffff) < uVar9) goto LAB_000881d8;
  }
  uVar5 = uVar8;
LAB_000881d8:
  if (param_13 != '\0') {
    uVar1 = LK_1351FC((uint)&T_02CAC0,param_2);
    uVar5 = (short)uVar1;
    if (uVar9 <= (uVar1 & 0xffff)) {
      uVar5 = uVar8;
    }
  }
  if ((param_11 != '\0') || (param_12 != '\0')) {
    uVar1 = LK_1351FC((uint)&T_02CAB4,param_2);
    uVar5 = (short)uVar1;
    if (uVar9 <= (uVar1 & 0xffff)) {
      uVar5 = uVar8;
    }
  }
  if (param_10 == '\0') {
    *param_15 = uVar5;
  }
  else {
    uVar1 = LK_1351FC((uint)&T_02CAA8,param_2);
    if ((uVar1 & 0xffff) < uVar9) {
      *param_15 = (short)uVar1;
    }
    else {
      *param_15 = uVar8;
    }
  }
  *param_16 = (short)puVar7;
  DAT_fffebc0c = param_2 <= uVar4;
  return;
}

