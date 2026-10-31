
/* WARNING: Unknown calling convention */

uint LK_13503C(uint p0,uint p1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  uVar10 = p1 & 0xffff;
  puVar9 = *(ushort **)(p0 + 4);
  pbVar8 = *(byte **)(p0 + 8);
  uVar5 = (uint)*puVar9;
  if (uVar5 < uVar10) {
    iVar11 = (uint)*(byte *)p0 * 2;
    if (uVar10 < puVar9[*(byte *)p0 - 1]) {
      for (uVar12 = iVar11 - 4; uVar7 = (uint)*(ushort *)(uVar12 + (int)puVar9), uVar10 != uVar7;
          uVar12 = uVar12 - 2) {
        if (uVar7 < uVar10) {
          uVar5 = *(ushort *)(uVar12 + 2 + (int)puVar9) - uVar10;
          uVar10 = uVar10 - uVar7;
          bVar2 = true;
          goto LAB_00135084;
        }
      }
      bVar2 = false;
LAB_00135084:
      pbVar8 = pbVar8 + (uVar12 >> 1);
      if (bVar2) {
        iVar11 = uVar5 + uVar10;
        iVar6 = iVar11 * 0x10000;
        uVar10 = ((uint)*pbVar8 * (uVar5 & 0xffff) + (uint)pbVar8[1] * (uVar10 & 0xffff)) * 2;
        uVar5 = uVar10 + iVar11 * -0x10000;
        bVar3 = uVar5 <= uVar10;
        bVar2 = (uVar5 & 0x80000000) == 0;
        uVar10 = uVar5 * 2 | (uint)bVar3;
        uVar5 = (uint)bVar3 * (uVar10 + iVar11 * -0x10000) + (uint)!bVar3 * (uVar10 + iVar6);
        cVar1 = bVar3 * (uVar10 < uVar5) + !bVar3 * (uVar5 < uVar10);
        bVar4 = bVar2 * cVar1 + (!bVar2 && cVar1 == '\0');
        uVar10 = uVar5 * 2 | (uint)((bVar4 & 1) == (bVar4 >> 1 & 1));
        bVar2 = (bVar4 & 1) == (bVar4 >> 1 & 1);
        bVar3 = (bool)(bVar4 >> 1 & 1) == ((uVar5 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar10 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar10 + iVar6);
        cVar1 = bVar2 * (uVar10 < uVar7) + !bVar2 * (uVar7 < uVar10);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = (uint)bVar4 << 8 & 0xfffffeff | uVar5;
        uVar12 = (uint)bVar4 << 8 & 0xfffffefe;
        uVar10 = uVar12 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar12 | uVar5 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar5 & 0xfffffefe;
        uVar5 = uVar12 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar12 | uVar10 & 0xfffffeff | uVar5;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar12 | uVar5 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar5 & 0xfffffefe;
        uVar5 = uVar12 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar12 | uVar10 & 0xfffffeff | uVar5;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar12 | uVar5 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar5 & 0xfffffefe;
        uVar5 = uVar12 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar12 | uVar10 & 0xfffffeff | uVar5;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar12 | uVar5 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar5 & 0xfffffefe;
        uVar5 = uVar12 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar12 | uVar10 & 0xfffffeff | uVar5;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar12 | uVar5 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar5 & 0xfffffefe;
        uVar5 = uVar12 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar12 | uVar10 & 0xfffffeff | uVar5;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar12 | uVar5 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar5 & 0xfffffefe;
        uVar5 = uVar12 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar12 | uVar10 & 0xfffffeff | uVar5;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar5 = uVar12 | uVar5 & 0xfffffeff |
                (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar10 * 2 & 0xff | (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
      }
    }
    else {
      pbVar8 = pbVar8 + (iVar11 - 2U >> 1);
    }
  }
  return (int)(char)*pbVar8;
}

