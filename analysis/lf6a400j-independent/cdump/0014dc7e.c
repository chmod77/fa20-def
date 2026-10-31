
void FUN_0014dc7e(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00001550(0x70);
  iVar2 = 0;
  for (iVar3 = 0; (short)iVar3 < 4; iVar3 = (short)iVar3 + 1) {
    FUN_0014d93c(*(int *)(param_1 + 0x78) + iVar2,0);
    iVar2 = iVar2 + 0x18;
  }
  FUN_00001550(uVar1);
  return;
}

