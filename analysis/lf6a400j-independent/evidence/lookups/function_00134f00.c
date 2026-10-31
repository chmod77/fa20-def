
int FUN_00134f00(byte *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_1c;
  undefined4 auStack_18 [2];
  
  puVar5 = *(ushort **)(param_1 + 4);
  piVar7 = *(int **)(param_1 + 8);
  param_2 = param_2 & 0xffff;
  if (*puVar5 < param_2) {
    if (param_2 < puVar5[*param_1 - 1]) {
      while (puVar6 = puVar5 + 1, *puVar6 < param_2) {
        piVar7 = piVar7 + 1;
        puVar5 = puVar6;
      }
      uVar1 = *puVar5;
      uVar2 = *puVar6;
      iVar3 = *piVar7;
      iVar8 = piVar7[1];
      iVar4 = iVar3 - iVar8;
      if (iVar3 < iVar8) {
        iVar4 = -iVar4;
      }
      (*(code *)PTR_FUN_00134fa0)(iVar4,param_2 - uVar1,auStack_18,&local_1c);
      iVar4 = (*(code *)PTR_FUN_00134fa4)(auStack_18[0],local_1c,(uint)uVar2 - (uint)uVar1);
      if (iVar3 < iVar8) {
        iVar3 = iVar3 + iVar4;
      }
      else {
        iVar3 = iVar3 - iVar4;
      }
    }
    else {
      iVar3 = piVar7[*param_1 - 1];
    }
  }
  else {
    iVar3 = *piVar7;
  }
  return iVar3;
}

