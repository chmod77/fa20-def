
void FUN_00159e8a(int param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = 0;
  for (bVar2 = 0; bVar2 < 4; bVar2 = bVar2 + 1) {
    *(undefined2 *)(param_1 + iVar1) = *(undefined2 *)(iVar1 + -0xd10e);
    iVar1 = iVar1 + 2;
  }
  return;
}

