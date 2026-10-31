
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ca20(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  
  iVar2 = 0;
  for (uVar4 = 0; uVar4 < 4; uVar4 = uVar4 + 1) {
    FUN_0006cabe(&DAT_fffee7ea + iVar2,&DAT_0001b968,0x16);
    iVar2 = iVar2 + 0x16;
  }
  iVar3 = 0;
  iVar2 = 0;
  for (uVar4 = 0; uVar4 < 0x12; uVar4 = uVar4 + 1) {
    FUN_0006cabe(iVar2 + -0x117be,&DAT_0001b968,0x16);
    *(undefined2 *)(iVar3 + -0x11506) = 0;
    *(undefined2 *)(iVar3 + -0x11504) = 0;
    iVar2 = iVar2 + 0x16;
    iVar3 = iVar3 + 4;
  }
  _DAT_fffee9ce = 0;
  _DAT_fffee9d0 = 0;
  for (uVar1 = 0; (uVar1 & 0xffff) < 8; uVar1 = (uVar1 & 0xffff) + 1) {
    *(undefined1 *)((uVar1 & 0xffff) - 0x11476) = 0;
  }
  iVar2 = 0;
  for (uVar4 = 0; uVar4 < 0xd8; uVar4 = uVar4 + 1) {
    *(undefined1 *)(iVar2 + -0x1162e) = 0;
    iVar2 = iVar2 + 1;
  }
  return;
}

