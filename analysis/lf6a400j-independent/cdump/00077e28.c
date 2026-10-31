
void FUN_00077e28(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = -0x7a81;
  for (uVar1 = 0; uVar3 = 0, (uVar1 & 0xff) < 5; uVar1 = (uVar1 & 0xff) + 1) {
    for (; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
      *(undefined1 *)(iVar2 + (uVar3 & 0xff)) = 0;
    }
    *(undefined1 *)((uVar1 & 0xff) - 0x78e7) = 0;
    iVar2 = iVar2 + 2;
  }
  DAT_ffff857e = 0;
  return;
}

