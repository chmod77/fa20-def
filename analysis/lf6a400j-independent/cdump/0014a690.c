
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014a690(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ushort uVar5;
  int iVar6;
  ushort uVar4;
  
  if (3000 < (uint)(_DAT_fffff430 - _DAT_ffff1af8)) {
    uVar1 = (uint)DAT_fffff74f;
    for (uVar2 = 0; (uVar2 & 0xff) < 2; uVar2 = uVar2 + 1) {
      uVar2 = uVar2 & 0xff;
      uVar5 = *(ushort *)(&DAT_00162760)[uVar2];
      iVar6 = uVar2 * 0x40 + (uVar1 & 7) * 8;
      uVar4 = uVar5;
      if ((&DAT_0016276c)[iVar6] == '\x02') {
        uVar5 = uVar5 >> 6;
        puVar3 = (undefined *)((uint)_DAT_ffffabd0 * (uint)uVar5 >> 0xf);
        uVar4 = (ushort)puVar3;
        if (&DAT_0000ffc0 < puVar3) {
          uVar4 = 0xffc0;
        }
      }
      *(ushort *)(*(int *)(&DAT_00162768 + iVar6) + 2) = uVar4;
      **(ushort **)(&DAT_00162768 + iVar6) = uVar5;
    }
    FUN_0014a142((uVar1 & 7) + 1 & 7);
  }
  return;
}

