
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001507aa(void)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = 0; (uVar1 & 0xff) < 4; uVar1 = uVar1 + 1) {
    uVar1 = uVar1 & 0xff;
    *(undefined1 *)(uVar1 - 0xd330) = 0;
    *(undefined1 *)(uVar1 - 0xd32c) = 0;
    *(undefined1 *)(uVar1 - 0xd2d3) = 0;
    *(undefined1 *)(uVar1 - 0xd318) = 0;
    iVar2 = uVar1 * 2;
    *(undefined2 *)(iVar2 + -0xd314) = 0;
    *(undefined1 *)(uVar1 - 0xd30c) = 0;
    *(undefined2 *)(iVar2 + -0xd308) = 0;
    *(undefined1 *)(uVar1 - 0xd300) = 0;
    *(undefined2 *)(iVar2 + -0xd2fc) = 0;
    iVar2 = uVar1 * 4;
    *(undefined4 *)(iVar2 + -0xd2f4) = 0;
    *(undefined4 *)(iVar2 + -0xd2e4) = 0;
    *(undefined4 *)(iVar2 + -0xd2cc) = 0;
    *(undefined4 *)(iVar2 + -0xd2bc) = 0;
  }
  _DAT_ffff2d54 = 0;
  DAT_ffff2d2c = 0;
  return;
}

