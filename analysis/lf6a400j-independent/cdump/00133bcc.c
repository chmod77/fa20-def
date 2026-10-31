
/* WARNING: Unknown calling convention */

uint LK_133BCC(uint p0,uint p1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = p1 & 0xffff;
  puVar11 = *(ushort **)(p0 + 4);
  pbVar10 = *(byte **)(p0 + 8);
  if (*puVar11 < uVar12) {
    if (uVar12 < puVar11[*(byte *)p0 - 1]) {
      for (uVar8 = 2; uVar5 = (uint)*(ushort *)(uVar8 + (int)puVar11), uVar12 != uVar5;
          uVar8 = uVar8 + 2) {
        if (uVar12 <= uVar5) {
          uVar8 = uVar8 - 2;
          uVar5 = uVar5 - uVar12;
          uVar12 = uVar12 - *(ushort *)(uVar8 + (int)puVar11);
          bVar2 = true;
          goto LAB_00133c14;
        }
      }
      bVar2 = false;
LAB_00133c14:
      pbVar10 = pbVar10 + (uVar8 >> 1);
      if (bVar2) {
        iVar6 = uVar5 + uVar12;
        iVar7 = iVar6 * 0x10000;
        uVar8 = ((uint)*pbVar10 * (uVar5 & 0xffff) + (uint)pbVar10[1] * (uVar12 & 0xffff)) * 2;
        uVar12 = uVar8 + iVar6 * -0x10000;
        bVar3 = uVar12 <= uVar8;
        bVar2 = (uVar12 & 0x80000000) == 0;
        uVar12 = uVar12 * 2 | (uint)bVar3;
        uVar8 = (uint)bVar3 * (uVar12 + iVar6 * -0x10000) + (uint)!bVar3 * (uVar12 + iVar7);
        cVar1 = bVar3 * (uVar12 < uVar8) + !bVar3 * (uVar8 < uVar12);
        bVar4 = bVar2 * cVar1 + (!bVar2 && cVar1 == '\0');
        uVar12 = uVar8 * 2 | (uint)((bVar4 & 1) == (bVar4 >> 1 & 1));
        bVar2 = (bVar4 & 1) == (bVar4 >> 1 & 1);
        bVar3 = (bool)(bVar4 >> 1 & 1) == ((uVar8 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar12 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar12 + iVar7);
        cVar1 = bVar2 * (uVar12 < uVar9) + !bVar2 * (uVar9 < uVar12);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = (uint)bVar4 << 8 & 0xfffffeff | uVar12;
        uVar5 = (uint)bVar4 << 8 & 0xfffffefe;
        uVar8 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar8;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar8;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar8 & 0xfffffeff | uVar12;
        uVar5 = uVar5 | uVar8 & 0xfffffefe;
        uVar8 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar8;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar8;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar8 & 0xfffffeff | uVar12;
        uVar5 = uVar5 | uVar8 & 0xfffffefe;
        uVar8 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar8;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar8;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar8 & 0xfffffeff | uVar12;
        uVar5 = uVar5 | uVar8 & 0xfffffefe;
        uVar8 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar8;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar8;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar8 & 0xfffffeff | uVar12;
        uVar5 = uVar5 | uVar8 & 0xfffffefe;
        uVar8 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar8;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar8;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar8 & 0xfffffeff | uVar12;
        uVar5 = uVar5 | uVar8 & 0xfffffefe;
        uVar8 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar8;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar8;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar8 & 0xfffffeff | uVar12;
        uVar5 = uVar5 | uVar8 & 0xfffffefe;
        uVar8 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar6 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar12 = uVar5 | uVar12 & 0xfffffeff |
                 (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar8 * 2 & 0xff | (uint)(((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1));
      }
    }
    else {
      pbVar10 = pbVar10 + ((uint)*(byte *)p0 * 2 - 2 >> 1);
    }
  }
  return (int)(char)*pbVar10;
}

