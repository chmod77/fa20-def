
int FUN_00062c40(char *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (int)param_1[3];
  if (((*param_1 == '\0') || (param_1[1] != '\0')) || (param_1[2] != '\0')) {
    if (**(ushort **)(param_1 + 0xc) < *(ushort *)(param_1 + 6)) {
      **(undefined2 **)(param_1 + 0xc) = 0;
    }
    else {
      **(short **)(param_1 + 0xc) = **(short **)(param_1 + 0xc) - *(short *)(param_1 + 6);
    }
  }
  else if (*(ushort *)(param_1 + 8) < **(ushort **)(param_1 + 0xc)) {
    iVar1 = 1;
  }
  else {
    uVar2 = FUN_00001540((uint)**(ushort **)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 4));
    **(undefined2 **)(param_1 + 0xc) = uVar2;
  }
  return iVar1;
}

