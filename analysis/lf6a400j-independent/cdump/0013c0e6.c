
int FUN_0013c0e6(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)DAT_ffff2306 + (int)DAT_ffff2307 + (int)DAT_ffff2308;
  if (DAT_ffff2505 != 0) {
    for (uVar2 = 0; (uVar2 & 0xff) < (uint)DAT_ffff2505; uVar2 = (uVar2 & 0xff) + 1) {
      iVar1 = iVar1 + (uint)*(byte *)((uVar2 & 0xff) - 0xdcf7);
    }
  }
  return iVar1;
}

