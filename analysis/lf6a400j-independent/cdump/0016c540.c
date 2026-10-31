
uint FUN_0016c540(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint in_r0;
  int iVar6;
  uint in_r1;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((in_r0 & 0xff) != 0) {
    iVar6 = in_r0 * 0x1000000;
    uVar7 = (in_r1 & 0xff) * 0x20000;
    uVar8 = uVar7 + in_r0 * -0x1000000;
    bVar3 = uVar8 <= uVar7;
    bVar2 = (uVar8 & 0x80000000) == 0;
    uVar8 = uVar8 * 2 | (uint)bVar3;
    uVar7 = (uint)bVar3 * (uVar8 + in_r0 * -0x1000000) + (uint)!bVar3 * (uVar8 + iVar6);
    cVar1 = bVar3 * (uVar8 < uVar7) + !bVar3 * (uVar7 < uVar8);
    bVar4 = bVar2 * cVar1 + (!bVar2 && cVar1 == '\0');
    uVar8 = uVar7 * 2 | (uint)((bVar4 & 1) == (bVar4 >> 1 & 1));
    bVar2 = (bVar4 & 1) == (bVar4 >> 1 & 1);
    bVar3 = (bool)(bVar4 >> 1 & 1) == ((uVar7 & 0x80000000) != 0);
    uVar9 = (uint)bVar2 * (uVar8 + in_r0 * -0x1000000) + (uint)!bVar2 * (uVar8 + iVar6);
    cVar1 = bVar2 * (uVar8 < uVar9) + !bVar2 * (uVar9 < uVar8);
    uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
    uVar10 = (uint)bVar4 << 8 & 0xfffffeff | uVar8;
    uVar5 = (uint)bVar4 << 8 & 0xfffffefe;
    uVar7 = uVar5 | uVar8;
    uVar10 = uVar9 * 2 | (uint)(((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1));
    bVar2 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar3 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
    uVar9 = (uint)bVar2 * (uVar10 + in_r0 * -0x1000000) + (uint)!bVar2 * (uVar10 + iVar6);
    cVar1 = bVar2 * (uVar10 < uVar9) + !bVar2 * (uVar9 < uVar10);
    uVar7 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
    uVar10 = uVar5 | uVar8 & 0xfffffeff | uVar7;
    uVar5 = uVar5 | uVar8 & 0xfffffefe;
    uVar8 = uVar5 | uVar7;
    uVar10 = uVar9 * 2 | (uint)(((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1));
    bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
    bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
    uVar9 = (uint)bVar2 * (uVar10 + in_r0 * -0x1000000) + (uint)!bVar2 * (uVar10 + iVar6);
    cVar1 = bVar2 * (uVar10 < uVar9) + !bVar2 * (uVar9 < uVar10);
    uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
    uVar10 = uVar5 | uVar7 & 0xfffffeff | uVar8;
    uVar5 = uVar5 | uVar7 & 0xfffffefe;
    uVar7 = uVar5 | uVar8;
    uVar10 = uVar9 * 2 | (uint)(((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1));
    bVar2 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar3 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
    uVar9 = (uint)bVar2 * (uVar10 + in_r0 * -0x1000000) + (uint)!bVar2 * (uVar10 + iVar6);
    cVar1 = bVar2 * (uVar10 < uVar9) + !bVar2 * (uVar9 < uVar10);
    uVar7 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
    uVar10 = uVar5 | uVar8 & 0xfffffeff | uVar7;
    uVar5 = uVar5 | uVar8 & 0xfffffefe;
    uVar8 = uVar5 | uVar7;
    uVar10 = uVar9 * 2 | (uint)(((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1));
    bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
    bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
    uVar9 = (uint)bVar2 * (uVar10 + in_r0 * -0x1000000) + (uint)!bVar2 * (uVar10 + iVar6);
    cVar1 = bVar2 * (uVar10 < uVar9) + !bVar2 * (uVar9 < uVar10);
    uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
    uVar10 = uVar5 | uVar7 & 0xfffffeff | uVar8;
    uVar5 = uVar5 | uVar7 & 0xfffffefe;
    uVar7 = uVar5 | uVar8;
    uVar10 = uVar9 * 2 | (uint)(((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1));
    bVar2 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar3 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
    uVar7 = (uint)bVar2 * (uVar10 + in_r0 * -0x1000000) + (uint)!bVar2 * (uVar10 + iVar6);
    cVar1 = bVar2 * (uVar10 < uVar7) + !bVar2 * (uVar7 < uVar10);
    uVar8 = uVar5 | uVar8 & 0xfffffeff |
            (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
    return uVar7 * 2 & 0xff | (uint)(((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1));
  }
  return 0;
}

