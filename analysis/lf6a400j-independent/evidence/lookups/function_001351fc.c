
uint FUN_001351fc(byte *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  param_2 = param_2 & 0xffff;
  puVar10 = *(ushort **)(param_1 + 4);
  puVar9 = *(ushort **)(param_1 + 8);
  uVar11 = (uint)*param_1;
  uVar6 = (uint)*puVar10;
  if (uVar6 < param_2) {
    if (param_2 < puVar10[uVar11 - 1]) {
      for (iVar12 = uVar11 * 2 + -4; uVar11 = (uint)*(ushort *)(iVar12 + (int)puVar10),
          param_2 != uVar11; iVar12 = iVar12 + -2) {
        if (uVar11 < param_2) {
          uVar6 = *(ushort *)(iVar12 + 2 + (int)puVar10) - param_2;
          param_2 = param_2 - uVar11;
          bVar2 = true;
          goto LAB_00135244;
        }
      }
      bVar2 = false;
LAB_00135244:
      puVar9 = (ushort *)((int)puVar9 + iVar12);
      if (bVar2) {
        iVar12 = uVar6 + param_2;
        uVar11 = (uint)*puVar9 * (uVar6 & 0xffff) + (uint)puVar9[1] * (param_2 & 0xffff);
        iVar7 = iVar12 * 0x10000;
        bVar2 = (uVar11 & 0x80000000) == 0;
        uVar11 = uVar11 * 2;
        uVar6 = uVar11 + iVar12 * -0x10000;
        bVar3 = uVar11 < uVar6;
        bVar4 = bVar2 * bVar3 + (!bVar2 && !bVar3);
        bVar2 = (bVar2 && bVar3) != (!bVar2 && !bVar3);
        uVar5 = bVar4 & 0xfffffe;
        uVar11 = uVar6 * 2 | (uint)(bVar2 == (bool)(bVar4 >> 1));
        bVar2 = bVar2 == (bool)(bVar4 >> 1);
        bVar3 = (bool)(bVar4 >> 1) == ((uVar6 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar11 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar11 + iVar7);
        cVar1 = bVar2 * (uVar11 < uVar8) + !bVar2 * (uVar8 < uVar11);
        bVar4 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar6 = (uint)bVar4;
        uVar11 = uVar8 * 2 | (uint)((bVar4 & 1) == ((byte)((uVar5 | uVar6) >> 1) & 1));
        bVar2 = (bVar4 & 1) == ((byte)((uVar5 | uVar6) >> 1) & 1);
        bVar3 = (bool)((byte)((uVar5 | uVar6) >> 1) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar11 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar11 + iVar7);
        cVar1 = bVar2 * (uVar11 < uVar8) + !bVar2 * (uVar8 < uVar11);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 << 8 | uVar6 << 8 & 0xfffffeff | uVar11;
        uVar5 = uVar5 << 8 | uVar6 << 8 & 0xfffffefe;
        uVar6 = uVar5 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar11 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar11 & 0xfffffefe;
        uVar11 = uVar5 | uVar6;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar11;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar11 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar11 & 0xfffffefe;
        uVar11 = uVar5 | uVar6;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar11;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar11 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar11 & 0xfffffefe;
        uVar11 = uVar5 | uVar6;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar11;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar11 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar11 & 0xfffffefe;
        uVar11 = uVar5 | uVar6;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar11;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar11 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar11 & 0xfffffefe;
        uVar11 = uVar5 | uVar6;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar11;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar11 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar11 & 0xfffffefe;
        uVar11 = uVar5 | uVar6;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar11 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar11 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar11;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar11;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar6 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar6) + !bVar2 * (uVar6 < uVar13);
        uVar11 = uVar5 | uVar11 & 0xfffffeff |
                 (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar6 * 2 & 0xffff | (uint)(((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1));
      }
    }
    else {
      puVar9 = puVar9 + (uVar11 - 1);
    }
  }
  return (int)(short)*puVar9;
}

