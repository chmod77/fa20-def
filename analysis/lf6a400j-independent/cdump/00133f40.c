
/* WARNING: Unknown calling convention */

uint LK_133F40(uint p0,uint p1)

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
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = p1 & 0xffff;
  puVar11 = *(ushort **)(p0 + 4);
  puVar10 = *(ushort **)(p0 + 8);
  if (*puVar11 < uVar12) {
    if (uVar12 < puVar11[*(byte *)p0 - 1]) {
      for (iVar8 = 2; uVar6 = (uint)*(ushort *)(iVar8 + (int)puVar11), uVar12 != uVar6;
          iVar8 = iVar8 + 2) {
        if (uVar12 <= uVar6) {
          iVar8 = iVar8 + -2;
          uVar6 = uVar6 - uVar12;
          uVar12 = uVar12 - *(ushort *)(iVar8 + (int)puVar11);
          bVar2 = true;
          goto LAB_00133f88;
        }
      }
      bVar2 = false;
LAB_00133f88:
      puVar10 = (ushort *)((int)puVar10 + iVar8);
      if (bVar2) {
        iVar8 = uVar6 + uVar12;
        uVar6 = (uint)*puVar10 * (uVar6 & 0xffff) + (uint)puVar10[1] * (uVar12 & 0xffff);
        iVar7 = iVar8 * 0x10000;
        bVar2 = (uVar6 & 0x80000000) == 0;
        uVar6 = uVar6 * 2;
        uVar12 = uVar6 + iVar8 * -0x10000;
        bVar3 = uVar6 < uVar12;
        bVar4 = bVar2 * bVar3 + (!bVar2 && !bVar3);
        bVar2 = (bVar2 && bVar3) != (!bVar2 && !bVar3);
        uVar5 = bVar4 & 0xfffffe;
        uVar6 = uVar12 * 2 | (uint)(bVar2 == (bool)(bVar4 >> 1));
        bVar2 = bVar2 == (bool)(bVar4 >> 1);
        bVar3 = (bool)(bVar4 >> 1) == ((uVar12 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar6 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar6 + iVar7);
        cVar1 = bVar2 * (uVar6 < uVar9) + !bVar2 * (uVar9 < uVar6);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar12 = (uint)bVar4;
        uVar6 = uVar9 * 2 | (uint)((bVar4 & 1) == ((byte)((uVar5 | uVar12) >> 1) & 1));
        bVar2 = (bVar4 & 1) == ((byte)((uVar5 | uVar12) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar5 | uVar12) >> 1) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar6 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar6 + iVar7);
        cVar1 = bVar2 * (uVar6 < uVar9) + !bVar2 * (uVar9 < uVar6);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 << 8 | uVar12 << 8 & 0xfffffeff | uVar6;
        uVar5 = uVar5 << 8 | uVar12 << 8 & 0xfffffefe;
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
        uVar9 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar12 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar12 & 0xfffffefe;
        uVar12 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar12 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar12) + !bVar2 * (uVar12 < uVar13);
        uVar6 = uVar5 | uVar6 & 0xfffffeff |
                (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar12 * 2 & 0xffff | (uint)(((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1));
      }
    }
    else {
      puVar10 = puVar10 + (*(byte *)p0 - 1);
    }
  }
  return (int)(short)*puVar10;
}

