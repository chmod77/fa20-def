
uint FUN_00133fd8(byte *param_1,uint param_2)

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
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  
  param_2 = param_2 & 0xffff;
  puVar12 = *(ushort **)(param_1 + 4);
  puVar11 = *(ushort **)(param_1 + 8);
  if (*puVar12 < param_2) {
    if (param_2 < puVar12[*param_1 - 1]) {
      for (iVar8 = 2; uVar6 = (uint)*(ushort *)(iVar8 + (int)puVar12), param_2 != uVar6;
          iVar8 = iVar8 + 2) {
        if (param_2 <= uVar6) {
          iVar8 = iVar8 + -2;
          uVar6 = uVar6 - param_2;
          param_2 = param_2 - *(ushort *)(iVar8 + (int)puVar12);
          bVar2 = true;
          goto LAB_00134020;
        }
      }
      bVar2 = false;
LAB_00134020:
      puVar11 = (ushort *)((int)puVar11 + iVar8);
      if (bVar2) {
        iVar8 = uVar6 + param_2;
        uVar9 = (uint)*puVar11 * (uVar6 & 0xffff) + (uint)puVar11[1] * (param_2 & 0xffff);
        iVar7 = iVar8 * 0x10000;
        bVar2 = (uVar9 & 0x80000000) == 0;
        uVar9 = uVar9 * 2;
        uVar6 = uVar9 + iVar8 * -0x10000;
        bVar3 = uVar9 < uVar6;
        bVar4 = bVar2 * bVar3 + (!bVar2 && !bVar3);
        bVar2 = (bVar2 && bVar3) != (!bVar2 && !bVar3);
        uVar5 = bVar4 & 0xfffffe;
        uVar9 = uVar6 * 2 | (uint)(bVar2 == (bool)(bVar4 >> 1));
        bVar2 = bVar2 == (bool)(bVar4 >> 1);
        bVar3 = (bool)(bVar4 >> 1) == ((uVar6 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar9 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar9 + iVar7);
        cVar1 = bVar2 * (uVar9 < uVar10) + !bVar2 * (uVar10 < uVar9);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar6 = (uint)bVar4;
        uVar9 = uVar10 * 2 | (uint)((bVar4 & 1) == ((byte)((uVar5 | uVar6) >> 1) & 1));
        bVar2 = (bVar4 & 1) == ((byte)((uVar5 | uVar6) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar5 | uVar6) >> 1) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar9 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar9 + iVar7);
        cVar1 = bVar2 * (uVar9 < uVar10) + !bVar2 * (uVar10 < uVar9);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 << 8 | uVar6 << 8 & 0xfffffeff | uVar9;
        uVar5 = uVar5 << 8 | uVar6 << 8 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar9 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar9 & 0xfffffefe;
        uVar9 = uVar5 | uVar6;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar9;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar9 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar9 & 0xfffffefe;
        uVar9 = uVar5 | uVar6;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar9;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar9 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar9 & 0xfffffefe;
        uVar9 = uVar5 | uVar6;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar9;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar9 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar9 & 0xfffffefe;
        uVar9 = uVar5 | uVar6;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar9;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar9 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar9 & 0xfffffefe;
        uVar9 = uVar5 | uVar6;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar9;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar9 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar9 & 0xfffffefe;
        uVar9 = uVar5 | uVar6;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar9;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar6 = (uint)bVar2 * (uVar13 + iVar8 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar6) + !bVar2 * (uVar6 < uVar13);
        uVar9 = uVar5 | uVar9 & 0xfffffeff |
                (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar6 * 2 & 0xffff | (uint)(((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1));
      }
    }
    else {
      puVar11 = puVar11 + (*param_1 - 1);
    }
  }
  return (int)(short)*puVar11;
}

