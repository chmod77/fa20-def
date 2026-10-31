
uint FUN_00133bcc(byte *param_1,uint param_2)

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
  byte *pbVar11;
  ushort *puVar12;
  uint uVar13;
  
  param_2 = param_2 & 0xffff;
  puVar12 = *(ushort **)(param_1 + 4);
  pbVar11 = *(byte **)(param_1 + 8);
  if (*puVar12 < param_2) {
    if (param_2 < puVar12[*param_1 - 1]) {
      for (uVar9 = 2; uVar6 = (uint)*(ushort *)(uVar9 + (int)puVar12), param_2 != uVar6;
          uVar9 = uVar9 + 2) {
        if (param_2 <= uVar6) {
          uVar9 = uVar9 - 2;
          uVar6 = uVar6 - param_2;
          param_2 = param_2 - *(ushort *)(uVar9 + (int)puVar12);
          bVar2 = true;
          goto LAB_00133c14;
        }
      }
      bVar2 = false;
LAB_00133c14:
      pbVar11 = pbVar11 + (uVar9 >> 1);
      if (bVar2) {
        iVar7 = uVar6 + param_2;
        iVar8 = iVar7 * 0x10000;
        uVar6 = ((uint)*pbVar11 * (uVar6 & 0xffff) + (uint)pbVar11[1] * (param_2 & 0xffff)) * 2;
        uVar9 = uVar6 + iVar7 * -0x10000;
        bVar3 = uVar9 <= uVar6;
        bVar2 = (uVar9 & 0x80000000) == 0;
        uVar9 = uVar9 * 2 | (uint)bVar3;
        uVar6 = (uint)bVar3 * (uVar9 + iVar7 * -0x10000) + (uint)!bVar3 * (uVar9 + iVar8);
        cVar1 = bVar3 * (uVar9 < uVar6) + !bVar3 * (uVar6 < uVar9);
        bVar4 = bVar2 * cVar1 + (!bVar2 && cVar1 == '\0');
        uVar9 = uVar6 * 2 | (uint)((bVar4 & 1) == (bVar4 >> 1 & 1));
        bVar2 = (bVar4 & 1) == (bVar4 >> 1 & 1);
        bVar3 = (bool)(bVar4 >> 1 & 1) == ((uVar6 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar9 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar9 + iVar8);
        cVar1 = bVar2 * (uVar9 < uVar10) + !bVar2 * (uVar10 < uVar9);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = (uint)bVar4 << 8 & 0xfffffeff | uVar9;
        uVar5 = (uint)bVar4 << 8 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar9 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar9 & 0xfffffefe;
        uVar9 = uVar5 | uVar6;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar9;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar9 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar9 & 0xfffffefe;
        uVar9 = uVar5 | uVar6;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar9;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar9 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar9 & 0xfffffefe;
        uVar9 = uVar5 | uVar6;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar9;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar9 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar9 & 0xfffffefe;
        uVar9 = uVar5 | uVar6;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar9;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar9 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar9 & 0xfffffefe;
        uVar9 = uVar5 | uVar6;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar9;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar9 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar9 & 0xfffffefe;
        uVar9 = uVar5 | uVar6;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar10) + !bVar2 * (uVar10 < uVar13);
        uVar9 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar9;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar9;
        uVar13 = uVar10 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar6 = (uint)bVar2 * (uVar13 + iVar7 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar8);
        cVar1 = bVar2 * (uVar13 < uVar6) + !bVar2 * (uVar6 < uVar13);
        uVar9 = uVar5 | uVar9 & 0xfffffeff |
                (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar6 * 2 & 0xff | (uint)(((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1));
      }
    }
    else {
      pbVar11 = pbVar11 + ((uint)*param_1 * 2 - 2 >> 1);
    }
  }
  return (int)(char)*pbVar11;
}

