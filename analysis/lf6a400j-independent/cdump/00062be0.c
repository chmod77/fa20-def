
int FUN_00062be0(char *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (int)param_1[1];
  if (*param_1 == '\0') {
    if (**(ushort **)(param_1 + 8) < *(ushort *)(param_1 + 4)) {
      **(undefined2 **)(param_1 + 8) = 0;
    }
    else {
      **(short **)(param_1 + 8) = **(short **)(param_1 + 8) - *(short *)(param_1 + 4);
    }
  }
  else if (*(ushort *)(param_1 + 6) < **(ushort **)(param_1 + 8)) {
    iVar1 = 1;
  }
  else {
    uVar2 = FUN_00001540((uint)**(ushort **)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2));
    **(undefined2 **)(param_1 + 8) = uVar2;
  }
  return iVar1;
}

