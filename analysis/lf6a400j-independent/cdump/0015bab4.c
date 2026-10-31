
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015bab4(void)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  for (iVar1 = 0;
      (DAT_ffff20c6 = 0x20, bVar2 < 0x10 &&
      (DAT_ffff20c6 = bVar2, _DAT_ffff20b4 != *(int *)((int)&DAT_00163834 + iVar1)));
      iVar1 = iVar1 + 4) {
    bVar2 = bVar2 + 1;
  }
  return;
}

