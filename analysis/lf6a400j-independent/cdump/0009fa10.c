
void FUN_0009fa10(void)

{
  int iVar1;
  byte bVar3;
  uint uVar2;
  
  iVar1 = 0;
  for (bVar3 = 0; bVar3 < 0x23; bVar3 = bVar3 + 1) {
    *(undefined2 *)(iVar1 + -0xc764) = 0;
    iVar1 = iVar1 + 2;
  }
  DAT_ffff3667 = 0;
  DAT_ffff3669 = 0xb;
  for (uVar2 = 0; (uVar2 & 0xff) < 0x23; uVar2 = (uVar2 & 0xff) + 1) {
    *(undefined1 *)((uVar2 & 0xff) - 0xc996) = 0;
  }
  DAT_ffff3668 = DAT_ffff3668 & 0xfa;
  return;
}

