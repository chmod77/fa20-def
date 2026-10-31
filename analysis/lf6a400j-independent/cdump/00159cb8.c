
uint FUN_00159cb8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)(&DAT_ffff2d80 + param_2 * 4);
  uVar4 = 0;
  for (iVar2 = *param_1; param_1 = param_1 + 1, 0 < iVar2; iVar2 = iVar2 + -1) {
    iVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    uVar4 = uVar4 + iVar3 * *param_1;
  }
  if ((int)uVar4 < 0) {
    uVar4 = -(-uVar4 >> 0x10);
  }
  else {
    uVar4 = uVar4 >> 0x10;
  }
  return uVar4;
}

