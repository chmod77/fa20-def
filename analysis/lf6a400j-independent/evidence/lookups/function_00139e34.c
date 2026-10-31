
int FUN_00139e34(byte *param_1,byte param_2,ushort param_3)

{
  undefined *puVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  puVar1 = PTR_FUN_00139fa0;
  puVar7 = *(ushort **)(param_1 + 0xc);
  pbVar12 = *(byte **)(param_1 + 4);
  uVar4 = (uint)param_1[8];
  if (param_2 < *pbVar12) {
    param_2 = *pbVar12;
  }
  uVar6 = *param_1 - 1 & 0xffff;
  pbVar12 = pbVar12 + uVar6;
  if (*pbVar12 < param_2) {
    param_2 = *pbVar12;
  }
  do {
    pbVar13 = pbVar12;
    pbVar12 = pbVar13 + -1;
    uVar6 = uVar6 - 1;
  } while (param_2 < *pbVar12);
  psVar11 = (short *)(*(int *)(param_1 + 0x10) + uVar4 * (uVar6 & 0xffff) * 2);
  if (param_3 < *puVar7) {
    param_3 = *puVar7;
  }
  puVar5 = puVar7 + uVar4;
  if (puVar5[-1] < param_3) {
    param_3 = puVar5[-1];
  }
  while (puVar8 = puVar7 + 1, *puVar8 < param_3) {
    psVar11 = psVar11 + 1;
    puVar7 = puVar8;
  }
  iVar9 = (int)*psVar11;
  if (*puVar8 == *puVar7) {
    sVar3 = psVar11[uVar4];
  }
  else {
    if (iVar9 < psVar11[1]) {
      sVar2 = (*(code *)PTR_FUN_00139fa0)();
      iVar10 = (int)sVar2;
    }
    else {
      sVar2 = (*(code *)PTR_FUN_00139fa0)(PTR_FUN_00139fa0,puVar5,iVar9 - psVar11[1]);
      iVar10 = -(int)sVar2;
    }
    iVar9 = iVar10 + iVar9;
    sVar2 = psVar11[uVar4];
    if (sVar2 < (psVar11 + uVar4)[1]) {
      sVar3 = (*(code *)puVar1)();
      sVar3 = sVar3 + sVar2;
    }
    else {
      sVar3 = (*(code *)puVar1)();
      sVar3 = sVar2 - sVar3;
    }
  }
  if (*pbVar13 != *pbVar12) {
    iVar10 = (int)(short)iVar9;
    if (iVar10 < sVar3) {
      iVar9 = (*(code *)PTR_FUN_00139fa0)();
      iVar9 = iVar9 + iVar10;
    }
    else {
      uVar4 = (*(code *)PTR_FUN_00139fa0)();
      iVar9 = iVar10 - (uVar4 & 0xffff);
    }
  }
  return iVar9;
}

