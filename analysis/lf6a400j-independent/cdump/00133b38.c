
/* WARNING: Unknown calling convention */

uint LK_133B38(uint p0,uint p1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = p1 & 0xff;
  pbVar11 = *(byte **)(p0 + 4);
  pbVar10 = *(byte **)(p0 + 8);
  if (*pbVar11 < uVar12) {
    if (uVar12 < pbVar11[*(byte *)p0 - 1]) {
      for (iVar8 = 1; uVar6 = (uint)pbVar11[iVar8], uVar12 != uVar6; iVar8 = iVar8 + 1) {
        if (uVar12 <= uVar6) {
          iVar8 = iVar8 + -1;
          uVar6 = uVar6 - uVar12;
          uVar12 = uVar12 - pbVar11[iVar8];
          bVar2 = true;
          goto LAB_00133b7e;
        }
      }
      bVar2 = false;
LAB_00133b7e:
      pbVar10 = pbVar10 + iVar8;
      if (bVar2) {
        iVar8 = uVar6 + uVar12;
        iVar7 = iVar8 * 0x10000;
        uVar6 = ((uint)*pbVar10 * (uVar6 & 0xffff) + (uint)pbVar10[1] * (uVar12 & 0xffff)) * 2;
        uVar12 = uVar6 + iVar8 * -0x10000;
        bVar3 = uVar12 <= uVar6;
        bVar2 = (uVar12 & 0x80000000) == 0;
        uVar12 = uVar12 * 2 | (uint)bVar3;
        uVar6 = (uint)bVar3 * (uVar12 + iVar8 * -0x10000) + (uint)!bVar3 * (uVar12 + iVar7);
        cVar1 = bVar3 * (uVar12 < uVar6) + !bVar3 * (uVar6 < uVar12);
        bVar4 = bVar2 * cVar1 + (!bVar2 && cVar1 == '\0');
        uVar12 = uVar6 * 2 | (uint)((bVar4 & 1) == (bVar4 >> 1 & 1));
        bVar2 = (bVar4 & 1) == (bVar4 >> 1 & 1);
        bVar3 = (bool)(bVar4 >> 1 & 1) == ((uVar6 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar12 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar12 + iVar7);
        cVar1 = bVar2 * (uVar12 < uVar9) + !bVar2 * (uVar9 < uVar12);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = (uint)bVar4 << 8 & 0xfffffeff | uVar12;
        uVar5 = (uint)bVar4 << 8 & 0xfffffefe;
        uVar6 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar12;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar12;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar12;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar12;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar12;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar12;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar12;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar6 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar6) + !bVar2 * (uVar6 < uVar13);
        uVar12 = uVar5 | uVar12 & 0xfffffeff |
                 (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar6 * 2 & 0xff | (uint)(((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1));
      }
    }
    else {
      pbVar10 = pbVar10 + (*(byte *)p0 - 1);
    }
  }
  return (int)(char)*pbVar10;
}

