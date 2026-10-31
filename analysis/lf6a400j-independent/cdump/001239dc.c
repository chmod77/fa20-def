
/* WARNING: Removing unreachable block (ram,0x00123a8a) */
/* WARNING: Removing unreachable block (ram,0x00123ab4) */

void FUN_001239dc(uint param_1,uint param_2,char param_3,char param_4,byte param_5,ushort param_6,
                 char param_7,char param_8,uint param_9,char param_10,char param_11,char param_12,
                 char param_13,uint param_14,char param_15,undefined2 *param_16)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  uint uVar8;
  
  uVar8 = (param_1 & 0xffff) * 0xe60b;
  param_2 = param_2 & 0xffff;
  puVar6 = &DAT_0000ffff;
  if (uVar8 < 0x7fff8001) {
    puVar6 = (undefined *)(uVar8 >> 0xf);
  }
  puVar4 = puVar6 + 10;
  puVar5 = (undefined *)((uint)puVar4 & 0xffff);
  if (puVar5 < (undefined *)((uint)puVar6 & 0xffff)) {
    puVar4 = (undefined *)0xffffffff;
    puVar5 = &DAT_0000ffff;
  }
  if (puVar5 < &UNK_0000000b) {
    puVar4 = &UNK_0000000a;
  }
  puVar6 = &DAT_ffffb3c3;
  if ((undefined *)((uint)puVar4 & 0xffff) < &UNK_0000b3c3) {
    puVar6 = puVar4;
  }
  uVar7 = SUB42(puVar6,0);
  uVar8 = (uint)puVar6 & 0xffff;
  if (param_15 == '\0') {
    uVar1 = 0x33;
  }
  else {
    uVar1 = 0x600;
  }
  if (((((uVar1 < param_2) || (param_4 == '\0')) || (3 < param_5)) ||
      ((199 < param_6 || (param_7 != '\0')))) || (param_8 == '\0')) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar1 = LK_133FD8((uint)&T_03005C,param_9 & 0xffff);
    puVar6 = (undefined *)(uVar1 & 0xffff);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    if (&UNK_0000ad39 < puVar6) {
      puVar6 = (undefined *)0xffffad3a;
    }
  }
  if (param_3 == '\0') {
    iVar2 = __udiv32_r1_by_r0((param_14 & 0xffff) * 0x150d,0x13e9);
    puVar4 = (undefined *)((uint)puVar6 & 0xffff) + iVar2;
    if ((puVar4 < (undefined *)((uint)puVar6 & 0xffff)) || (&DAT_0000ffff < puVar4)) {
      puVar4 = (undefined *)0xffffffff;
    }
    uVar3 = SUB42(puVar4,0);
    if (uVar8 <= ((uint)puVar4 & 0xffff)) goto LAB_00123b68;
  }
  else {
    uVar1 = LK_135294((uint)&T_030050,param_2);
    uVar3 = (short)uVar1;
    if ((uVar1 & 0xffff) < uVar8) goto LAB_00123b68;
  }
  uVar3 = uVar7;
LAB_00123b68:
  if (param_13 != '\0') {
    uVar1 = LK_135294((uint)&T_03002C,param_2);
    uVar3 = (short)uVar1;
    if (uVar8 <= (uVar1 & 0xffff)) {
      uVar3 = uVar7;
    }
  }
  if ((param_11 != '\0') || (param_12 != '\0')) {
    uVar1 = LK_135294((uint)&T_030038,param_2);
    uVar3 = (short)uVar1;
    if (uVar8 <= (uVar1 & 0xffff)) {
      uVar3 = uVar7;
    }
  }
  if (param_10 == '\0') {
    *param_16 = uVar3;
  }
  else {
    uVar1 = LK_135294((uint)&T_030044,param_2);
    if ((uVar1 & 0xffff) < uVar8) {
      *param_16 = (short)uVar1;
    }
    else {
      *param_16 = uVar7;
    }
  }
  return;
}

