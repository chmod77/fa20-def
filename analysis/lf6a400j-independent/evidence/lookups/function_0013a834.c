
int FUN_0013a834(byte *param_1,uint param_2,ushort param_3)

{
  char cVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  char *pcVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  
  puVar2 = *(ushort **)(param_1 + 0xc);
  uVar4 = (ushort)param_1[8];
  puVar10 = *(ushort **)(param_1 + 4);
  uVar5 = param_2 & 0xffff;
  if (uVar5 < *puVar10) {
    param_2 = (uint)(short)*puVar10;
    uVar5 = (uint)*puVar10;
  }
  if (puVar10[*param_1 - 1] < uVar5) {
    param_2 = (uint)(short)puVar10[*param_1 - 1];
    uVar5 = (uint)puVar10[*param_1 - 1];
  }
  uVar6 = 0;
  while (puVar11 = puVar10 + 1, *puVar11 < uVar5) {
    uVar6 = uVar6 + 1;
    puVar10 = puVar11;
  }
  if (param_3 < *puVar2) {
    param_3 = *puVar2;
  }
  uVar5 = (int)(short)uVar4 - 1;
  puVar2 = puVar2 + (uVar5 & 0xffff);
  if (*puVar2 < param_3) {
    param_3 = *puVar2;
  }
  do {
    puVar3 = puVar2;
    puVar2 = puVar3 + -1;
    uVar5 = uVar5 - 1;
  } while (param_3 < *puVar2);
  pcVar8 = (char *)(*(int *)(param_1 + 0x10) + (uint)uVar4 * (uVar6 & 0xffff) + (uVar5 & 0xffff));
  if (*puVar3 == *puVar2) {
    iVar9 = (int)*pcVar8;
    cVar1 = pcVar8[uVar4];
  }
  else {
    pcVar7 = (code *)PTR_FUN_0013a974;
    iVar9 = (*(code *)PTR_FUN_0013a974)();
    cVar1 = (*pcVar7)();
  }
  uVar5 = (param_2 - (int)(short)*puVar10) + ((int)(short)*puVar11 - param_2);
  if ((uVar5 & 0xffff) != 0) {
    iVar9 = (*(code *)PTR_FUN_0013a974)(param_2 - (int)(short)*puVar10 & 0xffff,uVar5,cVar1);
  }
  return iVar9;
}

