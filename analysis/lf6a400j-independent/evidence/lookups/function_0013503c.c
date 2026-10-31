
uint FUN_0013503c(byte *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  param_2 = param_2 & 0xffff;
  puVar10 = *(ushort **)(param_1 + 4);
  pbVar9 = *(byte **)(param_1 + 8);
  uVar5 = (uint)*puVar10;
  if (uVar5 < param_2) {
    iVar11 = (uint)*param_1 * 2;
    if (param_2 < puVar10[*param_1 - 1]) {
      for (uVar12 = iVar11 - 4; uVar7 = (uint)*(ushort *)(uVar12 + (int)puVar10), param_2 != uVar7;
          uVar12 = uVar12 - 2) {
        if (uVar7 < param_2) {
          uVar5 = *(ushort *)(uVar12 + 2 + (int)puVar10) - param_2;
          param_2 = param_2 - uVar7;
          bVar2 = true;
          goto LAB_00135084;
        }
      }
      bVar2 = false;
LAB_00135084:
      pbVar9 = pbVar9 + (uVar12 >> 1);
      if (bVar2) {
        iVar11 = uVar5 + param_2;
        iVar6 = iVar11 * 0x10000;
        uVar12 = ((uint)*pbVar9 * (uVar5 & 0xffff) + (uint)pbVar9[1] * (param_2 & 0xffff)) * 2;
        uVar5 = uVar12 + iVar11 * -0x10000;
        bVar3 = uVar5 <= uVar12;
        bVar2 = (uVar5 & 0x80000000) == 0;
        uVar5 = uVar5 * 2 | (uint)bVar3;
        uVar12 = (uint)bVar3 * (uVar5 + iVar11 * -0x10000) + (uint)!bVar3 * (uVar5 + iVar6);
        cVar1 = bVar3 * (uVar5 < uVar12) + !bVar3 * (uVar12 < uVar5);
        bVar4 = bVar2 * cVar1 + (!bVar2 && cVar1 == '\0');
        uVar5 = uVar12 * 2 | (uint)((bVar4 & 1) == (bVar4 >> 1 & 1));
        bVar2 = (bVar4 & 1) == (bVar4 >> 1 & 1);
        bVar3 = (bool)(bVar4 >> 1 & 1) == ((uVar12 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar5 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar5 + iVar6);
        cVar1 = bVar2 * (uVar5 < uVar8) + !bVar2 * (uVar8 < uVar5);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = (uint)bVar4 << 8 & 0xfffffeff | uVar5;
        uVar7 = (uint)bVar4 << 8 & 0xfffffefe;
        uVar12 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar5 & 0xfffffeff | uVar12;
        uVar7 = uVar7 | uVar5 & 0xfffffefe;
        uVar5 = uVar7 | uVar12;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar12 & 0xfffffeff | uVar5;
        uVar7 = uVar7 | uVar12 & 0xfffffefe;
        uVar12 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar5 & 0xfffffeff | uVar12;
        uVar7 = uVar7 | uVar5 & 0xfffffefe;
        uVar5 = uVar7 | uVar12;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar12 & 0xfffffeff | uVar5;
        uVar7 = uVar7 | uVar12 & 0xfffffefe;
        uVar12 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar5 & 0xfffffeff | uVar12;
        uVar7 = uVar7 | uVar5 & 0xfffffefe;
        uVar5 = uVar7 | uVar12;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar12 & 0xfffffeff | uVar5;
        uVar7 = uVar7 | uVar12 & 0xfffffefe;
        uVar12 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar5 & 0xfffffeff | uVar12;
        uVar7 = uVar7 | uVar5 & 0xfffffefe;
        uVar5 = uVar7 | uVar12;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar12 & 0xfffffeff | uVar5;
        uVar7 = uVar7 | uVar12 & 0xfffffefe;
        uVar12 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar5 & 0xfffffeff | uVar12;
        uVar7 = uVar7 | uVar5 & 0xfffffefe;
        uVar5 = uVar7 | uVar12;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar12 & 0xfffffeff | uVar5;
        uVar7 = uVar7 | uVar12 & 0xfffffefe;
        uVar12 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar12 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar5 & 0xfffffeff | uVar12;
        uVar7 = uVar7 | uVar5 & 0xfffffefe;
        uVar5 = uVar7 | uVar12;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar5 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar5 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar7 | uVar12 & 0xfffffeff | uVar5;
        uVar7 = uVar7 | uVar12 & 0xfffffefe;
        uVar12 = uVar7 | uVar5;
        uVar13 = uVar8 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar12 >> 8) & 1) == ((byte)(uVar12 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar12 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar12 = (uint)bVar2 * (uVar13 + iVar11 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar6);
        cVar1 = bVar2 * (uVar13 < uVar12) + !bVar2 * (uVar12 < uVar13);
        uVar5 = uVar7 | uVar5 & 0xfffffeff |
                (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar12 * 2 & 0xff | (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
      }
    }
    else {
      pbVar9 = pbVar9 + (iVar11 - 2U >> 1);
    }
  }
  return (int)(char)*pbVar9;
}

