
void FUN_00077008(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  
  iVar1 = 0;
  iVar3 = -0x8120;
  for (bVar4 = 0; bVar4 < 0x14; bVar4 = bVar4 + 1) {
    for (uVar2 = 0; (uVar2 & 0xff) < 10; uVar2 = uVar2 + 1) {
      uVar2 = uVar2 & 0xff;
      *(undefined4 *)(uVar2 * 4 + iVar1 + -0x8440) = 0;
      *(undefined1 *)(iVar3 + uVar2) = 0;
    }
    iVar1 = iVar1 + 0x28;
    iVar3 = iVar3 + 10;
  }
  iVar1 = -0x8058;
  for (uVar2 = 0; (uVar2 & 0xff) < 0x32; uVar2 = (uVar2 & 0xff) + 1) {
    *(undefined1 *)((uVar2 & 0xff) - 0x7ae0) = 0;
    iVar3 = 0;
    for (bVar4 = 0; bVar4 < 7; bVar4 = bVar4 + 1) {
      *(undefined4 *)(iVar1 + iVar3) = 0;
      iVar3 = iVar3 + 4;
    }
    iVar1 = iVar1 + 0x1c;
  }
  return;
}

