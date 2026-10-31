
/* WARNING: Unknown calling convention */

uint LK_136BDC(uint p0,uint p1,uint p2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  ulonglong uVar6;
  bool bVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
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
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  
  uVar15 = p1 & 0xff;
  uVar17 = (uint)*(byte *)(p0 + 8);
  pbVar8 = *(byte **)(p0 + 4);
  uVar9 = (uint)*pbVar8;
  if ((uVar15 < uVar9) || (uVar9 = (uint)pbVar8[*(byte *)p0 - 1], uVar9 < uVar15)) {
    uVar15 = uVar9;
  }
  for (iVar11 = 1; pbVar8[iVar11] < uVar15; iVar11 = iVar11 + 1) {
  }
  uVar10 = pbVar8[iVar11] - uVar15;
  uVar15 = uVar15 - pbVar8[iVar11 + -1];
  bVar5 = uVar10 + uVar15 != 0;
  uVar9 = p2 & 0xff;
  pbVar8 = *(byte **)(p0 + 0xc);
  uVar12 = (uint)*pbVar8;
  if ((uVar9 < uVar12) || (uVar12 = (uint)pbVar8[uVar17 - 1], uVar12 < uVar9)) {
    uVar9 = uVar12;
  }
  for (iVar16 = 1; pbVar8[iVar16] < uVar9; iVar16 = iVar16 + 1) {
  }
  uVar13 = pbVar8[iVar16] - uVar9;
  uVar9 = uVar9 - pbVar8[iVar16 + -1];
  iVar14 = uVar13 + uVar9;
  puVar18 = (uint *)(*(int *)(p0 + 0x10) + uVar17 * ((iVar11 + -1) * 4 & 0xffffU) +
                    (iVar16 + -1) * 4);
  uVar12 = *puVar18;
  if (iVar14 == 0) {
    uVar9 = puVar18[uVar17];
    if (bVar5) {
LAB_00136dea:
      uVar6 = (ulonglong)uVar12 * (ulonglong)uVar10 + (ulonglong)uVar9 * (ulonglong)uVar15;
      iVar11 = uVar15 + uVar10;
      bVar5 = (int)((uVar6 & 0x8000000080000000) >> 0x20) == 0;
      uVar9 = (int)(uVar6 >> 0x20) * 2 | (uint)((int)(uVar6 & 0x8000000080000000) != 0);
      uVar15 = uVar9 - iVar11;
      bVar3 = uVar9 < uVar15;
      bVar4 = bVar5 * bVar3 + (!bVar5 && !bVar3);
      bVar2 = (bVar5 && bVar3) != (!bVar5 && !bVar3);
      uVar17 = (int)uVar6 * 4;
      uVar9 = uVar15 * 2 | (uint)(((int)uVar6 * 2 & 0x80000000U) != 0);
      bVar5 = bVar2 == (bool)(bVar4 >> 1);
      bVar3 = (bool)(bVar4 >> 1) == ((uVar15 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar9 - iVar11) + (uint)!bVar5 * (uVar9 + iVar11);
      cVar1 = bVar5 * (uVar9 < uVar12) + !bVar5 * (uVar12 < uVar9);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar24 = (uint)bVar4 << 8 & 0xfffffeff | uVar15;
      uVar10 = (uint)bVar4 << 8 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x80000000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar25 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x40000000) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar26 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x20000000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar27 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x10000000) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar28 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x8000000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar29 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x4000000) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar30 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x2000000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar31 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x1000000) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar32 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x800000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar33 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x400000) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar34 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x200000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar35 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x100000) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar36 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x80000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar37 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x40000) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar38 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x20000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar39 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x10000) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar40 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x8000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar41 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x4000) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar42 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x2000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar43 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x1000) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar44 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x800) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar45 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x400) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar46 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x200) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar47 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x100) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar48 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x80) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar49 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x40) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar50 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x20) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar51 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 0x10) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar15 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar52 = uVar10 | uVar9 & 0xfffffeff | uVar15;
      uVar10 = uVar10 | uVar9 & 0xfffffefe;
      uVar9 = uVar10 | uVar15;
      uVar13 = uVar12 * 2 | (uint)((uVar17 & 8) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar12 = (uint)bVar5 * (uVar13 - iVar11) + (uint)!bVar5 * (uVar13 + iVar11);
      cVar1 = bVar5 * (uVar13 < uVar12) + !bVar5 * (uVar12 < uVar13);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar13 = uVar10 | uVar15 & 0xfffffeff | uVar9;
      uVar10 = uVar10 | uVar15 & 0xfffffefe;
      uVar15 = uVar10 | uVar9;
      uVar17 = uVar12 * 2 | (uint)((uVar17 & 4) != 0);
      bVar5 = ((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar15 >> 9) & 1) == ((uVar12 & 0x80000000) != 0);
      uVar15 = (uint)bVar5 * (uVar17 - iVar11) + (uint)!bVar5 * (uVar17 + iVar11);
      cVar1 = bVar5 * (uVar17 < uVar15) + !bVar5 * (uVar15 < uVar17);
      uVar15 = uVar10 | uVar9 & 0xfffffeff |
               (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      return (((((((((((((((((((((((((((((((uint)(bVar2 == (bool)(bVar4 >> 1)) << 1 |
                                          (uint)(((byte)(uVar24 >> 8) & 1) ==
                                                ((byte)(uVar24 >> 9) & 1))) << 1 |
                                         (uint)(((byte)(uVar25 >> 8) & 1) ==
                                               ((byte)(uVar25 >> 9) & 1))) << 1 |
                                        (uint)(((byte)(uVar26 >> 8) & 1) ==
                                              ((byte)(uVar26 >> 9) & 1))) << 1 |
                                       (uint)(((byte)(uVar27 >> 8) & 1) == ((byte)(uVar27 >> 9) & 1)
                                             )) << 1 |
                                      (uint)(((byte)(uVar28 >> 8) & 1) == ((byte)(uVar28 >> 9) & 1))
                                      ) << 1 | (uint)(((byte)(uVar29 >> 8) & 1) ==
                                                     ((byte)(uVar29 >> 9) & 1))) << 1 |
                                    (uint)(((byte)(uVar30 >> 8) & 1) == ((byte)(uVar30 >> 9) & 1)))
                                    << 1 | (uint)(((byte)(uVar31 >> 8) & 1) ==
                                                 ((byte)(uVar31 >> 9) & 1))) << 1 |
                                  (uint)(((byte)(uVar32 >> 8) & 1) == ((byte)(uVar32 >> 9) & 1))) <<
                                  1 | (uint)(((byte)(uVar33 >> 8) & 1) == ((byte)(uVar33 >> 9) & 1))
                                 ) << 1 | (uint)(((byte)(uVar34 >> 8) & 1) ==
                                                ((byte)(uVar34 >> 9) & 1))) << 1 |
                               (uint)(((byte)(uVar35 >> 8) & 1) == ((byte)(uVar35 >> 9) & 1))) << 1
                              | (uint)(((byte)(uVar36 >> 8) & 1) == ((byte)(uVar36 >> 9) & 1))) << 1
                             | (uint)(((byte)(uVar37 >> 8) & 1) == ((byte)(uVar37 >> 9) & 1))) << 1
                            | (uint)(((byte)(uVar38 >> 8) & 1) == ((byte)(uVar38 >> 9) & 1))) << 1 |
                           (uint)(((byte)(uVar39 >> 8) & 1) == ((byte)(uVar39 >> 9) & 1))) << 1 |
                          (uint)(((byte)(uVar40 >> 8) & 1) == ((byte)(uVar40 >> 9) & 1))) << 1 |
                         (uint)(((byte)(uVar41 >> 8) & 1) == ((byte)(uVar41 >> 9) & 1))) << 1 |
                        (uint)(((byte)(uVar42 >> 8) & 1) == ((byte)(uVar42 >> 9) & 1))) << 1 |
                       (uint)(((byte)(uVar43 >> 8) & 1) == ((byte)(uVar43 >> 9) & 1))) << 1 |
                      (uint)(((byte)(uVar44 >> 8) & 1) == ((byte)(uVar44 >> 9) & 1))) << 1 |
                     (uint)(((byte)(uVar45 >> 8) & 1) == ((byte)(uVar45 >> 9) & 1))) << 1 |
                    (uint)(((byte)(uVar46 >> 8) & 1) == ((byte)(uVar46 >> 9) & 1))) << 1 |
                   (uint)(((byte)(uVar47 >> 8) & 1) == ((byte)(uVar47 >> 9) & 1))) << 1 |
                  (uint)(((byte)(uVar48 >> 8) & 1) == ((byte)(uVar48 >> 9) & 1))) << 1 |
                 (uint)(((byte)(uVar49 >> 8) & 1) == ((byte)(uVar49 >> 9) & 1))) << 1 |
                (uint)(((byte)(uVar50 >> 8) & 1) == ((byte)(uVar50 >> 9) & 1))) << 1 |
               (uint)(((byte)(uVar51 >> 8) & 1) == ((byte)(uVar51 >> 9) & 1))) << 1 |
              (uint)(((byte)(uVar52 >> 8) & 1) == ((byte)(uVar52 >> 9) & 1))) << 1 |
             (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1))) << 1 |
             (uint)(((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1));
    }
  }
  else {
    uVar6 = (ulonglong)uVar12 * (ulonglong)uVar13 + (ulonglong)puVar18[1] * (ulonglong)uVar9;
    bVar3 = (int)((uVar6 & 0x8000000080000000) >> 0x20) == 0;
    uVar24 = (int)(uVar6 >> 0x20) * 2 | (uint)((int)(uVar6 & 0x8000000080000000) != 0);
    uVar12 = uVar24 - iVar14;
    bVar2 = uVar24 < uVar12;
    bVar4 = bVar3 * bVar2 + (!bVar3 && !bVar2);
    bVar7 = (bVar3 && bVar2) != (!bVar3 && !bVar2);
    uVar25 = (int)uVar6 * 4;
    uVar24 = uVar12 * 2 | (uint)(((int)uVar6 * 2 & 0x80000000U) != 0);
    bVar3 = bVar7 == (bool)(bVar4 >> 1);
    bVar2 = (bool)(bVar4 >> 1) == ((uVar12 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar24 - iVar14) + (uint)!bVar3 * (uVar24 + iVar14);
    cVar1 = bVar3 * (uVar24 < uVar27) + !bVar3 * (uVar27 < uVar24);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar29 = (uint)bVar4 << 8 & 0xfffffeff | uVar12;
    uVar26 = (uint)bVar4 << 8 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x80000000) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar30 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x40000000) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar31 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x20000000) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar32 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x10000000) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar33 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x8000000) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar34 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x4000000) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar35 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x2000000) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar36 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x1000000) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar37 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x800000) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar38 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x400000) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar39 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x200000) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar40 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x100000) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar41 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x80000) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar42 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x40000) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar43 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x20000) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar44 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x10000) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar45 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x8000) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar46 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x4000) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar47 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x2000) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar48 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x1000) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar49 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x800) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar50 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x400) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar51 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x200) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar52 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x100) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar19 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x80) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar20 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x40) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar21 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x20) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar22 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 0x10) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar12 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar23 = uVar26 | uVar24 & 0xfffffeff | uVar12;
    uVar26 = uVar26 | uVar24 & 0xfffffefe;
    uVar24 = uVar26 | uVar12;
    uVar28 = uVar27 * 2 | (uint)((uVar25 & 8) != 0);
    bVar3 = ((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar24 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar27 = (uint)bVar3 * (uVar28 - iVar14) + (uint)!bVar3 * (uVar28 + iVar14);
    cVar1 = bVar3 * (uVar28 < uVar27) + !bVar3 * (uVar27 < uVar28);
    uVar24 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar28 = uVar26 | uVar12 & 0xfffffeff | uVar24;
    uVar26 = uVar26 | uVar12 & 0xfffffefe;
    uVar12 = uVar26 | uVar24;
    uVar25 = uVar27 * 2 | (uint)((uVar25 & 4) != 0);
    bVar3 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar27 & 0x80000000) != 0);
    uVar12 = (uint)bVar3 * (uVar25 - iVar14) + (uint)!bVar3 * (uVar25 + iVar14);
    cVar1 = bVar3 * (uVar25 < uVar12) + !bVar3 * (uVar12 < uVar25);
    uVar12 = uVar26 | uVar24 & 0xfffffeff |
             (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar12 = (((((((((((((((((((((((((((((((uint)(bVar7 == (bool)(bVar4 >> 1)) << 1 |
                                          (uint)(((byte)(uVar29 >> 8) & 1) ==
                                                ((byte)(uVar29 >> 9) & 1))) << 1 |
                                         (uint)(((byte)(uVar30 >> 8) & 1) ==
                                               ((byte)(uVar30 >> 9) & 1))) << 1 |
                                        (uint)(((byte)(uVar31 >> 8) & 1) ==
                                              ((byte)(uVar31 >> 9) & 1))) << 1 |
                                       (uint)(((byte)(uVar32 >> 8) & 1) == ((byte)(uVar32 >> 9) & 1)
                                             )) << 1 |
                                      (uint)(((byte)(uVar33 >> 8) & 1) == ((byte)(uVar33 >> 9) & 1))
                                      ) << 1 | (uint)(((byte)(uVar34 >> 8) & 1) ==
                                                     ((byte)(uVar34 >> 9) & 1))) << 1 |
                                    (uint)(((byte)(uVar35 >> 8) & 1) == ((byte)(uVar35 >> 9) & 1)))
                                    << 1 | (uint)(((byte)(uVar36 >> 8) & 1) ==
                                                 ((byte)(uVar36 >> 9) & 1))) << 1 |
                                  (uint)(((byte)(uVar37 >> 8) & 1) == ((byte)(uVar37 >> 9) & 1))) <<
                                  1 | (uint)(((byte)(uVar38 >> 8) & 1) == ((byte)(uVar38 >> 9) & 1))
                                 ) << 1 | (uint)(((byte)(uVar39 >> 8) & 1) ==
                                                ((byte)(uVar39 >> 9) & 1))) << 1 |
                               (uint)(((byte)(uVar40 >> 8) & 1) == ((byte)(uVar40 >> 9) & 1))) << 1
                              | (uint)(((byte)(uVar41 >> 8) & 1) == ((byte)(uVar41 >> 9) & 1))) << 1
                             | (uint)(((byte)(uVar42 >> 8) & 1) == ((byte)(uVar42 >> 9) & 1))) << 1
                            | (uint)(((byte)(uVar43 >> 8) & 1) == ((byte)(uVar43 >> 9) & 1))) << 1 |
                           (uint)(((byte)(uVar44 >> 8) & 1) == ((byte)(uVar44 >> 9) & 1))) << 1 |
                          (uint)(((byte)(uVar45 >> 8) & 1) == ((byte)(uVar45 >> 9) & 1))) << 1 |
                         (uint)(((byte)(uVar46 >> 8) & 1) == ((byte)(uVar46 >> 9) & 1))) << 1 |
                        (uint)(((byte)(uVar47 >> 8) & 1) == ((byte)(uVar47 >> 9) & 1))) << 1 |
                       (uint)(((byte)(uVar48 >> 8) & 1) == ((byte)(uVar48 >> 9) & 1))) << 1 |
                      (uint)(((byte)(uVar49 >> 8) & 1) == ((byte)(uVar49 >> 9) & 1))) << 1 |
                     (uint)(((byte)(uVar50 >> 8) & 1) == ((byte)(uVar50 >> 9) & 1))) << 1 |
                    (uint)(((byte)(uVar51 >> 8) & 1) == ((byte)(uVar51 >> 9) & 1))) << 1 |
                   (uint)(((byte)(uVar52 >> 8) & 1) == ((byte)(uVar52 >> 9) & 1))) << 1 |
                  (uint)(((byte)(uVar19 >> 8) & 1) == ((byte)(uVar19 >> 9) & 1))) << 1 |
                 (uint)(((byte)(uVar20 >> 8) & 1) == ((byte)(uVar20 >> 9) & 1))) << 1 |
                (uint)(((byte)(uVar21 >> 8) & 1) == ((byte)(uVar21 >> 9) & 1))) << 1 |
               (uint)(((byte)(uVar22 >> 8) & 1) == ((byte)(uVar22 >> 9) & 1))) << 1 |
              (uint)(((byte)(uVar23 >> 8) & 1) == ((byte)(uVar23 >> 9) & 1))) << 1 |
             (uint)(((byte)(uVar28 >> 8) & 1) == ((byte)(uVar28 >> 9) & 1))) << 1 |
             (uint)(((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1));
    if (bVar5) {
      uVar6 = (ulonglong)puVar18[uVar17] * (ulonglong)uVar13 +
              (ulonglong)(puVar18 + uVar17)[1] * (ulonglong)uVar9;
      bVar5 = (int)((uVar6 & 0x8000000080000000) >> 0x20) == 0;
      uVar17 = (int)(uVar6 >> 0x20) * 2 | (uint)((int)(uVar6 & 0x8000000080000000) != 0);
      uVar9 = uVar17 - iVar14;
      bVar3 = uVar17 < uVar9;
      bVar4 = bVar5 * bVar3 + (!bVar5 && !bVar3);
      bVar2 = (bVar5 && bVar3) != (!bVar5 && !bVar3);
      uVar13 = (int)uVar6 * 4;
      uVar17 = uVar9 * 2 | (uint)(((int)uVar6 * 2 & 0x80000000U) != 0);
      bVar5 = bVar2 == (bool)(bVar4 >> 1);
      bVar3 = (bool)(bVar4 >> 1) == ((uVar9 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar17 - iVar14) + (uint)!bVar5 * (uVar17 + iVar14);
      cVar1 = bVar5 * (uVar17 < uVar25) + !bVar5 * (uVar25 < uVar17);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar27 = (uint)bVar4 << 8 & 0xfffffeff | uVar9;
      uVar24 = (uint)bVar4 << 8 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x80000000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar28 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x40000000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar29 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x20000000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar30 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x10000000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar31 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x8000000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar32 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x4000000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar33 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x2000000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar34 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x1000000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar35 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x800000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar36 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x400000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar37 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x200000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar38 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x100000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar39 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x80000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar40 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x40000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar41 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x20000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar42 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x10000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar43 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x8000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar44 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x4000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar45 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x2000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar46 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x1000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar47 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x800) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar48 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x400) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar49 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x200) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar50 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x100) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar51 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x80) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar52 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x40) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar19 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x20) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar20 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 0x10) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar21 = uVar24 | uVar17 & 0xfffffeff | uVar9;
      uVar24 = uVar24 | uVar17 & 0xfffffefe;
      uVar17 = uVar24 | uVar9;
      uVar26 = uVar25 * 2 | (uint)((uVar13 & 8) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar25 = (uint)bVar5 * (uVar26 - iVar14) + (uint)!bVar5 * (uVar26 + iVar14);
      cVar1 = bVar5 * (uVar26 < uVar25) + !bVar5 * (uVar25 < uVar26);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar26 = uVar24 | uVar9 & 0xfffffeff | uVar17;
      uVar24 = uVar24 | uVar9 & 0xfffffefe;
      uVar9 = uVar24 | uVar17;
      uVar13 = uVar25 * 2 | (uint)((uVar13 & 4) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar25 & 0x80000000) != 0);
      uVar9 = (uint)bVar5 * (uVar13 - iVar14) + (uint)!bVar5 * (uVar13 + iVar14);
      cVar1 = bVar5 * (uVar13 < uVar9) + !bVar5 * (uVar9 < uVar13);
      uVar9 = uVar24 | uVar17 & 0xfffffeff |
              (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar9 = (((((((((((((((((((((((((((((((uint)(bVar2 == (bool)(bVar4 >> 1)) << 1 |
                                           (uint)(((byte)(uVar27 >> 8) & 1) ==
                                                 ((byte)(uVar27 >> 9) & 1))) << 1 |
                                          (uint)(((byte)(uVar28 >> 8) & 1) ==
                                                ((byte)(uVar28 >> 9) & 1))) << 1 |
                                         (uint)(((byte)(uVar29 >> 8) & 1) ==
                                               ((byte)(uVar29 >> 9) & 1))) << 1 |
                                        (uint)(((byte)(uVar30 >> 8) & 1) ==
                                              ((byte)(uVar30 >> 9) & 1))) << 1 |
                                       (uint)(((byte)(uVar31 >> 8) & 1) == ((byte)(uVar31 >> 9) & 1)
                                             )) << 1 |
                                      (uint)(((byte)(uVar32 >> 8) & 1) == ((byte)(uVar32 >> 9) & 1))
                                      ) << 1 | (uint)(((byte)(uVar33 >> 8) & 1) ==
                                                     ((byte)(uVar33 >> 9) & 1))) << 1 |
                                    (uint)(((byte)(uVar34 >> 8) & 1) == ((byte)(uVar34 >> 9) & 1)))
                                    << 1 | (uint)(((byte)(uVar35 >> 8) & 1) ==
                                                 ((byte)(uVar35 >> 9) & 1))) << 1 |
                                  (uint)(((byte)(uVar36 >> 8) & 1) == ((byte)(uVar36 >> 9) & 1))) <<
                                  1 | (uint)(((byte)(uVar37 >> 8) & 1) == ((byte)(uVar37 >> 9) & 1))
                                 ) << 1 | (uint)(((byte)(uVar38 >> 8) & 1) ==
                                                ((byte)(uVar38 >> 9) & 1))) << 1 |
                               (uint)(((byte)(uVar39 >> 8) & 1) == ((byte)(uVar39 >> 9) & 1))) << 1
                              | (uint)(((byte)(uVar40 >> 8) & 1) == ((byte)(uVar40 >> 9) & 1))) << 1
                             | (uint)(((byte)(uVar41 >> 8) & 1) == ((byte)(uVar41 >> 9) & 1))) << 1
                            | (uint)(((byte)(uVar42 >> 8) & 1) == ((byte)(uVar42 >> 9) & 1))) << 1 |
                           (uint)(((byte)(uVar43 >> 8) & 1) == ((byte)(uVar43 >> 9) & 1))) << 1 |
                          (uint)(((byte)(uVar44 >> 8) & 1) == ((byte)(uVar44 >> 9) & 1))) << 1 |
                         (uint)(((byte)(uVar45 >> 8) & 1) == ((byte)(uVar45 >> 9) & 1))) << 1 |
                        (uint)(((byte)(uVar46 >> 8) & 1) == ((byte)(uVar46 >> 9) & 1))) << 1 |
                       (uint)(((byte)(uVar47 >> 8) & 1) == ((byte)(uVar47 >> 9) & 1))) << 1 |
                      (uint)(((byte)(uVar48 >> 8) & 1) == ((byte)(uVar48 >> 9) & 1))) << 1 |
                     (uint)(((byte)(uVar49 >> 8) & 1) == ((byte)(uVar49 >> 9) & 1))) << 1 |
                    (uint)(((byte)(uVar50 >> 8) & 1) == ((byte)(uVar50 >> 9) & 1))) << 1 |
                   (uint)(((byte)(uVar51 >> 8) & 1) == ((byte)(uVar51 >> 9) & 1))) << 1 |
                  (uint)(((byte)(uVar52 >> 8) & 1) == ((byte)(uVar52 >> 9) & 1))) << 1 |
                 (uint)(((byte)(uVar19 >> 8) & 1) == ((byte)(uVar19 >> 9) & 1))) << 1 |
                (uint)(((byte)(uVar20 >> 8) & 1) == ((byte)(uVar20 >> 9) & 1))) << 1 |
               (uint)(((byte)(uVar21 >> 8) & 1) == ((byte)(uVar21 >> 9) & 1))) << 1 |
              (uint)(((byte)(uVar26 >> 8) & 1) == ((byte)(uVar26 >> 9) & 1))) << 1 |
              (uint)(((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1));
      goto LAB_00136dea;
    }
  }
  return uVar12;
}

