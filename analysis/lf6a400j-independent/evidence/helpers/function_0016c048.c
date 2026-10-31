
void FUN_0016c048(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_28;
  uint uStack_24;
  
  uVar2 = (param_3 & 0xffff) * (param_2 & 0xffff);
  uVar3 = (param_3 & 0xffff) * (param_2 >> 0x10);
  iVar4 = (param_3 >> 0x10) * (param_2 >> 0x10);
  uVar1 = uVar3 + (uVar2 >> 0x10);
  if (uVar1 < uVar3) {
    iVar4 = iVar4 + 0x10000;
  }
  uVar3 = uVar1 + (param_3 >> 0x10) * (param_2 & 0xffff);
  if (uVar3 < uVar1) {
    iVar4 = iVar4 + 0x10000;
  }
  uVar2 = uVar3 * 0x10000 + (uVar2 & 0xffff);
  uVar5 = (param_4 & 0xffff) * (param_1 & 0xffff);
  uVar6 = (param_4 & 0xffff) * (param_1 >> 0x10);
  iVar7 = (param_4 >> 0x10) * (param_1 >> 0x10);
  uVar1 = uVar6 + (uVar5 >> 0x10);
  if (uVar1 < uVar6) {
    iVar7 = iVar7 + 0x10000;
  }
  uVar6 = uVar1 + (param_4 >> 0x10) * (param_1 & 0xffff);
  if (uVar6 < uVar1) {
    iVar7 = iVar7 + 0x10000;
  }
  uStack_24 = uVar2 + uVar6 * 0x10000 + (uVar5 & 0xffff);
  local_28 = iVar4 + (uVar3 >> 0x10) + iVar7 + (uVar6 >> 0x10);
  if (uStack_24 < uVar2) {
    local_28 = local_28 + 1;
  }
  (*(code *)PTR_FUN_0016c124)(&local_28,param_1 + param_2);
  return;
}

