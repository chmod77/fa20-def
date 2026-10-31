
int FUN_0016bcec(int *param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar1 = uVar2 & 0xff, uVar1 < *(byte *)(param_1 + 2) &&
         (uVar2 = uVar2 & 0xff, *(ushort *)(param_1[1] + uVar2 * 2) <= param_2))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar1 != 0) {
    uVar2 = uVar2 - 1;
  }
  return (int)*(char *)(*param_1 + (uVar2 & 0xff));
}

