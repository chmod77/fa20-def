
uint FUN_00136bdc(byte *param_1,uint param_2,uint param_3)

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
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
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
  
  param_2 = param_2 & 0xff;
  uVar17 = (uint)param_1[8];
  pbVar8 = *(byte **)(param_1 + 4);
  uVar9 = (uint)*pbVar8;
  if ((param_2 < uVar9) || (uVar9 = (uint)pbVar8[*param_1 - 1], uVar9 < param_2)) {
    param_2 = uVar9;
  }
  for (iVar10 = 1; pbVar8[iVar10] < param_2; iVar10 = iVar10 + 1) {
  }
  uVar9 = pbVar8[iVar10] - param_2;
  param_2 = param_2 - pbVar8[iVar10 + -1];
  bVar5 = uVar9 + param_2 != 0;
  param_3 = param_3 & 0xff;
  pbVar8 = *(byte **)(param_1 + 0xc);
  uVar11 = (uint)*pbVar8;
  if ((param_3 < uVar11) || (uVar11 = (uint)pbVar8[uVar17 - 1], uVar11 < param_3)) {
    param_3 = uVar11;
  }
  for (iVar16 = 1; pbVar8[iVar16] < param_3; iVar16 = iVar16 + 1) {
  }
  uVar12 = pbVar8[iVar16] - param_3;
  param_3 = param_3 - pbVar8[iVar16 + -1];
  iVar13 = uVar12 + param_3;
  puVar18 = (uint *)(*(int *)(param_1 + 0x10) + uVar17 * ((iVar10 + -1) * 4 & 0xffffU) +
                    (iVar16 + -1) * 4);
  uVar11 = *puVar18;
  if (iVar13 == 0) {
    uVar17 = puVar18[uVar17];
    if (bVar5) {
LAB_00136dea:
      uVar6 = (ulonglong)uVar11 * (ulonglong)uVar9 + (ulonglong)uVar17 * (ulonglong)param_2;
      iVar10 = param_2 + uVar9;
      bVar5 = (int)((uVar6 & 0x8000000080000000) >> 0x20) == 0;
      uVar17 = (int)(uVar6 >> 0x20) * 2 | (uint)((int)(uVar6 & 0x8000000080000000) != 0);
      uVar9 = uVar17 - iVar10;
      bVar3 = uVar17 < uVar9;
      bVar4 = bVar5 * bVar3 + (!bVar5 && !bVar3);
      bVar2 = (bVar5 && bVar3) != (!bVar5 && !bVar3);
      uVar11 = (int)uVar6 * 4;
      uVar17 = uVar9 * 2 | (uint)(((int)uVar6 * 2 & 0x80000000U) != 0);
      bVar5 = bVar2 == (bool)(bVar4 >> 1);
      bVar3 = (bool)(bVar4 >> 1) == ((uVar9 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar17 - iVar10) + (uint)!bVar5 * (uVar17 + iVar10);
      cVar1 = bVar5 * (uVar17 < uVar14) + !bVar5 * (uVar14 < uVar17);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar22 = (uint)bVar4 << 8 & 0xfffffeff | uVar9;
      uVar12 = (uint)bVar4 << 8 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x80000000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar23 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x40000000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar24 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x20000000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar25 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x10000000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar26 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x8000000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar27 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x4000000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar28 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x2000000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar29 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x1000000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar30 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x800000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar31 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x400000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar32 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x200000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar33 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x100000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar34 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x80000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar35 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x40000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar36 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x20000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar37 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x10000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar38 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x8000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar39 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x4000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar40 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x2000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar41 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x1000) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar42 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x800) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar43 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x400) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar44 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x200) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar45 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x100) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar46 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x80) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar47 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x40) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar48 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x20) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar49 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 0x10) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar50 = uVar12 | uVar17 & 0xfffffeff | uVar9;
      uVar12 = uVar12 | uVar17 & 0xfffffefe;
      uVar17 = uVar12 | uVar9;
      uVar15 = uVar14 * 2 | (uint)((uVar11 & 8) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar14 = (uint)bVar5 * (uVar15 - iVar10) + (uint)!bVar5 * (uVar15 + iVar10);
      cVar1 = bVar5 * (uVar15 < uVar14) + !bVar5 * (uVar14 < uVar15);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar15 = uVar12 | uVar9 & 0xfffffeff | uVar17;
      uVar12 = uVar12 | uVar9 & 0xfffffefe;
      uVar9 = uVar12 | uVar17;
      uVar11 = uVar14 * 2 | (uint)((uVar11 & 4) != 0);
      bVar5 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
      uVar9 = (uint)bVar5 * (uVar11 - iVar10) + (uint)!bVar5 * (uVar11 + iVar10);
      cVar1 = bVar5 * (uVar11 < uVar9) + !bVar5 * (uVar9 < uVar11);
      uVar9 = uVar12 | uVar17 & 0xfffffeff |
              (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      return (((((((((((((((((((((((((((((((uint)(bVar2 == (bool)(bVar4 >> 1)) << 1 |
                                          (uint)(((byte)(uVar22 >> 8) & 1) ==
                                                ((byte)(uVar22 >> 9) & 1))) << 1 |
                                         (uint)(((byte)(uVar23 >> 8) & 1) ==
                                               ((byte)(uVar23 >> 9) & 1))) << 1 |
                                        (uint)(((byte)(uVar24 >> 8) & 1) ==
                                              ((byte)(uVar24 >> 9) & 1))) << 1 |
                                       (uint)(((byte)(uVar25 >> 8) & 1) == ((byte)(uVar25 >> 9) & 1)
                                             )) << 1 |
                                      (uint)(((byte)(uVar26 >> 8) & 1) == ((byte)(uVar26 >> 9) & 1))
                                      ) << 1 | (uint)(((byte)(uVar27 >> 8) & 1) ==
                                                     ((byte)(uVar27 >> 9) & 1))) << 1 |
                                    (uint)(((byte)(uVar28 >> 8) & 1) == ((byte)(uVar28 >> 9) & 1)))
                                    << 1 | (uint)(((byte)(uVar29 >> 8) & 1) ==
                                                 ((byte)(uVar29 >> 9) & 1))) << 1 |
                                  (uint)(((byte)(uVar30 >> 8) & 1) == ((byte)(uVar30 >> 9) & 1))) <<
                                  1 | (uint)(((byte)(uVar31 >> 8) & 1) == ((byte)(uVar31 >> 9) & 1))
                                 ) << 1 | (uint)(((byte)(uVar32 >> 8) & 1) ==
                                                ((byte)(uVar32 >> 9) & 1))) << 1 |
                               (uint)(((byte)(uVar33 >> 8) & 1) == ((byte)(uVar33 >> 9) & 1))) << 1
                              | (uint)(((byte)(uVar34 >> 8) & 1) == ((byte)(uVar34 >> 9) & 1))) << 1
                             | (uint)(((byte)(uVar35 >> 8) & 1) == ((byte)(uVar35 >> 9) & 1))) << 1
                            | (uint)(((byte)(uVar36 >> 8) & 1) == ((byte)(uVar36 >> 9) & 1))) << 1 |
                           (uint)(((byte)(uVar37 >> 8) & 1) == ((byte)(uVar37 >> 9) & 1))) << 1 |
                          (uint)(((byte)(uVar38 >> 8) & 1) == ((byte)(uVar38 >> 9) & 1))) << 1 |
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
             (uint)(((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1))) << 1 |
             (uint)(((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1));
    }
  }
  else {
    uVar6 = (ulonglong)uVar11 * (ulonglong)uVar12 + (ulonglong)puVar18[1] * (ulonglong)param_3;
    bVar3 = (int)((uVar6 & 0x8000000080000000) >> 0x20) == 0;
    uVar14 = (int)(uVar6 >> 0x20) * 2 | (uint)((int)(uVar6 & 0x8000000080000000) != 0);
    uVar11 = uVar14 - iVar13;
    bVar2 = uVar14 < uVar11;
    bVar4 = bVar3 * bVar2 + (!bVar3 && !bVar2);
    bVar7 = (bVar3 && bVar2) != (!bVar3 && !bVar2);
    uVar15 = (int)uVar6 * 4;
    uVar14 = uVar11 * 2 | (uint)(((int)uVar6 * 2 & 0x80000000U) != 0);
    bVar3 = bVar7 == (bool)(bVar4 >> 1);
    bVar2 = (bool)(bVar4 >> 1) == ((uVar11 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar14 - iVar13) + (uint)!bVar3 * (uVar14 + iVar13);
    cVar1 = bVar3 * (uVar14 < uVar23) + !bVar3 * (uVar23 < uVar14);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar25 = (uint)bVar4 << 8 & 0xfffffeff | uVar11;
    uVar22 = (uint)bVar4 << 8 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x80000000) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar26 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x40000000) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar27 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x20000000) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar28 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x10000000) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar29 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x8000000) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar30 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x4000000) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar31 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x2000000) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar32 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x1000000) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar33 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x800000) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar34 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x400000) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar35 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x200000) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar36 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x100000) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar37 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x80000) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar38 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x40000) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar39 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x20000) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar40 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x10000) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar41 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x8000) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar42 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x4000) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar43 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x2000) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar44 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x1000) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar45 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x800) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar46 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x400) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar47 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x200) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar48 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x100) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar49 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x80) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar50 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x40) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar19 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x20) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar20 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 0x10) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar11 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar21 = uVar22 | uVar14 & 0xfffffeff | uVar11;
    uVar22 = uVar22 | uVar14 & 0xfffffefe;
    uVar14 = uVar22 | uVar11;
    uVar24 = uVar23 * 2 | (uint)((uVar15 & 8) != 0);
    bVar3 = ((byte)(uVar14 >> 8) & 1) == ((byte)(uVar14 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar14 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar23 = (uint)bVar3 * (uVar24 - iVar13) + (uint)!bVar3 * (uVar24 + iVar13);
    cVar1 = bVar3 * (uVar24 < uVar23) + !bVar3 * (uVar23 < uVar24);
    uVar14 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar24 = uVar22 | uVar11 & 0xfffffeff | uVar14;
    uVar22 = uVar22 | uVar11 & 0xfffffefe;
    uVar11 = uVar22 | uVar14;
    uVar15 = uVar23 * 2 | (uint)((uVar15 & 4) != 0);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar23 & 0x80000000) != 0);
    uVar11 = (uint)bVar3 * (uVar15 - iVar13) + (uint)!bVar3 * (uVar15 + iVar13);
    cVar1 = bVar3 * (uVar15 < uVar11) + !bVar3 * (uVar11 < uVar15);
    uVar11 = uVar22 | uVar14 & 0xfffffeff |
             (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar11 = (((((((((((((((((((((((((((((((uint)(bVar7 == (bool)(bVar4 >> 1)) << 1 |
                                          (uint)(((byte)(uVar25 >> 8) & 1) ==
                                                ((byte)(uVar25 >> 9) & 1))) << 1 |
                                         (uint)(((byte)(uVar26 >> 8) & 1) ==
                                               ((byte)(uVar26 >> 9) & 1))) << 1 |
                                        (uint)(((byte)(uVar27 >> 8) & 1) ==
                                              ((byte)(uVar27 >> 9) & 1))) << 1 |
                                       (uint)(((byte)(uVar28 >> 8) & 1) == ((byte)(uVar28 >> 9) & 1)
                                             )) << 1 |
                                      (uint)(((byte)(uVar29 >> 8) & 1) == ((byte)(uVar29 >> 9) & 1))
                                      ) << 1 | (uint)(((byte)(uVar30 >> 8) & 1) ==
                                                     ((byte)(uVar30 >> 9) & 1))) << 1 |
                                    (uint)(((byte)(uVar31 >> 8) & 1) == ((byte)(uVar31 >> 9) & 1)))
                                    << 1 | (uint)(((byte)(uVar32 >> 8) & 1) ==
                                                 ((byte)(uVar32 >> 9) & 1))) << 1 |
                                  (uint)(((byte)(uVar33 >> 8) & 1) == ((byte)(uVar33 >> 9) & 1))) <<
                                  1 | (uint)(((byte)(uVar34 >> 8) & 1) == ((byte)(uVar34 >> 9) & 1))
                                 ) << 1 | (uint)(((byte)(uVar35 >> 8) & 1) ==
                                                ((byte)(uVar35 >> 9) & 1))) << 1 |
                               (uint)(((byte)(uVar36 >> 8) & 1) == ((byte)(uVar36 >> 9) & 1))) << 1
                              | (uint)(((byte)(uVar37 >> 8) & 1) == ((byte)(uVar37 >> 9) & 1))) << 1
                             | (uint)(((byte)(uVar38 >> 8) & 1) == ((byte)(uVar38 >> 9) & 1))) << 1
                            | (uint)(((byte)(uVar39 >> 8) & 1) == ((byte)(uVar39 >> 9) & 1))) << 1 |
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
                (uint)(((byte)(uVar19 >> 8) & 1) == ((byte)(uVar19 >> 9) & 1))) << 1 |
               (uint)(((byte)(uVar20 >> 8) & 1) == ((byte)(uVar20 >> 9) & 1))) << 1 |
              (uint)(((byte)(uVar21 >> 8) & 1) == ((byte)(uVar21 >> 9) & 1))) << 1 |
             (uint)(((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1))) << 1 |
             (uint)(((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1));
    if (bVar5) {
      uVar6 = (ulonglong)puVar18[uVar17] * (ulonglong)uVar12 +
              (ulonglong)(puVar18 + uVar17)[1] * (ulonglong)param_3;
      bVar5 = (int)((uVar6 & 0x8000000080000000) >> 0x20) == 0;
      uVar12 = (int)(uVar6 >> 0x20) * 2 | (uint)((int)(uVar6 & 0x8000000080000000) != 0);
      uVar17 = uVar12 - iVar13;
      bVar3 = uVar12 < uVar17;
      bVar4 = bVar5 * bVar3 + (!bVar5 && !bVar3);
      bVar2 = (bVar5 && bVar3) != (!bVar5 && !bVar3);
      uVar14 = (int)uVar6 * 4;
      uVar12 = uVar17 * 2 | (uint)(((int)uVar6 * 2 & 0x80000000U) != 0);
      bVar5 = bVar2 == (bool)(bVar4 >> 1);
      bVar3 = (bool)(bVar4 >> 1) == ((uVar17 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar12 - iVar13) + (uint)!bVar5 * (uVar12 + iVar13);
      cVar1 = bVar5 * (uVar12 < uVar22) + !bVar5 * (uVar22 < uVar12);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar24 = (uint)bVar4 << 8 & 0xfffffeff | uVar17;
      uVar15 = (uint)bVar4 << 8 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x80000000) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar25 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x40000000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar26 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x20000000) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar27 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x10000000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar28 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x8000000) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar29 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x4000000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar30 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x2000000) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar31 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x1000000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar32 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x800000) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar33 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x400000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar34 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x200000) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar35 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x100000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar36 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x80000) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar37 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x40000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar38 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x20000) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar39 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x10000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar40 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x8000) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar41 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x4000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar42 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x2000) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar43 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x1000) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar44 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x800) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar45 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x400) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar46 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x200) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar47 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x100) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar48 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x80) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar49 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x40) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar50 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x20) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar19 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 0x10) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar17 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar20 = uVar15 | uVar12 & 0xfffffeff | uVar17;
      uVar15 = uVar15 | uVar12 & 0xfffffefe;
      uVar12 = uVar15 | uVar17;
      uVar23 = uVar22 * 2 | (uint)((uVar14 & 8) != 0);
      bVar5 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar22 = (uint)bVar5 * (uVar23 - iVar13) + (uint)!bVar5 * (uVar23 + iVar13);
      cVar1 = bVar5 * (uVar23 < uVar22) + !bVar5 * (uVar22 < uVar23);
      uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar23 = uVar15 | uVar17 & 0xfffffeff | uVar12;
      uVar15 = uVar15 | uVar17 & 0xfffffefe;
      uVar17 = uVar15 | uVar12;
      uVar14 = uVar22 * 2 | (uint)((uVar14 & 4) != 0);
      bVar5 = ((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1);
      bVar3 = (bool)((byte)(uVar17 >> 9) & 1) == ((uVar22 & 0x80000000) != 0);
      uVar17 = (uint)bVar5 * (uVar14 - iVar13) + (uint)!bVar5 * (uVar14 + iVar13);
      cVar1 = bVar5 * (uVar14 < uVar17) + !bVar5 * (uVar17 < uVar14);
      uVar17 = uVar15 | uVar12 & 0xfffffeff |
               (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
      uVar17 = (((((((((((((((((((((((((((((((uint)(bVar2 == (bool)(bVar4 >> 1)) << 1 |
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
                                       (uint)(((byte)(uVar29 >> 8) & 1) == ((byte)(uVar29 >> 9) & 1)
                                             )) << 1 |
                                      (uint)(((byte)(uVar30 >> 8) & 1) == ((byte)(uVar30 >> 9) & 1))
                                      ) << 1 | (uint)(((byte)(uVar31 >> 8) & 1) ==
                                                     ((byte)(uVar31 >> 9) & 1))) << 1 |
                                    (uint)(((byte)(uVar32 >> 8) & 1) == ((byte)(uVar32 >> 9) & 1)))
                                    << 1 | (uint)(((byte)(uVar33 >> 8) & 1) ==
                                                 ((byte)(uVar33 >> 9) & 1))) << 1 |
                                  (uint)(((byte)(uVar34 >> 8) & 1) == ((byte)(uVar34 >> 9) & 1))) <<
                                  1 | (uint)(((byte)(uVar35 >> 8) & 1) == ((byte)(uVar35 >> 9) & 1))
                                 ) << 1 | (uint)(((byte)(uVar36 >> 8) & 1) ==
                                                ((byte)(uVar36 >> 9) & 1))) << 1 |
                               (uint)(((byte)(uVar37 >> 8) & 1) == ((byte)(uVar37 >> 9) & 1))) << 1
                              | (uint)(((byte)(uVar38 >> 8) & 1) == ((byte)(uVar38 >> 9) & 1))) << 1
                             | (uint)(((byte)(uVar39 >> 8) & 1) == ((byte)(uVar39 >> 9) & 1))) << 1
                            | (uint)(((byte)(uVar40 >> 8) & 1) == ((byte)(uVar40 >> 9) & 1))) << 1 |
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
                 (uint)(((byte)(uVar19 >> 8) & 1) == ((byte)(uVar19 >> 9) & 1))) << 1 |
                (uint)(((byte)(uVar20 >> 8) & 1) == ((byte)(uVar20 >> 9) & 1))) << 1 |
               (uint)(((byte)(uVar23 >> 8) & 1) == ((byte)(uVar23 >> 9) & 1))) << 1 |
               (uint)(((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1));
      goto LAB_00136dea;
    }
  }
  return uVar11;
}

