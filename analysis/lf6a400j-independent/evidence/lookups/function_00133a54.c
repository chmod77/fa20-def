
int FUN_00133a54(byte *param_1,ushort param_2)

{
  int iVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 4);
  iVar1 = 0;
  if ((*puVar2 < param_2) && (iVar1 = (uint)*param_1 * 2 + -2, param_2 < puVar2[*param_1 - 1])) {
    for (iVar1 = 2; param_2 != *(ushort *)(iVar1 + (int)puVar2); iVar1 = iVar1 + 2) {
      if (param_2 < *(ushort *)(iVar1 + (int)puVar2)) {
        iVar1 = iVar1 + -2;
        break;
      }
    }
  }
  return (int)*(short *)(*(int *)(param_1 + 8) + iVar1);
}

