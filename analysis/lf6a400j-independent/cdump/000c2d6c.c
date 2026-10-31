
/* WARNING: Removing unreachable block (ram,0x000c30d8) */
/* WARNING: Removing unreachable block (ram,0x000c3204) */
/* WARNING: Removing unreachable block (ram,0x000c3246) */
/* WARNING: Removing unreachable block (ram,0x000c3112) */
/* WARNING: Removing unreachable block (ram,0x000c30ca) */
/* WARNING: Removing unreachable block (ram,0x000c2edc) */
/* WARNING: Removing unreachable block (ram,0x000c310c) */
/* WARNING: Removing unreachable block (ram,0x000c31f0) */
/* WARNING: Removing unreachable block (ram,0x000c324c) */
/* WARNING: Removing unreachable block (ram,0x000c3018) */
/* WARNING: Removing unreachable block (ram,0x000c2ef4) */
/* WARNING: Removing unreachable block (ram,0x000c2f08) */
/* WARNING: Removing unreachable block (ram,0x000c2f10) */
/* WARNING: Removing unreachable block (ram,0x000c3180) */
/* WARNING: Removing unreachable block (ram,0x000c3198) */
/* WARNING: Removing unreachable block (ram,0x000c319a) */
/* WARNING: Removing unreachable block (ram,0x000c31a6) */
/* WARNING: Removing unreachable block (ram,0x000c31b4) */
/* WARNING: Removing unreachable block (ram,0x000c31aa) */
/* WARNING: Removing unreachable block (ram,0x000c31ba) */
/* WARNING: Removing unreachable block (ram,0x000c319e) */
/* WARNING: Removing unreachable block (ram,0x000c31c0) */
/* WARNING: Removing unreachable block (ram,0x000c327c) */
/* WARNING: Removing unreachable block (ram,0x000c327e) */
/* WARNING: Removing unreachable block (ram,0x000c3288) */
/* WARNING: Removing unreachable block (ram,0x000c328a) */
/* WARNING: Removing unreachable block (ram,0x000c3296) */
/* WARNING: Removing unreachable block (ram,0x000c32a4) */
/* WARNING: Removing unreachable block (ram,0x000c329a) */
/* WARNING: Removing unreachable block (ram,0x000c32aa) */
/* WARNING: Removing unreachable block (ram,0x000c328e) */
/* WARNING: Removing unreachable block (ram,0x000c32b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c2d6c(uint param_1,uint param_2,char param_3,uint param_4)

{
  undefined1 *puVar1;
  ushort uVar2;
  short sVar3;
  undefined1 *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  short *in_stack_00000020;
  undefined2 *in_stack_00000024;
  undefined1 *in_stack_00000028;
  ushort *in_stack_0000002c;
  undefined1 *in_stack_00000030;
  undefined2 *in_stack_00000034;
  undefined2 *in_stack_00000038;
  uint uStack_68;
  undefined2 uStack_40;
  
  param_2 = param_2 & 0xff;
  iVar6 = (param_2 * (in_stack_00000018 & 0xffff) >> 4) + param_2 * -1000;
  puVar4 = (undefined1 *)0xffffffff;
  if ((iVar6 < (int)&DAT_0000c180) && (puVar4 = (undefined1 *)0x0, -0x3e81 < iVar6)) {
    puVar4 = &LAB_00003e80 + iVar6;
  }
  uVar7 = 0;
  if (-0x11 < (short)-(short)param_2) {
    uVar7 = (int)(short)-(short)param_2 + 0x10;
  }
  iVar6 = ((in_stack_0000001c & 0xffff) * (uVar7 & 0xff) >> 4) + (uVar7 & 0xff) * -1000;
  puVar1 = (undefined1 *)0xffffffff;
  if ((iVar6 < (int)&DAT_0000c180) && (puVar1 = (undefined1 *)0x0, -0x3e81 < iVar6)) {
    puVar1 = &LAB_00003e80 + iVar6;
  }
  puVar8 = (undefined *)(((uint)puVar4 & 0xffff) + ((uint)puVar1 & 0xffff));
  puVar9 = (undefined *)0xffffffff;
  if ((puVar8 < &UNK_00013e80) && (puVar9 = (undefined *)0x0, (undefined *)0x3e7f < puVar8)) {
    puVar9 = puVar8 + -16000;
  }
  *in_stack_00000024 = (short)puVar9;
  *in_stack_00000030 = 0;
  *in_stack_00000034 = 16000;
  if (param_3 == '\0') {
    iVar6 = (int)&DAT_0000ff00 - (uint)_DAT_fffeca48;
  }
  else {
    iVar6 = -(uint)_DAT_fffeca48;
  }
  uVar7 = LK_13503C((uint)&T_02E918,param_1 & 0xffff);
  iVar6 = __sdiv32_r1_by_r0(iVar6 * (uVar7 & 0xff),0xff);
  uVar7 = iVar6 + (uint)_DAT_fffeca48;
  if ((int)uVar7 < (int)&DAT_00010000) {
    puVar8 = (undefined *)(uVar7 & 0xffff);
    if ((int)uVar7 < 0) {
      puVar8 = (undefined *)0x0;
    }
  }
  else {
    puVar8 = &DAT_0000ffff;
  }
  if (&DAT_0000fe80 < puVar8) {
    puVar8 = (undefined *)0xffffff00;
  }
  if ((DAT_fffeca4b == '\0') || (&DAT_0000ff00 < (undefined *)((uint)puVar8 & 0xffff))) {
    puVar8 = (undefined *)0xffffff00;
    uStack_40 = 0xff00;
  }
  else {
    uStack_40 = SUB42(puVar8,0);
  }
  pcVar5 = __udiv32_r1_by_r0;
  iVar6 = __udiv32_r1_by_r0(((uint)puVar8 & 0xffff) * ((uint)puVar9 & 0xffff),(int)&DAT_0000ff00);
  uVar7 = (*pcVar5)((uint)puVar8 & 0xffff);
  iVar6 = iVar6 - (uVar7 & 0xffff);
  uVar2 = 0xffff;
  if ((iVar6 < (int)&DAT_0000c180) && (uVar2 = 0, -0x3e81 < iVar6)) {
    uVar2 = (short)iVar6 + 16000;
  }
  *in_stack_0000002c = uVar2;
  *in_stack_00000028 = (char)((ushort)uStack_40 >> 8);
  uVar7 = 0x3e800000;
  if ((undefined1 *)(_DAT_fffeca44 >> 0x10) < &LAB_00003e80) {
    uVar7 = 0x3e808000;
  }
  _DAT_fffeca44 = uVar7 + _DAT_fffeca44;
  uVar7 = uVar7 <= _DAT_fffeca44 ^ 1;
  if (_DAT_fffeca44 + 0x3e800000 < _DAT_fffeca44) {
    uVar7 = uVar7 + 1;
  }
  uStack_68 = _DAT_fffeca44 + 0xc1800000;
  if (_DAT_fffeca44 + 0x3e800000 < uStack_68) {
    uVar7 = uVar7 - 1;
  }
  if ((int)uVar7 < 1) {
    if ((int)uVar7 < 0) {
      uStack_68 = 0;
    }
  }
  else {
    uStack_68 = 0xffffffff;
  }
  *in_stack_00000038 = (short)(uStack_68 >> 0x10);
  sVar3 = (short)((int)(((uint)uVar2 - ((uStack_68 >> 0x10) + (param_4 & 0xffff) + -32000)) + -16000
                       ) >> 3);
  if (sVar3 < -10000) {
    *in_stack_00000020 = 0;
  }
  else {
    *in_stack_00000020 = sVar3 + 10000;
  }
  DAT_fffeca4a = 0;
  _DAT_fffeca48 = uStack_40;
  DAT_fffeca4b = 1;
  _DAT_fffeca44 = uStack_68;
  return;
}

