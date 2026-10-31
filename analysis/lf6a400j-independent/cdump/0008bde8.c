
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008bde8(ushort param_1,char param_2,uint param_3,uint param_4,char param_5,char param_6,
                 uint param_7,ushort param_8,char param_9,short *param_10,ushort *param_11,
                 ushort *param_12)

{
  undefined *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  short sVar8;
  
  iVar4 = (param_3 & 0xffff) - (param_7 & 0xffff);
  uVar6 = 0xffffffff;
  if ((iVar4 < 0x8000) && (uVar6 = 0, -0x8001 < iVar4)) {
    uVar6 = iVar4 - 0x8000;
  }
  uVar5 = uVar6 & 0xffff;
  if (uVar5 != 0) {
    if (uVar5 == 0) {
      _DAT_fffebc64 = 0xffff;
    }
    else {
      puVar1 = (undefined *)__udiv32_r1_by_r0(0x545d0000,uVar6 & 0xffff);
      if (&DAT_0000ffff < puVar1) {
        puVar1 = &DAT_0000ffff;
      }
      _DAT_fffebc64 = (ushort)puVar1;
    }
  }
  if ((param_1 != 0x100) || (uVar7 = _DAT_fffebc64, uVar5 == 0)) {
    uVar7 = 0x8000;
  }
  puVar1 = (undefined *)((uint)uVar7 * (uint)param_1 >> 8);
  if (0xffff00 < (uint)uVar7 * (uint)param_1) {
    puVar1 = &DAT_0000ffff;
  }
  uVar7 = (ushort)puVar1;
  if ((param_5 == '\0') || (uVar2 = (ushort)param_4, (param_4 & 0xffff) < ((uint)puVar1 & 0xffff)))
  {
    uVar2 = uVar7;
  }
  uVar3 = uVar7;
  if ((param_6 == '\0') && (uVar3 = uVar2, param_9 != '\0')) {
    uVar3 = param_8;
  }
  *param_12 = uVar3;
  sVar8 = -0x8000;
  if (param_1 != 0) {
    puVar1 = (undefined *)__udiv32_r1_by_r0((uint)uVar3 << 8,(uint)param_1);
    if (&DAT_0000ffff < puVar1) {
      puVar1 = &DAT_0000ffff;
    }
    sVar8 = (short)puVar1;
  }
  *param_11 = uVar7;
  if (param_2 == '\x01') {
    *param_10 = sVar8 + -0x8000;
  }
  else {
    *param_10 = 0;
  }
  return;
}

