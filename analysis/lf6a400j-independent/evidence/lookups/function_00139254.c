
int FUN_00139254(byte *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  ushort *puVar10;
  ushort *puVar11;
  
  puVar1 = *(uint **)(param_1 + 0xc);
  puVar10 = *(ushort **)(param_1 + 4);
  uVar3 = param_2 & 0xffff;
  uVar6 = (uint)param_1[8];
  if (uVar3 < *puVar10) {
    param_2 = (uint)(short)*puVar10;
    uVar3 = (uint)*puVar10;
  }
  uVar4 = *param_1 - 1 & 0xffff;
  puVar10 = puVar10 + uVar4;
  if (*puVar10 < uVar3) {
    param_2 = (uint)(short)*puVar10;
    uVar3 = (uint)*puVar10;
  }
  do {
    puVar11 = puVar10;
    puVar10 = puVar11 + -1;
    uVar4 = uVar4 - 1;
  } while (uVar3 < *puVar10);
  psVar9 = (short *)(*(int *)(param_1 + 0x10) + uVar6 * (uVar4 & 0xffff) * 2);
  if (param_3 < *puVar1) {
    param_3 = *puVar1;
  }
  if (puVar1[uVar6 - 1] < param_3) {
    param_3 = puVar1[uVar6 - 1];
  }
  while (puVar2 = puVar1 + 1, *puVar2 < param_3) {
    psVar9 = psVar9 + 1;
    puVar1 = puVar2;
  }
  iVar5 = param_3 - *puVar1;
  iVar7 = *puVar2 - param_3;
  if (iVar5 + iVar7 == 0) {
    iVar8 = (int)*psVar9;
    iVar5 = (int)psVar9[uVar6];
  }
  else {
    iVar8 = (*(code *)PTR_FUN_00139360)(iVar5,iVar7,*psVar9,psVar9[1]);
    iVar5 = (*(code *)PTR_FUN_00139360)(iVar5,iVar7,psVar9[uVar6],(psVar9 + uVar6)[1]);
  }
  uVar3 = (param_2 - (int)(short)*puVar10) + ((int)(short)*puVar11 - param_2);
  if ((uVar3 & 0xffff) != 0) {
    iVar8 = (*(code *)PTR_FUN_00139364)(param_2 - (int)(short)*puVar10,uVar3,iVar5);
  }
  return iVar8;
}

