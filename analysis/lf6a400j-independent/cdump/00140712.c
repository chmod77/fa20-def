
void FUN_00140712(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  
  puVar3 = &DAT_00014dc4;
  iVar2 = 0;
  for (iVar4 = 0; iVar4 < 0x70; iVar4 = iVar4 + 1) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined2 *)(&DAT_ffff3500 + iVar2) = uVar1;
    iVar2 = iVar2 + 2;
  }
  iVar2 = iVar4 << 1;
  for (; iVar4 < 0x9e; iVar4 = iVar4 + 1) {
    *(undefined2 *)(&DAT_ffff3500 + iVar2) = 0xffff;
    iVar2 = iVar2 + 2;
  }
  return;
}

