
void FUN_00159b8e(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = FUN_00159cb8((&PTR_DAT_0001bef0)[iVar5],(int)(char)(&DAT_0001c2cc)[iVar5]);
    iVar2 = FUN_00159cb8((&PTR_DAT_0001bf10)[iVar5],(int)(char)(&DAT_0001c2d4)[iVar5]);
    puVar4 = (undefined *)(iVar1 * iVar1 + iVar2 * iVar2);
    if (puVar4 < (undefined *)0x1000000) {
      if (puVar4 < &DAT_00010000) {
        if (puVar4 < &UNK_00000100) {
          iVar1 = (int)*(short *)((int)&PTR_DAT_0001bf30 + (int)puVar4 * 2);
          uVar3 = ((((*(short *)((int)&PTR_DAT_0001bf30 + (int)puVar4 * 2 + 2) - iVar1 & 0xffffU) *
                     ((uint)puVar4 & 0xff) + 0x80 & 0xffff) >> 8) + iVar1 & 0xffff) >> 0xc;
        }
        else {
          iVar2 = ((uint)puVar4 >> 8) * 2;
          iVar1 = (int)*(short *)((int)&PTR_DAT_0001bf30 + iVar2);
          uVar3 = ((((*(short *)((int)&PTR_DAT_0001bf30 + iVar2 + 2) - iVar1 & 0xffffU) *
                     ((uint)puVar4 >> 8 & 0xff) + 0x80 & 0xffff) >> 8) + iVar1 & 0xffff) >> 8;
        }
      }
      else {
        iVar2 = ((uint)puVar4 >> 0x10) * 2;
        iVar1 = (int)*(short *)((int)&PTR_DAT_0001bf30 + iVar2);
        uVar3 = ((((*(short *)((int)&PTR_DAT_0001bf30 + iVar2 + 2) - iVar1 & 0xffffU) *
                   ((uint)puVar4 >> 0x10 & 0xff) + 0x80 & 0xffff) >> 8) + iVar1 & 0xffff) >> 4;
      }
    }
    else {
      iVar1 = ((uint)puVar4 >> 0x18) * 2;
      iVar2 = (int)*(short *)((int)&PTR_DAT_0001bf30 + iVar1);
      uVar3 = iVar2 + (((*(short *)((int)&PTR_DAT_0001bf30 + iVar1 + 2) - iVar2 & 0xffffU) *
                        ((uint)puVar4 >> 0x18) + 0x80 & 0xffff) >> 8);
    }
    *(short *)(iVar5 * 2 + -0xd122) = (short)((uVar3 & 0xffff) >> 2);
  }
  return;
}

