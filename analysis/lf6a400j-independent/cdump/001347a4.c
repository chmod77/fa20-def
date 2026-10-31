
/* WARNING: Unknown calling convention */

uint LK_1347A4(uint p0,uint p1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  
  puVar17 = *(uint **)(p0 + 4);
  puVar16 = *(uint **)(p0 + 8);
  if (*puVar17 < p1) {
    if (p1 < puVar17[*(byte *)p0 - 1]) {
      for (iVar11 = 4; uVar9 = *(uint *)(iVar11 + (int)puVar17), p1 != uVar9; iVar11 = iVar11 + 4) {
        if (p1 <= uVar9) {
          iVar11 = iVar11 + -4;
          p1 = p1 - *(int *)(iVar11 + (int)puVar17);
          uVar9 = uVar9 - *(int *)(iVar11 + (int)puVar17);
          bVar2 = true;
          goto LAB_001347e4;
        }
      }
      bVar2 = false;
LAB_001347e4:
      puVar16 = (uint *)((int)puVar16 + iVar11);
      if (bVar2) {
        uVar10 = *puVar16;
        uVar8 = puVar16[1];
        if (uVar8 <= uVar10) {
          uVar5 = (ulonglong)p1 * (ulonglong)(uVar10 - uVar8);
          bVar2 = (uVar5 & 0x8000000000000000) == 0;
          uVar12 = (int)(uVar5 >> 0x20) << 1 | (uint)((uVar5 & 0x80000000) != 0);
          uVar8 = uVar12 - uVar9;
          bVar3 = uVar12 < uVar8;
          bVar4 = bVar2 * bVar3 + (!bVar2 && !bVar3);
          bVar7 = (bVar2 && bVar3) != (!bVar2 && !bVar3);
          uVar15 = (int)uVar5 << 2;
          uVar12 = uVar8 * 2 | (uint)((uVar5 & 0x40000000) != 0);
          bVar2 = bVar7 == (bool)(bVar4 >> 1);
          bVar3 = (bool)(bVar4 >> 1) == ((uVar8 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar9) + (uint)!bVar2 * (uVar12 + uVar9);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar18 = (uint)bVar4 << 8 & 0xfffffeff | uVar8;
          uVar6 = (uint)bVar4 << 8 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x80000000) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar19 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x40000000) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar20 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x20000000) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar21 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x10000000) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar22 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x8000000) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar23 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x4000000) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar24 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x2000000) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar25 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x1000000) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar26 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x800000) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar27 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x400000) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar28 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x200000) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar29 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x100000) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar30 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x80000) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar31 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x40000) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar32 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x20000) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar33 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x10000) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar34 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x8000) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar35 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x4000) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar36 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x2000) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar37 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x1000) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar38 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x800) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar39 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x400) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar40 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x200) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar41 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x100) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar42 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x80) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar43 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x40) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar44 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x20) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar45 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x10) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar46 = uVar6 | uVar12 & 0xfffffeff | uVar8;
          uVar6 = uVar6 | uVar12 & 0xfffffefe;
          uVar12 = uVar6 | uVar8;
          uVar14 = uVar13 * 2 | (uint)((uVar15 & 8) != 0);
          bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
          cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
          uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar14 = uVar6 | uVar8 & 0xfffffeff | uVar12;
          uVar6 = uVar6 | uVar8 & 0xfffffefe;
          uVar8 = uVar6 | uVar12;
          uVar15 = uVar13 * 2 | (uint)((uVar15 & 4) != 0);
          bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
          uVar9 = (uint)bVar2 * (uVar15 - uVar9) + (uint)!bVar2 * (uVar15 + uVar9);
          cVar1 = bVar2 * (uVar15 < uVar9) + !bVar2 * (uVar9 < uVar15);
          uVar9 = uVar6 | uVar12 & 0xfffffeff |
                  (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          return uVar10 - ((((((((((((((((((((((((((((((((uint)(bVar7 == (bool)(bVar4 >> 1)) << 1 |
                                                        (uint)(((byte)(uVar18 >> 8) & 1) ==
                                                              ((byte)(uVar18 >> 9) & 1))) << 1 |
                                                       (uint)(((byte)(uVar19 >> 8) & 1) ==
                                                             ((byte)(uVar19 >> 9) & 1))) << 1 |
                                                      (uint)(((byte)(uVar20 >> 8) & 1) ==
                                                            ((byte)(uVar20 >> 9) & 1))) << 1 |
                                                     (uint)(((byte)(uVar21 >> 8) & 1) ==
                                                           ((byte)(uVar21 >> 9) & 1))) << 1 |
                                                    (uint)(((byte)(uVar22 >> 8) & 1) ==
                                                          ((byte)(uVar22 >> 9) & 1))) << 1 |
                                                   (uint)(((byte)(uVar23 >> 8) & 1) ==
                                                         ((byte)(uVar23 >> 9) & 1))) << 1 |
                                                  (uint)(((byte)(uVar24 >> 8) & 1) ==
                                                        ((byte)(uVar24 >> 9) & 1))) << 1 |
                                                 (uint)(((byte)(uVar25 >> 8) & 1) ==
                                                       ((byte)(uVar25 >> 9) & 1))) << 1 |
                                                (uint)(((byte)(uVar26 >> 8) & 1) ==
                                                      ((byte)(uVar26 >> 9) & 1))) << 1 |
                                               (uint)(((byte)(uVar27 >> 8) & 1) ==
                                                     ((byte)(uVar27 >> 9) & 1))) << 1 |
                                              (uint)(((byte)(uVar28 >> 8) & 1) ==
                                                    ((byte)(uVar28 >> 9) & 1))) << 1 |
                                             (uint)(((byte)(uVar29 >> 8) & 1) ==
                                                   ((byte)(uVar29 >> 9) & 1))) << 1 |
                                            (uint)(((byte)(uVar30 >> 8) & 1) ==
                                                  ((byte)(uVar30 >> 9) & 1))) << 1 |
                                           (uint)(((byte)(uVar31 >> 8) & 1) ==
                                                 ((byte)(uVar31 >> 9) & 1))) << 1 |
                                          (uint)(((byte)(uVar32 >> 8) & 1) ==
                                                ((byte)(uVar32 >> 9) & 1))) << 1 |
                                         (uint)(((byte)(uVar33 >> 8) & 1) ==
                                               ((byte)(uVar33 >> 9) & 1))) << 1 |
                                        (uint)(((byte)(uVar34 >> 8) & 1) ==
                                              ((byte)(uVar34 >> 9) & 1))) << 1 |
                                       (uint)(((byte)(uVar35 >> 8) & 1) == ((byte)(uVar35 >> 9) & 1)
                                             )) << 1 |
                                      (uint)(((byte)(uVar36 >> 8) & 1) == ((byte)(uVar36 >> 9) & 1))
                                      ) << 1 | (uint)(((byte)(uVar37 >> 8) & 1) ==
                                                     ((byte)(uVar37 >> 9) & 1))) << 1 |
                                    (uint)(((byte)(uVar38 >> 8) & 1) == ((byte)(uVar38 >> 9) & 1)))
                                    << 1 | (uint)(((byte)(uVar39 >> 8) & 1) ==
                                                 ((byte)(uVar39 >> 9) & 1))) << 1 |
                                  (uint)(((byte)(uVar40 >> 8) & 1) == ((byte)(uVar40 >> 9) & 1))) <<
                                  1 | (uint)(((byte)(uVar41 >> 8) & 1) == ((byte)(uVar41 >> 9) & 1))
                                 ) << 1 | (uint)(((byte)(uVar42 >> 8) & 1) ==
                                                ((byte)(uVar42 >> 9) & 1))) << 1 |
                               (uint)(((byte)(uVar43 >> 8) & 1) == ((byte)(uVar43 >> 9) & 1))) << 1
                              | (uint)(((byte)(uVar44 >> 8) & 1) == ((byte)(uVar44 >> 9) & 1))) << 1
                             | (uint)(((byte)(uVar45 >> 8) & 1) == ((byte)(uVar45 >> 9) & 1))) << 1
                            | (uint)(((byte)(uVar46 >> 8) & 1) == ((byte)(uVar46 >> 9) & 1))) << 1 |
                           (uint)(((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1))) << 1 |
                          (uint)(((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1)));
        }
        uVar5 = (ulonglong)p1 * (ulonglong)(uVar8 - uVar10);
        bVar2 = (uVar5 & 0x8000000000000000) == 0;
        uVar12 = (int)(uVar5 >> 0x20) << 1 | (uint)((uVar5 & 0x80000000) != 0);
        uVar8 = uVar12 - uVar9;
        bVar3 = uVar12 < uVar8;
        bVar4 = bVar2 * bVar3 + (!bVar2 && !bVar3);
        bVar7 = (bVar2 && bVar3) != (!bVar2 && !bVar3);
        uVar15 = (int)uVar5 << 2;
        uVar12 = uVar8 * 2 | (uint)((uVar5 & 0x40000000) != 0);
        bVar2 = bVar7 == (bool)(bVar4 >> 1);
        bVar3 = (bool)(bVar4 >> 1) == ((uVar8 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar12 - uVar9) + (uint)!bVar2 * (uVar12 + uVar9);
        cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar18 = (uint)bVar4 << 8 & 0xfffffeff | uVar8;
        uVar6 = (uint)bVar4 << 8 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x80000000) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar19 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x40000000) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar20 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x20000000) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar21 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x10000000) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar22 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x8000000) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar23 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x4000000) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar24 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x2000000) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar25 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x1000000) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar26 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x800000) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar27 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x400000) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar28 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x200000) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar29 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x100000) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar30 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x80000) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar31 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x40000) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar32 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x20000) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar33 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x10000) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar34 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x8000) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar35 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x4000) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar36 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x2000) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar37 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x1000) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar38 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x800) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar39 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x400) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar40 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x200) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar41 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x100) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar42 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x80) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar43 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x40) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar44 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x20) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar45 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 0x10) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar46 = uVar6 | uVar12 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar12 & 0xfffffefe;
        uVar12 = uVar6 | uVar8;
        uVar14 = uVar13 * 2 | (uint)((uVar15 & 8) != 0);
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar14 - uVar9) + (uint)!bVar2 * (uVar14 + uVar9);
        cVar1 = bVar2 * (uVar14 < uVar13) + !bVar2 * (uVar13 < uVar14);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar14 = uVar6 | uVar8 & 0xfffffeff | uVar12;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar12;
        uVar15 = uVar13 * 2 | (uint)((uVar15 & 4) != 0);
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar13 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar15 - uVar9) + (uint)!bVar2 * (uVar15 + uVar9);
        cVar1 = bVar2 * (uVar15 < uVar9) + !bVar2 * (uVar9 < uVar15);
        uVar9 = uVar6 | uVar12 & 0xfffffeff |
                (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar10 + ((((((((((((((((((((((((((((((((uint)(bVar7 == (bool)(bVar4 >> 1)) << 1 |
                                                      (uint)(((byte)(uVar18 >> 8) & 1) ==
                                                            ((byte)(uVar18 >> 9) & 1))) << 1 |
                                                     (uint)(((byte)(uVar19 >> 8) & 1) ==
                                                           ((byte)(uVar19 >> 9) & 1))) << 1 |
                                                    (uint)(((byte)(uVar20 >> 8) & 1) ==
                                                          ((byte)(uVar20 >> 9) & 1))) << 1 |
                                                   (uint)(((byte)(uVar21 >> 8) & 1) ==
                                                         ((byte)(uVar21 >> 9) & 1))) << 1 |
                                                  (uint)(((byte)(uVar22 >> 8) & 1) ==
                                                        ((byte)(uVar22 >> 9) & 1))) << 1 |
                                                 (uint)(((byte)(uVar23 >> 8) & 1) ==
                                                       ((byte)(uVar23 >> 9) & 1))) << 1 |
                                                (uint)(((byte)(uVar24 >> 8) & 1) ==
                                                      ((byte)(uVar24 >> 9) & 1))) << 1 |
                                               (uint)(((byte)(uVar25 >> 8) & 1) ==
                                                     ((byte)(uVar25 >> 9) & 1))) << 1 |
                                              (uint)(((byte)(uVar26 >> 8) & 1) ==
                                                    ((byte)(uVar26 >> 9) & 1))) << 1 |
                                             (uint)(((byte)(uVar27 >> 8) & 1) ==
                                                   ((byte)(uVar27 >> 9) & 1))) << 1 |
                                            (uint)(((byte)(uVar28 >> 8) & 1) ==
                                                  ((byte)(uVar28 >> 9) & 1))) << 1 |
                                           (uint)(((byte)(uVar29 >> 8) & 1) ==
                                                 ((byte)(uVar29 >> 9) & 1))) << 1 |
                                          (uint)(((byte)(uVar30 >> 8) & 1) ==
                                                ((byte)(uVar30 >> 9) & 1))) << 1 |
                                         (uint)(((byte)(uVar31 >> 8) & 1) ==
                                               ((byte)(uVar31 >> 9) & 1))) << 1 |
                                        (uint)(((byte)(uVar32 >> 8) & 1) ==
                                              ((byte)(uVar32 >> 9) & 1))) << 1 |
                                       (uint)(((byte)(uVar33 >> 8) & 1) == ((byte)(uVar33 >> 9) & 1)
                                             )) << 1 |
                                      (uint)(((byte)(uVar34 >> 8) & 1) == ((byte)(uVar34 >> 9) & 1))
                                      ) << 1 | (uint)(((byte)(uVar35 >> 8) & 1) ==
                                                     ((byte)(uVar35 >> 9) & 1))) << 1 |
                                    (uint)(((byte)(uVar36 >> 8) & 1) == ((byte)(uVar36 >> 9) & 1)))
                                    << 1 | (uint)(((byte)(uVar37 >> 8) & 1) ==
                                                 ((byte)(uVar37 >> 9) & 1))) << 1 |
                                  (uint)(((byte)(uVar38 >> 8) & 1) == ((byte)(uVar38 >> 9) & 1))) <<
                                  1 | (uint)(((byte)(uVar39 >> 8) & 1) == ((byte)(uVar39 >> 9) & 1))
                                 ) << 1 | (uint)(((byte)(uVar40 >> 8) & 1) ==
                                                ((byte)(uVar40 >> 9) & 1))) << 1 |
                               (uint)(((byte)(uVar41 >> 8) & 1) == ((byte)(uVar41 >> 9) & 1))) << 1
                              | (uint)(((byte)(uVar42 >> 8) & 1) == ((byte)(uVar42 >> 9) & 1))) << 1
                             | (uint)(((byte)(uVar43 >> 8) & 1) == ((byte)(uVar43 >> 9) & 1))) << 1
                            | (uint)(((byte)(uVar44 >> 8) & 1) == ((byte)(uVar44 >> 9) & 1))) << 1 |
                           (uint)(((byte)(uVar45 >> 8) & 1) == ((byte)(uVar45 >> 9) & 1))) << 1 |
                          (uint)(((byte)(uVar46 >> 8) & 1) == ((byte)(uVar46 >> 9) & 1))) << 1 |
                         (uint)(((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1))) << 1 |
                        (uint)(((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1)));
      }
    }
    else {
      puVar16 = puVar16 + (*(byte *)p0 - 1);
    }
  }
  return *puVar16;
}

