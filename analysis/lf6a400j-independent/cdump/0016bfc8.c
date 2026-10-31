
void FUN_0016bfc8(uint param_1,uint param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = (param_2 & 0xffff) * (param_1 & 0xffff);
  uVar3 = (param_2 & 0xffff) * (param_1 >> 0x10);
  iVar4 = (param_2 >> 0x10) * (param_1 >> 0x10);
  uVar1 = uVar3 + (uVar2 >> 0x10);
  if (uVar1 < uVar3) {
    iVar4 = iVar4 + 0x10000;
  }
  uVar3 = uVar1 + (param_2 >> 0x10) * (param_1 & 0xffff);
  if (uVar3 < uVar1) {
    iVar4 = iVar4 + 0x10000;
  }
  *param_4 = uVar3 * 0x10000 + (uVar2 & 0xffff);
  *param_3 = iVar4 + (uVar3 >> 0x10);
  return;
}

