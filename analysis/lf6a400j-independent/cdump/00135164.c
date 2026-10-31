
/* WARNING: Unknown calling convention */

uint LK_135164(uint p0,uint p1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  uVar11 = p1 & 0xff;
  pbVar10 = *(byte **)(p0 + 4);
  puVar9 = *(ushort **)(p0 + 8);
  uVar5 = (uint)*pbVar10;
  if (uVar5 < uVar11) {
    iVar12 = *(byte *)p0 - 1;
    if (uVar11 < pbVar10[iVar12]) {
      for (iVar12 = *(byte *)p0 - 2; uVar7 = (uint)pbVar10[iVar12], uVar11 != uVar7;
          iVar12 = iVar12 + -1) {
        if (uVar7 < uVar11) {
          uVar5 = pbVar10[iVar12 + 1] - uVar11;
          uVar11 = uVar11 - uVar7;
          bVar2 = true;
          goto LAB_001351aa;
        }
      }
      bVar2 = false;
LAB_001351aa:
      puVar9 = puVar9 + iVar12;
      if (bVar2) {
        iVar12 = uVar5 + uVar11;
        uVar11 = (uint)*puVar9 * (uVar5 & 0xffff) + (uint)puVar9[1] * (uVar11 & 0xffff);
        iVar6 = iVar12 * 0x10000;
        bVar2 = (uVar11 & 0x80000000) == 0;
        uVar11 = uVar11 * 2;
        uVar5 = uVar11 + iVar12 * -0x10000;
        bVar3 = uVar11 < uVar5;
        bVar4 = bVar2 * bVar3 + (!bVar2 && !bVar3);
        bVar2 = (bVar2 && bVar3) != (!bVar2 && !bVar3);
        uVar7 = bVar4 & 0xfffffe;
        uVar11 = uVar5 * 2 | (uint)(bVar2 == (bool)(bVar4 >> 1));
        bVar2 = bVar2 == (bool)(bVar4 >> 1);
        bVar3 = (bool)(bVar4 >> 1) == ((uVar5 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar11 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar11 + iVar6);
        cVar1 = bVar2 * (uVar11 < uVar8) + !bVar2 * (uVar8 < uVar11);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar5 = (uint)bVar4;
        uVar11 = uVar8 * 2 | (uint)((bVar4 & 1) == ((byte)((uVar7 | uVar5) >> 1) & 1));
        bVar2 = (bVar4 & 1) == ((byte)((uVar7 | uVar5) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar7 | uVar5) >> 1) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar11 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar11 + iVar6);
        cVar1 = bVar2 * (uVar11 < uVar8) + !bVar2 * (uVar8 < uVar11);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 << 8 | uVar5 << 8 & 0xfffffeff | uVar11;
        uVar7 = uVar7 << 8 | uVar5 << 8 & 0xfffffefe;
        uVar5 = uVar7 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar11 & 0xfffffeff | uVar5;
        uVar7 = uVar7 | uVar11 & 0xfffffefe;
        uVar11 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar5 & 0xfffffeff | uVar11;
        uVar7 = uVar7 | uVar5 & 0xfffffefe;
        uVar5 = uVar7 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar11 & 0xfffffeff | uVar5;
        uVar7 = uVar7 | uVar11 & 0xfffffefe;
        uVar11 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar5 & 0xfffffeff | uVar11;
        uVar7 = uVar7 | uVar5 & 0xfffffefe;
        uVar5 = uVar7 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar11 & 0xfffffeff | uVar5;
        uVar7 = uVar7 | uVar11 & 0xfffffefe;
        uVar11 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar5 & 0xfffffeff | uVar11;
        uVar7 = uVar7 | uVar5 & 0xfffffefe;
        uVar5 = uVar7 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar11 & 0xfffffeff | uVar5;
        uVar7 = uVar7 | uVar11 & 0xfffffefe;
        uVar11 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar5 & 0xfffffeff | uVar11;
        uVar7 = uVar7 | uVar5 & 0xfffffefe;
        uVar5 = uVar7 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar11 & 0xfffffeff | uVar5;
        uVar7 = uVar7 | uVar11 & 0xfffffefe;
        uVar11 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar5 & 0xfffffeff | uVar11;
        uVar7 = uVar7 | uVar5 & 0xfffffefe;
        uVar5 = uVar7 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar11 & 0xfffffeff | uVar5;
        uVar7 = uVar7 | uVar11 & 0xfffffefe;
        uVar11 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar5 & 0xfffffeff | uVar11;
        uVar7 = uVar7 | uVar5 & 0xfffffefe;
        uVar5 = uVar7 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar5 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar5) + !bVar2 * (uVar5 < uVar13);
        uVar11 = uVar7 | uVar11 & 0xfffffeff |
                 (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar5 * 2 & 0xffff | (uint)(((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1));
      }
    }
    else {
      puVar9 = puVar9 + iVar12;
    }
  }
  return (int)(short)*puVar9;
}

