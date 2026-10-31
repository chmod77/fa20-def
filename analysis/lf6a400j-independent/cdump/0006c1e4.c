
void FUN_0006c1e4(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  
  bVar6 = 0;
  bVar5 = 0x80;
  bVar7 = 0;
  for (iVar8 = 0xdf; iVar8 = (int)(short)iVar8, -1 < iVar8; iVar8 = iVar8 + -1) {
    uVar2 = FUN_0006c1d4(iVar8);
    iVar3 = iVar8;
    if (iVar8 < 0) {
      iVar3 = iVar8 + 7;
    }
    bVar9 = (&DAT_fffef749)[iVar8];
    cVar1 = (&DAT_0001b1f8)[iVar8];
    if (((int)cVar1 & 3U) != 1) {
      bVar9 = bVar9 & 0xf7;
    }
    uVar4 = (uint)(byte)(&DAT_0001b97e)[iVar3 >> 3 & 0xff];
    uVar2 = __shl_r0_by_r1(1,uVar2 & 0xff);
    if ((uVar2 & uVar4) == 0) {
      bVar9 = bVar9 & 0xf7;
    }
    bVar6 = bVar6 | bVar9;
    if (((int)cVar1 & 0x90U) == 0x90) {
      bVar7 = bVar7 | bVar9;
      bVar5 = bVar5 & bVar9;
    }
  }
  bVar6 = bVar6 & 0x7e;
  if ((DAT_fffee706 & 1) != 0) {
    bVar6 = bVar6 | 1;
  }
  DAT_fffee706 = bVar6;
  DAT_fffeeab2 = bVar7 & 0x7e | bVar5;
  return;
}

