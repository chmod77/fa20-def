
void FUN_00159ed8(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  for (bVar3 = 0; bVar3 < 8; bVar3 = bVar3 + 1) {
    *(undefined4 *)(iVar2 + -0xd1ec) = 0;
    *(short *)(iVar1 + -0xd200) = (short)*(undefined4 *)(iVar2 + -0xd1ec);
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 2;
  }
  DAT_ffff2eee = 0;
  return;
}

