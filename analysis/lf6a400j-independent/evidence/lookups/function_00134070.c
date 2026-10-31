
int FUN_00134070(byte *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
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
  uint uVar11;
  uint uVar13;
  
  puVar18 = *(uint **)(param_1 + 4);
  puVar17 = *(ushort **)(param_1 + 8);
  if (*puVar18 < param_2) {
    if (param_2 < puVar18[*param_1 - 1]) {
      for (uVar8 = 4; uVar6 = *(uint *)(uVar8 + (int)puVar18), param_2 != uVar6; uVar8 = uVar8 + 4)
      {
        if (param_2 <= uVar6) {
          uVar8 = uVar8 - 4;
          param_2 = param_2 - *(int *)(uVar8 + (int)puVar18);
          uVar6 = uVar6 - *(int *)(uVar8 + (int)puVar18);
          bVar2 = true;
          goto LAB_001340b0;
        }
      }
      bVar2 = false;
LAB_001340b0:
      puVar17 = (ushort *)((int)puVar17 + (uVar8 >> 1));
      if (bVar2) {
        uVar7 = (uint)*puVar17;
        uVar8 = (uint)puVar17[1];
        if (uVar8 <= uVar7) {
          uVar5 = (ulonglong)param_2 * (ulonglong)(uVar7 - uVar8);
          bVar2 = (uVar5 & 0x8000000000000000) == 0;
          uVar9 = (int)(uVar5 >> 0x20) << 1 | (uint)((uVar5 & 0x80000000) != 0);
          uVar8 = uVar9 - uVar6;
          bVar3 = uVar9 < uVar8;
          bVar4 = bVar2 * bVar3 + (!bVar2 && !bVar3);
          uVar9 = (uint)bVar4;
          uVar10 = uVar8 * 2 | (uint)((uVar5 & 0x40000000) != 0);
          bVar2 = ((bVar2 && bVar3) != (!bVar2 && !bVar3)) == (bool)(bVar4 >> 1);
          bVar3 = (bool)(bVar4 >> 1) == ((uVar8 & 0x80000000) != 0);
          uVar11 = (uint)bVar2 * (uVar10 - uVar6) + (uint)!bVar2 * (uVar10 + uVar6);
          cVar1 = bVar2 * (uVar10 < uVar11) + !bVar2 * (uVar11 < uVar10);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar8 = (uint)bVar4;
          uVar10 = uVar9 & 0xfffffe;
          uVar12 = uVar11 * 2 | (uint)((uVar5 & 0x20000000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar9 & 0xfffffe | uVar8) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                  ((uVar11 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar9 = (uint)bVar4;
          uVar11 = uVar10 | uVar8 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x10000000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar8 = (uint)bVar4;
          uVar10 = uVar11 | uVar9 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x8000000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar9 = (uint)bVar4;
          uVar11 = uVar10 | uVar8 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x4000000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar8 = (uint)bVar4;
          uVar10 = uVar11 | uVar9 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x2000000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar9 = (uint)bVar4;
          uVar11 = uVar10 | uVar8 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x1000000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar8 = (uint)bVar4;
          uVar10 = uVar11 | uVar9 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x800000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar9 = (uint)bVar4;
          uVar11 = uVar10 | uVar8 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x400000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar8 = (uint)bVar4;
          uVar10 = uVar11 | uVar9 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x200000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar9 = (uint)bVar4;
          uVar11 = uVar10 | uVar8 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x100000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar8 = (uint)bVar4;
          uVar10 = uVar11 | uVar9 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x80000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar9 = (uint)bVar4;
          uVar11 = uVar10 | uVar8 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x40000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar8 = (uint)bVar4;
          uVar10 = uVar11 | uVar9 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x20000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar9 = (uint)bVar4;
          uVar11 = uVar10 | uVar8 & 0xfffffe;
          uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x10000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                  ((uVar13 & 0x80000000) != 0);
          uVar10 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
          cVar1 = bVar2 * (uVar12 < uVar10) + !bVar2 * (uVar10 < uVar12);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar8 = (uint)bVar4;
          uVar16 = uVar11 | uVar9 & 0xfffffe;
          uVar13 = uVar10 * 2 | (uint)((uVar5 & 0x8000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                  ((uVar10 & 0x80000000) != 0);
          uVar10 = (uint)bVar2 * (uVar13 - uVar6) + (uint)!bVar2 * (uVar13 + uVar6);
          cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
          bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
          uVar9 = (uint)bVar4;
          uVar12 = (uVar16 | uVar8 & 0xfffffe) << 8;
          uVar13 = (int)uVar5 << 0x12;
          uVar11 = uVar10 * 2 | (uint)((uVar5 & 0x4000) != 0);
          bVar2 = (bVar4 & 1) == ((byte)((uVar16 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
          bVar3 = (bool)((byte)((uVar16 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                  ((uVar10 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar11 - uVar6) + (uint)!bVar2 * (uVar11 + uVar6);
          cVar1 = bVar2 * (uVar11 < uVar14) + !bVar2 * (uVar14 < uVar11);
          uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar19 = uVar12 | uVar9 << 8 & 0xfffffeff | uVar10;
          uVar12 = uVar12 | uVar9 << 8 & 0xfffffefe;
          uVar11 = uVar12 | uVar10;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x80000000) != 0);
          bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar20 = uVar12 | uVar10 & 0xfffffeff | uVar11;
          uVar12 = uVar12 | uVar10 & 0xfffffefe;
          uVar10 = uVar12 | uVar11;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x40000000) != 0);
          bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar21 = uVar12 | uVar11 & 0xfffffeff | uVar10;
          uVar12 = uVar12 | uVar11 & 0xfffffefe;
          uVar11 = uVar12 | uVar10;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x20000000) != 0);
          bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar22 = uVar12 | uVar10 & 0xfffffeff | uVar11;
          uVar12 = uVar12 | uVar10 & 0xfffffefe;
          uVar10 = uVar12 | uVar11;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x10000000) != 0);
          bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar23 = uVar12 | uVar11 & 0xfffffeff | uVar10;
          uVar12 = uVar12 | uVar11 & 0xfffffefe;
          uVar11 = uVar12 | uVar10;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x8000000) != 0);
          bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar24 = uVar12 | uVar10 & 0xfffffeff | uVar11;
          uVar12 = uVar12 | uVar10 & 0xfffffefe;
          uVar10 = uVar12 | uVar11;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x4000000) != 0);
          bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar25 = uVar12 | uVar11 & 0xfffffeff | uVar10;
          uVar12 = uVar12 | uVar11 & 0xfffffefe;
          uVar11 = uVar12 | uVar10;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x2000000) != 0);
          bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar26 = uVar12 | uVar10 & 0xfffffeff | uVar11;
          uVar12 = uVar12 | uVar10 & 0xfffffefe;
          uVar10 = uVar12 | uVar11;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x1000000) != 0);
          bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar27 = uVar12 | uVar11 & 0xfffffeff | uVar10;
          uVar12 = uVar12 | uVar11 & 0xfffffefe;
          uVar11 = uVar12 | uVar10;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x800000) != 0);
          bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar28 = uVar12 | uVar10 & 0xfffffeff | uVar11;
          uVar12 = uVar12 | uVar10 & 0xfffffefe;
          uVar10 = uVar12 | uVar11;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x400000) != 0);
          bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar29 = uVar12 | uVar11 & 0xfffffeff | uVar10;
          uVar12 = uVar12 | uVar11 & 0xfffffefe;
          uVar11 = uVar12 | uVar10;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x200000) != 0);
          bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar30 = uVar12 | uVar10 & 0xfffffeff | uVar11;
          uVar12 = uVar12 | uVar10 & 0xfffffefe;
          uVar10 = uVar12 | uVar11;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x100000) != 0);
          bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar31 = uVar12 | uVar11 & 0xfffffeff | uVar10;
          uVar12 = uVar12 | uVar11 & 0xfffffefe;
          uVar11 = uVar12 | uVar10;
          uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x80000) != 0);
          bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
          cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
          uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          uVar15 = uVar12 | uVar10 & 0xfffffeff | uVar11;
          uVar12 = uVar12 | uVar10 & 0xfffffefe;
          uVar10 = uVar12 | uVar11;
          uVar13 = uVar14 * 2 | (uint)((uVar13 & 0x40000) != 0);
          bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
          bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
          uVar6 = (uint)bVar2 * (uVar13 - uVar6) + (uint)!bVar2 * (uVar13 + uVar6);
          cVar1 = bVar2 * (uVar13 < uVar6) + !bVar2 * (uVar6 < uVar13);
          uVar6 = uVar12 | uVar11 & 0xfffffeff |
                  (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
          return uVar7 - ((((((((((((((((uint)((bVar4 & 1) ==
                                              ((byte)((uVar16 | uVar8 & 0xfffffe | uVar9) >> 1) & 1)
                                              ) << 1 |
                                       (uint)(((byte)(uVar19 >> 8) & 1) == ((byte)(uVar19 >> 9) & 1)
                                             )) << 1 |
                                      (uint)(((byte)(uVar20 >> 8) & 1) == ((byte)(uVar20 >> 9) & 1))
                                      ) << 1 | (uint)(((byte)(uVar21 >> 8) & 1) ==
                                                     ((byte)(uVar21 >> 9) & 1))) << 1 |
                                    (uint)(((byte)(uVar22 >> 8) & 1) == ((byte)(uVar22 >> 9) & 1)))
                                    << 1 | (uint)(((byte)(uVar23 >> 8) & 1) ==
                                                 ((byte)(uVar23 >> 9) & 1))) << 1 |
                                  (uint)(((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1))) <<
                                  1 | (uint)(((byte)(uVar25 >> 8) & 1) == ((byte)(uVar25 >> 9) & 1))
                                 ) << 1 | (uint)(((byte)(uVar26 >> 8) & 1) ==
                                                ((byte)(uVar26 >> 9) & 1))) << 1 |
                               (uint)(((byte)(uVar27 >> 8) & 1) == ((byte)(uVar27 >> 9) & 1))) << 1
                              | (uint)(((byte)(uVar28 >> 8) & 1) == ((byte)(uVar28 >> 9) & 1))) << 1
                             | (uint)(((byte)(uVar29 >> 8) & 1) == ((byte)(uVar29 >> 9) & 1))) << 1
                            | (uint)(((byte)(uVar30 >> 8) & 1) == ((byte)(uVar30 >> 9) & 1))) << 1 |
                           (uint)(((byte)(uVar31 >> 8) & 1) == ((byte)(uVar31 >> 9) & 1))) << 1 |
                          (uint)(((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1))) << 1 |
                         (uint)(((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1)));
        }
        uVar5 = (ulonglong)param_2 * (ulonglong)(uVar8 - uVar7);
        bVar2 = (uVar5 & 0x8000000000000000) == 0;
        uVar9 = (int)(uVar5 >> 0x20) << 1 | (uint)((uVar5 & 0x80000000) != 0);
        uVar8 = uVar9 - uVar6;
        bVar3 = uVar9 < uVar8;
        bVar4 = bVar2 * bVar3 + (!bVar2 && !bVar3);
        uVar9 = (uint)bVar4;
        uVar10 = uVar8 * 2 | (uint)((uVar5 & 0x40000000) != 0);
        bVar2 = ((bVar2 && bVar3) != (!bVar2 && !bVar3)) == (bool)(bVar4 >> 1);
        bVar3 = (bool)(bVar4 >> 1) == ((uVar8 & 0x80000000) != 0);
        uVar11 = (uint)bVar2 * (uVar10 - uVar6) + (uint)!bVar2 * (uVar10 + uVar6);
        cVar1 = bVar2 * (uVar10 < uVar11) + !bVar2 * (uVar11 < uVar10);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar8 = (uint)bVar4;
        uVar10 = uVar9 & 0xfffffe;
        uVar13 = uVar11 * 2 | (uint)((uVar5 & 0x20000000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar9 & 0xfffffe | uVar8) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar9 & 0xfffffe | uVar8) >> 1) & 1) == ((uVar11 & 0x80000000) != 0);
        uVar12 = (uint)bVar2 * (uVar13 - uVar6) + (uint)!bVar2 * (uVar13 + uVar6);
        cVar1 = bVar2 * (uVar13 < uVar12) + !bVar2 * (uVar12 < uVar13);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar9 = (uint)bVar4;
        uVar11 = uVar10 | uVar8 & 0xfffffe;
        uVar13 = uVar12 * 2 | (uint)((uVar5 & 0x10000000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                ((uVar12 & 0x80000000) != 0);
        uVar12 = (uint)bVar2 * (uVar13 - uVar6) + (uint)!bVar2 * (uVar13 + uVar6);
        cVar1 = bVar2 * (uVar13 < uVar12) + !bVar2 * (uVar12 < uVar13);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar8 = (uint)bVar4;
        uVar10 = uVar11 | uVar9 & 0xfffffe;
        uVar13 = uVar12 * 2 | (uint)((uVar5 & 0x8000000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                ((uVar12 & 0x80000000) != 0);
        uVar12 = (uint)bVar2 * (uVar13 - uVar6) + (uint)!bVar2 * (uVar13 + uVar6);
        cVar1 = bVar2 * (uVar13 < uVar12) + !bVar2 * (uVar12 < uVar13);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar9 = (uint)bVar4;
        uVar11 = uVar10 | uVar8 & 0xfffffe;
        uVar13 = uVar12 * 2 | (uint)((uVar5 & 0x4000000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                ((uVar12 & 0x80000000) != 0);
        uVar12 = (uint)bVar2 * (uVar13 - uVar6) + (uint)!bVar2 * (uVar13 + uVar6);
        cVar1 = bVar2 * (uVar13 < uVar12) + !bVar2 * (uVar12 < uVar13);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar8 = (uint)bVar4;
        uVar10 = uVar11 | uVar9 & 0xfffffe;
        uVar13 = uVar12 * 2 | (uint)((uVar5 & 0x2000000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                ((uVar12 & 0x80000000) != 0);
        uVar12 = (uint)bVar2 * (uVar13 - uVar6) + (uint)!bVar2 * (uVar13 + uVar6);
        cVar1 = bVar2 * (uVar13 < uVar12) + !bVar2 * (uVar12 < uVar13);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar9 = (uint)bVar4;
        uVar11 = uVar10 | uVar8 & 0xfffffe;
        uVar13 = uVar12 * 2 | (uint)((uVar5 & 0x1000000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                ((uVar12 & 0x80000000) != 0);
        uVar12 = (uint)bVar2 * (uVar13 - uVar6) + (uint)!bVar2 * (uVar13 + uVar6);
        cVar1 = bVar2 * (uVar13 < uVar12) + !bVar2 * (uVar12 < uVar13);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar8 = (uint)bVar4;
        uVar10 = uVar11 | uVar9 & 0xfffffe;
        uVar13 = uVar12 * 2 | (uint)((uVar5 & 0x800000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                ((uVar12 & 0x80000000) != 0);
        uVar12 = (uint)bVar2 * (uVar13 - uVar6) + (uint)!bVar2 * (uVar13 + uVar6);
        cVar1 = bVar2 * (uVar13 < uVar12) + !bVar2 * (uVar12 < uVar13);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar9 = (uint)bVar4;
        uVar11 = uVar10 | uVar8 & 0xfffffe;
        uVar13 = uVar12 * 2 | (uint)((uVar5 & 0x400000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                ((uVar12 & 0x80000000) != 0);
        uVar12 = (uint)bVar2 * (uVar13 - uVar6) + (uint)!bVar2 * (uVar13 + uVar6);
        cVar1 = bVar2 * (uVar13 < uVar12) + !bVar2 * (uVar12 < uVar13);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar8 = (uint)bVar4;
        uVar10 = uVar11 | uVar9 & 0xfffffe;
        uVar16 = uVar12 * 2 | (uint)((uVar5 & 0x200000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                ((uVar12 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar16 - uVar6) + (uint)!bVar2 * (uVar16 + uVar6);
        cVar1 = bVar2 * (uVar16 < uVar13) + !bVar2 * (uVar13 < uVar16);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar9 = (uint)bVar4;
        uVar11 = uVar10 | uVar8 & 0xfffffe;
        uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x100000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
        cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar8 = (uint)bVar4;
        uVar10 = uVar11 | uVar9 & 0xfffffe;
        uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x80000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
        cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar9 = (uint)bVar4;
        uVar11 = uVar10 | uVar8 & 0xfffffe;
        uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x40000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
        cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar8 = (uint)bVar4;
        uVar10 = uVar11 | uVar9 & 0xfffffe;
        uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x20000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                ((uVar13 & 0x80000000) != 0);
        uVar13 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
        cVar1 = bVar2 * (uVar12 < uVar13) + !bVar2 * (uVar13 < uVar12);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar9 = (uint)bVar4;
        uVar11 = uVar10 | uVar8 & 0xfffffe;
        uVar12 = uVar13 * 2 | (uint)((uVar5 & 0x10000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar10 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                ((uVar13 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar12 - uVar6) + (uint)!bVar2 * (uVar12 + uVar6);
        cVar1 = bVar2 * (uVar12 < uVar10) + !bVar2 * (uVar10 < uVar12);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar8 = (uint)bVar4;
        uVar16 = uVar11 | uVar9 & 0xfffffe;
        uVar13 = uVar10 * 2 | (uint)((uVar5 & 0x8000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar11 | uVar9 & 0xfffffe | uVar8) >> 1) & 1) ==
                ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 - uVar6) + (uint)!bVar2 * (uVar13 + uVar6);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar9 = (uint)bVar4;
        uVar12 = (uVar16 | uVar8 & 0xfffffe) << 8;
        uVar13 = (int)uVar5 << 0x12;
        uVar11 = uVar10 * 2 | (uint)((uVar5 & 0x4000) != 0);
        bVar2 = (bVar4 & 1) == ((byte)((uVar16 | uVar8 & 0xfffffe | uVar9) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar16 | uVar8 & 0xfffffe | uVar9) >> 1) & 1) ==
                ((uVar10 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar11 - uVar6) + (uint)!bVar2 * (uVar11 + uVar6);
        cVar1 = bVar2 * (uVar11 < uVar14) + !bVar2 * (uVar14 < uVar11);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar19 = uVar12 | uVar9 << 8 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar9 << 8 & 0xfffffefe;
        uVar11 = uVar12 | uVar10;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x80000000) != 0);
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar20 = uVar12 | uVar10 & 0xfffffeff | uVar11;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar11;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x40000000) != 0);
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar21 = uVar12 | uVar11 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar11 & 0xfffffefe;
        uVar11 = uVar12 | uVar10;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x20000000) != 0);
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar22 = uVar12 | uVar10 & 0xfffffeff | uVar11;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar11;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x10000000) != 0);
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar23 = uVar12 | uVar11 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar11 & 0xfffffefe;
        uVar11 = uVar12 | uVar10;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x8000000) != 0);
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar24 = uVar12 | uVar10 & 0xfffffeff | uVar11;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar11;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x4000000) != 0);
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar25 = uVar12 | uVar11 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar11 & 0xfffffefe;
        uVar11 = uVar12 | uVar10;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x2000000) != 0);
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar26 = uVar12 | uVar10 & 0xfffffeff | uVar11;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar11;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x1000000) != 0);
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar27 = uVar12 | uVar11 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar11 & 0xfffffefe;
        uVar11 = uVar12 | uVar10;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x800000) != 0);
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar28 = uVar12 | uVar10 & 0xfffffeff | uVar11;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar11;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x400000) != 0);
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar29 = uVar12 | uVar11 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar11 & 0xfffffefe;
        uVar11 = uVar12 | uVar10;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x200000) != 0);
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar30 = uVar12 | uVar10 & 0xfffffeff | uVar11;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar11;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x100000) != 0);
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar10 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar31 = uVar12 | uVar11 & 0xfffffeff | uVar10;
        uVar12 = uVar12 | uVar11 & 0xfffffefe;
        uVar11 = uVar12 | uVar10;
        uVar15 = uVar14 * 2 | (uint)((uVar13 & 0x80000) != 0);
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar14 = (uint)bVar2 * (uVar15 - uVar6) + (uint)!bVar2 * (uVar15 + uVar6);
        cVar1 = bVar2 * (uVar15 < uVar14) + !bVar2 * (uVar14 < uVar15);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar15 = uVar12 | uVar10 & 0xfffffeff | uVar11;
        uVar12 = uVar12 | uVar10 & 0xfffffefe;
        uVar10 = uVar12 | uVar11;
        uVar13 = uVar14 * 2 | (uint)((uVar13 & 0x40000) != 0);
        bVar2 = ((byte)(uVar10 >> 8) & 1) == ((byte)(uVar10 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar10 >> 9) & 1) == ((uVar14 & 0x80000000) != 0);
        uVar6 = (uint)bVar2 * (uVar13 - uVar6) + (uint)!bVar2 * (uVar13 + uVar6);
        cVar1 = bVar2 * (uVar13 < uVar6) + !bVar2 * (uVar6 < uVar13);
        uVar6 = uVar12 | uVar11 & 0xfffffeff |
                (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar7 + ((((((((((((((((uint)((bVar4 & 1) ==
                                            ((byte)((uVar16 | uVar8 & 0xfffffe | uVar9) >> 1) & 1))
                                      << 1 | (uint)(((byte)(uVar19 >> 8) & 1) ==
                                                   ((byte)(uVar19 >> 9) & 1))) << 1 |
                                    (uint)(((byte)(uVar20 >> 8) & 1) == ((byte)(uVar20 >> 9) & 1)))
                                    << 1 | (uint)(((byte)(uVar21 >> 8) & 1) ==
                                                 ((byte)(uVar21 >> 9) & 1))) << 1 |
                                  (uint)(((byte)(uVar22 >> 8) & 1) == ((byte)(uVar22 >> 9) & 1))) <<
                                  1 | (uint)(((byte)(uVar23 >> 8) & 1) == ((byte)(uVar23 >> 9) & 1))
                                 ) << 1 | (uint)(((byte)(uVar24 >> 8) & 1) ==
                                                ((byte)(uVar24 >> 9) & 1))) << 1 |
                               (uint)(((byte)(uVar25 >> 8) & 1) == ((byte)(uVar25 >> 9) & 1))) << 1
                              | (uint)(((byte)(uVar26 >> 8) & 1) == ((byte)(uVar26 >> 9) & 1))) << 1
                             | (uint)(((byte)(uVar27 >> 8) & 1) == ((byte)(uVar27 >> 9) & 1))) << 1
                            | (uint)(((byte)(uVar28 >> 8) & 1) == ((byte)(uVar28 >> 9) & 1))) << 1 |
                           (uint)(((byte)(uVar29 >> 8) & 1) == ((byte)(uVar29 >> 9) & 1))) << 1 |
                          (uint)(((byte)(uVar30 >> 8) & 1) == ((byte)(uVar30 >> 9) & 1))) << 1 |
                         (uint)(((byte)(uVar31 >> 8) & 1) == ((byte)(uVar31 >> 9) & 1))) << 1 |
                        (uint)(((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1))) << 1 |
                       (uint)(((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1)));
      }
    }
    else {
      puVar17 = (ushort *)((int)puVar17 + ((uint)*param_1 * 4 - 4 >> 1));
    }
  }
  return (int)(short)*puVar17;
}

