
void FUN_001458f0(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar1 = 0;
  for (bVar3 = 0; bVar3 < 0xb; bVar3 = bVar3 + 1) {
    *(undefined2 *)(param_1 + iVar1) = *(undefined2 *)(iVar1 + -0xe598);
    iVar1 = iVar1 + 2;
  }
  iVar1 = 0;
  iVar2 = 0x16;
  for (bVar3 = 0; bVar3 < 0x30; bVar3 = bVar3 + 1) {
    *(undefined2 *)(param_1 + iVar2) = *(undefined2 *)(iVar1 + -0xe56c);
    iVar1 = iVar1 + 2;
    iVar2 = iVar2 + 2;
  }
  return;
}

