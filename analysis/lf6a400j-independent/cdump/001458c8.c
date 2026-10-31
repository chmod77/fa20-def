
void FUN_001458c8(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  for (bVar3 = 0; bVar3 < 0xb; bVar3 = bVar3 + 1) {
    *(undefined2 *)(iVar1 + -0xe598) = **(undefined2 **)((int)&DAT_00162044 + iVar2);
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 2;
  }
  return;
}

