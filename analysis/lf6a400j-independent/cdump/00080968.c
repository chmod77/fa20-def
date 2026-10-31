
/* WARNING: Removing unreachable block (ram,0x00080a06) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00080968(uint param_1,uint param_2,uint param_3,uint param_4,ushort param_5,ushort param_6,
                 char param_7,uint param_8,short *param_9,undefined2 *param_10,undefined2 *param_11,
                 undefined2 *param_12)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined *puVar8;
  
  param_1 = param_1 & 0xffff;
  iVar3 = param_1 - (param_2 & 0xffff);
  uVar2 = 0x7fff;
  if ((iVar3 < 0x8000) && (uVar2 = 0xffff8000, -0x8001 < iVar3)) {
    uVar2 = (uint)(short)iVar3;
  }
  uVar2 = LK_1367E0((uint)&T_02C360,param_1,uVar2);
  uVar1 = LK_133F40((uint)&T_02C374,param_8 & 0xffff);
  if ((undefined1 *)(uVar1 & 0xffff) == &LAB_00003e80) {
    uVar4 = 0;
  }
  else {
    param_3 = param_3 & 0xffff;
    iVar3 = __sdiv32_r1_by_r0(param_3 * 0x100 + -0x3e8000,
                              (int)((undefined1 *)(uVar1 & 0xffff) + -16000));
    uVar4 = 0x7fff;
    if ((iVar3 < 0x8000) && (uVar4 = 0x8000, -0x8001 < iVar3)) {
      uVar4 = (ushort)iVar3;
    }
  }
  if (DAT_fffebabc == '\0') {
    uVar5 = 0x12;
  }
  else {
    uVar5 = 0x24;
  }
  DAT_fffebabc = param_6 <= uVar5;
  if (param_7 != '\0') {
    uVar4 = 0x100;
  }
  if (((bool)DAT_fffebabc) ||
     (puVar6 = &LAB_00003e80, &LAB_00003e80 < (undefined1 *)(uVar2 & 0xffff))) {
    puVar6 = (undefined1 *)(uVar2 & 0xffff);
  }
  *param_10 = (short)puVar6;
  uVar1 = (uint)param_5 - (uint)_DAT_fffebaba;
  uVar2 = 0x7fff;
  if (((int)uVar1 < 0x8000) && (uVar2 = uVar1, (int)uVar1 < -0x8000)) {
    uVar2 = 0xffff8000;
  }
  _DAT_fffebaba = _DAT_fffebab8;
  *param_12 = (short)uVar2;
  uVar2 = LK_1367E0((uint)&T_02C380,param_1,uVar2);
  *param_11 = (short)uVar2;
  puVar6 = puVar6 + ((uVar2 & 0xffff) - 32000);
  uVar1 = (uint)uVar4 * ((uint)puVar6 & 0xffff);
  uVar7 = (uint)uVar4 * ((uint)puVar6 >> 0x10);
  puVar8 = (undefined *)(((uint)(int)(short)uVar4 >> 0x10) * ((uint)puVar6 >> 0x10));
  uVar2 = (uVar1 >> 0x10) + uVar7;
  if (uVar2 < uVar7) {
    puVar8 = &DAT_00010000 + (int)puVar8;
  }
  uVar7 = ((uint)(int)(short)uVar4 >> 0x10) * ((uint)puVar6 & 0xffff) + uVar2;
  if (uVar7 < uVar2) {
    puVar8 = &DAT_00010000 + (int)puVar8;
  }
  puVar8 = puVar8 + (uVar7 >> 0x10);
  if ((int)puVar6 < 0) {
    puVar8 = puVar8 + -(int)(short)uVar4;
  }
  if ((short)uVar4 < 0) {
    puVar8 = puVar8 + -(int)puVar6;
  }
  iVar3 = (uVar7 * 0x10000 + (uVar1 & 0xffff) >> 8 | (int)puVar8 << 0x18) +
          ((param_3 & 0xffff) - (param_4 & 0xffff));
  if (iVar3 < (int)&DAT_0000c180) {
    if (iVar3 < -16000) {
      *param_9 = 0;
    }
    else {
      *param_9 = (short)iVar3 + 16000;
    }
  }
  else {
    *param_9 = -1;
  }
  _DAT_fffebab8 = param_5;
  return;
}

