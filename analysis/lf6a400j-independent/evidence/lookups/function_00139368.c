
int FUN_00139368(byte *param_1,uint param_2,short param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  puVar3 = PTR_FUN_001394c8;
  psVar4 = *(short **)(param_1 + 0xc);
  puVar12 = *(ushort **)(param_1 + 4);
  uVar7 = param_2 & 0xffff;
  uVar6 = (uint)param_1[8];
  if (uVar7 < *puVar12) {
    param_2 = (uint)(short)*puVar12;
    uVar7 = (uint)*puVar12;
  }
  uVar8 = *param_1 - 1 & 0xffff;
  puVar12 = puVar12 + uVar8;
  if (*puVar12 < uVar7) {
    param_2 = (uint)(short)*puVar12;
    uVar7 = (uint)*puVar12;
  }
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -1;
    uVar8 = uVar8 - 1;
  } while (uVar7 < *puVar12);
  puVar11 = (ushort *)(*(int *)(param_1 + 0x10) + uVar6 * (uVar8 & 0xffff) * 2);
  if (param_3 < *psVar4) {
    param_3 = *psVar4;
  }
  if (psVar4[uVar6 - 1] < param_3) {
    param_3 = psVar4[uVar6 - 1];
  }
  while (psVar5 = psVar4 + 1, *psVar5 < param_3) {
    puVar11 = puVar11 + 1;
    psVar4 = psVar5;
  }
  uVar1 = *puVar11;
  iVar10 = (int)(short)uVar1;
  uVar2 = puVar11[1];
  if (*psVar5 == *psVar4) {
    iVar9 = (int)(short)puVar11[uVar6];
  }
  else {
    uVar7 = (uint)uVar1;
    if (uVar7 < uVar2) {
      iVar10 = (*(code *)PTR_FUN_001394c8)(uVar6,uVar7,(uint)uVar2 - (uint)uVar1);
      iVar10 = iVar10 + (uint)uVar1;
    }
    else {
      iVar9 = (*(code *)PTR_FUN_001394c8)(uVar6,uVar7 - uVar2);
      iVar10 = iVar10 - iVar9;
    }
    uVar1 = puVar11[uVar6];
    if (uVar1 < (puVar11 + uVar6)[1]) {
      iVar9 = (*(code *)puVar3)();
      iVar9 = iVar9 + (uint)uVar1;
    }
    else {
      iVar9 = (*(code *)puVar3)();
      iVar9 = (short)uVar1 - iVar9;
    }
  }
  uVar6 = (param_2 - (int)(short)*puVar12) + ((int)(short)*puVar13 - param_2);
  if ((uVar6 & 0xffff) != 0) {
    iVar10 = (*(code *)PTR_FUN_001394c8)(param_2 - (int)(short)*puVar12,uVar6,iVar9);
  }
  return iVar10;
}

