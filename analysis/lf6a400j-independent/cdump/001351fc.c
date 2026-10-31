
/* WARNING: Unknown calling convention */

uint LK_1351FC(uint p0,uint p1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  uVar10 = p1 & 0xffff;
  puVar9 = *(ushort **)(p0 + 4);
  puVar8 = *(ushort **)(p0 + 8);
  uVar11 = (uint)*(byte *)p0;
  uVar5 = (uint)*puVar9;
  if (uVar5 < uVar10) {
    if (uVar10 < puVar9[uVar11 - 1]) {
      for (iVar12 = uVar11 * 2 + -4; uVar11 = (uint)*(ushort *)(iVar12 + (int)puVar9),
          uVar10 != uVar11; iVar12 = iVar12 + -2) {
        if (uVar11 < uVar10) {
          uVar5 = *(ushort *)(iVar12 + 2 + (int)puVar9) - uVar10;
          uVar10 = uVar10 - uVar11;
          bVar2 = true;
          goto LAB_00135244;
        }
      }
      bVar2 = false;
LAB_00135244:
      puVar8 = (ushort *)((int)puVar8 + iVar12);
      if (bVar2) {
        iVar12 = uVar5 + uVar10;
        uVar10 = (uint)*puVar8 * (uVar5 & 0xffff) + (uint)puVar8[1] * (uVar10 & 0xffff);
        iVar6 = iVar12 * 0x10000;
        bVar2 = (uVar10 & 0x80000000) == 0;
        uVar10 = uVar10 * 2;
        uVar5 = uVar10 + iVar12 * -0x10000;
        bVar3 = uVar10 < uVar5;
        bVar4 = bVar2 * bVar3 + (!bVar2 && !bVar3);
        bVar2 = (bVar2 && bVar3) != (!bVar2 && !bVar3);
        uVar11 = bVar4 & 0xfffffe;
        uVar10 = uVar5 * 2 | (uint)(bVar2 == (bool)(bVar4 >> 1));
        bVar2 = bVar2 == (bool)(bVar4 >> 1);
        bVar3 = (bool)(bVar4 >> 1) == ((uVar5 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar10 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar10 + iVar6);
        cVar1 = bVar2 * (uVar10 < uVar7) + !bVar2 * (uVar7 < uVar10);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar5 = (uint)bVar4;
        uVar10 = uVar7 * 2 | (uint)((bVar4 & 1) == ((byte)((uVar11 | uVar5) >> 1) & 1));
        bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar5) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar11 | uVar5) >> 1) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar10 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar10 + iVar6);
        cVar1 = bVar2 * (uVar10 < uVar7) + !bVar2 * (uVar7 < uVar10);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 << 8 | uVar5 << 8 & 0xfffffeff | uVar10;
        uVar11 = uVar11 << 8 | uVar5 << 8 & 0xfffffefe;
        uVar5 = uVar11 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 | uVar10 & 0xfffffeff | uVar5;
        uVar11 = uVar11 | uVar10 & 0xfffffefe;
        uVar10 = uVar11 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 | uVar5 & 0xfffffeff | uVar10;
        uVar11 = uVar11 | uVar5 & 0xfffffefe;
        uVar5 = uVar11 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 | uVar10 & 0xfffffeff | uVar5;
        uVar11 = uVar11 | uVar10 & 0xfffffefe;
        uVar10 = uVar11 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 | uVar5 & 0xfffffeff | uVar10;
        uVar11 = uVar11 | uVar5 & 0xfffffefe;
        uVar5 = uVar11 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 | uVar10 & 0xfffffeff | uVar5;
        uVar11 = uVar11 | uVar10 & 0xfffffefe;
        uVar10 = uVar11 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 | uVar5 & 0xfffffeff | uVar10;
        uVar11 = uVar11 | uVar5 & 0xfffffefe;
        uVar5 = uVar11 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 | uVar10 & 0xfffffeff | uVar5;
        uVar11 = uVar11 | uVar10 & 0xfffffefe;
        uVar10 = uVar11 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 | uVar5 & 0xfffffeff | uVar10;
        uVar11 = uVar11 | uVar5 & 0xfffffefe;
        uVar5 = uVar11 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 | uVar10 & 0xfffffeff | uVar5;
        uVar11 = uVar11 | uVar10 & 0xfffffefe;
        uVar10 = uVar11 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 | uVar5 & 0xfffffeff | uVar10;
        uVar11 = uVar11 | uVar5 & 0xfffffefe;
        uVar5 = uVar11 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 | uVar10 & 0xfffffeff | uVar5;
        uVar11 = uVar11 | uVar10 & 0xfffffefe;
        uVar10 = uVar11 | uVar5;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar7 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar7) + !bVar2 * (uVar7 < uVar13);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar11 | uVar5 & 0xfffffeff | uVar10;
        uVar11 = uVar11 | uVar5 & 0xfffffefe;
        uVar5 = uVar11 | uVar10;
        uVar13 = uVar7 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
        uVar5 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar5) + !bVar2 * (uVar5 < uVar13);
        uVar10 = uVar11 | uVar10 & 0xfffffeff |
                 (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar5 * 2 & 0xffff | (uint)(((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1));
      }
    }
    else {
      puVar8 = puVar8 + (uVar11 - 1);
    }
  }
  return (int)(short)*puVar8;
}

