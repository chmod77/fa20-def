
int FUN_0016b238(int *param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar2 = 0;
      (uVar1 = uVar2 & 0xff, uVar1 < *(byte *)(param_1 + 2) &&
      (uVar2 = uVar2 & 0xff, *(byte *)(param_1[1] + uVar2) <= param_2)); uVar2 = uVar2 + 1) {
  }
  if (uVar1 != 0) {
    uVar2 = uVar2 - 1;
  }
  return (int)*(short *)(*param_1 + (uVar2 & 0xff) * 2);
}

