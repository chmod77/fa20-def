
void FUN_00159e64(int param_1,undefined1 *param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = 0;
  for (bVar2 = 0; bVar2 < 8; bVar2 = bVar2 + 1) {
    *(undefined2 *)(param_1 + iVar1) = *(undefined2 *)(iVar1 + -0xd200);
    iVar1 = iVar1 + 2;
  }
  *param_2 = DAT_ffff2eee;
  return;
}

