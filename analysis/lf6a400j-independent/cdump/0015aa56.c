
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015aa56(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0; (uVar2 & 0xff) < 4; uVar2 = uVar2 + 1) {
    uVar2 = uVar2 & 0xff;
    *(undefined1 *)(uVar2 - 0xd0f0) = 0;
    *(undefined1 *)(uVar2 - 0xd0f4) = 0;
    *(undefined4 *)(iVar1 + -0xd0e8) = 0;
    *(undefined4 *)(iVar1 + -0xd0e4) = 0;
    iVar1 = iVar1 + 8;
  }
  DAT_ffff2f14 = 0;
  DAT_ffff2f38 = 0;
  _DAT_ffff2f3c = 0;
  return;
}

