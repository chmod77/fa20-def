
undefined4 FUN_0013714c(byte *param_1,ushort param_2,ushort param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  
  puVar1 = *(ushort **)(param_1 + 0xc);
  puVar10 = *(ushort **)(param_1 + 4);
  uVar5 = (uint)param_1[8];
  if (param_2 < *puVar10) {
    param_2 = *puVar10;
  }
  if (puVar10[*param_1 - 1] < param_2) {
    param_2 = puVar10[*param_1 - 1];
  }
  uVar3 = 0;
  while (puVar11 = puVar10 + 1, *puVar11 < param_2) {
    uVar3 = uVar3 + 1;
    puVar10 = puVar11;
  }
  puVar9 = (undefined4 *)(*(int *)(param_1 + 0x10) + uVar5 * (uVar3 & 0xffff) * 4);
  if (param_3 < *puVar1) {
    param_3 = *puVar1;
  }
  if (puVar1[uVar5 - 1] < param_3) {
    param_3 = puVar1[uVar5 - 1];
  }
  while (puVar2 = puVar1 + 1, *puVar2 < param_3) {
    puVar9 = puVar9 + 1;
    puVar1 = puVar2;
  }
  iVar7 = (uint)param_3 - (uint)*puVar1;
  iVar8 = (uint)*puVar2 - (uint)param_3;
  if (iVar7 + iVar8 == 0) {
    uVar6 = *puVar9;
    uVar4 = puVar9[uVar5];
  }
  else {
    uVar6 = (*(code *)PTR_FUN_00137260)(iVar7,iVar8,*puVar9,puVar9[1]);
    uVar4 = (*(code *)PTR_FUN_00137260)(iVar7,iVar8,puVar9[uVar5],(puVar9 + uVar5)[1]);
  }
  iVar7 = (uint)param_2 - (uint)*puVar10;
  iVar8 = (uint)*puVar11 - (uint)param_2;
  if (iVar7 + iVar8 != 0) {
    uVar6 = (*(code *)PTR_FUN_00137260)(iVar7,iVar8,uVar6,uVar4);
  }
  return uVar6;
}

