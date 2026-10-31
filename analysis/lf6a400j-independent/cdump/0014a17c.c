
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014a17c(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  iVar2 = 0;
  iVar3 = 0;
  for (bVar4 = 0; bVar4 < 0xc; bVar4 = bVar4 + 1) {
    *(undefined2 *)(iVar2 + -0xe56c) = **(undefined2 **)((int)&DAT_00162674 + iVar3);
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 2;
  }
  iVar2 = 0x18;
  iVar3 = 0x30;
  for (uVar5 = 0xc; (uVar5 & 0xff) < 0x18; uVar5 = uVar5 + 1) {
    uVar1 = FUN_00001550(0xf0);
    FUN_0014a294(uVar5);
    *(undefined2 *)(iVar2 + -0xe56c) = **(undefined2 **)((int)&DAT_00162674 + iVar3);
    FUN_00001550(uVar1);
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 2;
  }
  iVar2 = 0x30;
  iVar3 = 0x60;
  for (bVar4 = 0x18; bVar4 < 0x20; bVar4 = bVar4 + 1) {
    *(undefined2 *)(iVar2 + -0xe56c) = **(undefined2 **)((int)&DAT_00162674 + iVar3);
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 2;
  }
  iVar2 = 0x40;
  for (uVar5 = 0x20; (uVar5 & 0xff) < 0x28; uVar5 = uVar5 + 1) {
    uVar1 = FUN_00001550(0xf0);
    FUN_0014a294(uVar5);
    *(undefined2 *)(iVar2 + -0xe56c) = _DAT_fffff832;
    FUN_00001550(uVar1);
    iVar2 = iVar2 + 2;
  }
  iVar2 = 0x50;
  for (uVar5 = 0x28; (uVar5 & 0xff) < 0x30; uVar5 = uVar5 + 1) {
    uVar1 = FUN_00001550(0xf0);
    FUN_0014a294(uVar5);
    *(undefined2 *)(iVar2 + -0xe56c) = _DAT_fffff820;
    FUN_00001550(uVar1);
    iVar2 = iVar2 + 2;
  }
  return;
}

