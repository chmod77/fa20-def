
int FUN_00133998(byte *param_1,byte param_2)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 4);
  iVar1 = 0;
  if ((*pbVar2 < param_2) && (iVar1 = *param_1 - 1, param_2 < pbVar2[iVar1])) {
    for (iVar1 = 1; param_2 != pbVar2[iVar1]; iVar1 = iVar1 + 1) {
      if (param_2 < pbVar2[iVar1]) {
        iVar1 = iVar1 + -1;
        break;
      }
    }
  }
  return (int)*(char *)(*(int *)(param_1 + 8) + iVar1);
}

