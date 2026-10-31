
uint FUN_00134fa8(byte *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  
  param_2 = param_2 & 0xff;
  pbVar11 = *(byte **)(param_1 + 4);
  pbVar10 = *(byte **)(param_1 + 8);
  uVar6 = (uint)*pbVar11;
  if (uVar6 < param_2) {
    iVar12 = *param_1 - 1;
    if (param_2 < pbVar11[iVar12]) {
      for (iVar12 = *param_1 - 2; uVar8 = (uint)pbVar11[iVar12], param_2 != uVar8;
          iVar12 = iVar12 + -1) {
        if (uVar8 < param_2) {
          uVar6 = pbVar11[iVar12 + 1] - param_2;
          param_2 = param_2 - uVar8;
          bVar2 = true;
          goto LAB_00134fee;
        }
      }
      bVar2 = false;
LAB_00134fee:
      pbVar10 = pbVar10 + iVar12;
      if (bVar2) {
        iVar12 = uVar6 + param_2;
        iVar7 = iVar12 * 0x10000;
        uVar8 = ((uint)*pbVar10 * (uVar6 & 0xffff) + (uint)pbVar10[1] * (param_2 & 0xffff)) * 2;
        uVar6 = uVar8 + iVar12 * -0x10000;
        bVar3 = uVar6 <= uVar8;
        bVar2 = (uVar6 & 0x80000000) == 0;
        uVar6 = uVar6 * 2 | (uint)bVar3;
        uVar8 = (uint)bVar3 * (uVar6 + iVar12 * -0x10000) + (uint)!bVar3 * (uVar6 + iVar7);
        cVar1 = bVar3 * (uVar6 < uVar8) + !bVar3 * (uVar8 < uVar6);
        bVar4 = bVar2 * cVar1 + (!bVar2 && cVar1 == '\0');
        uVar6 = uVar8 * 2 | (uint)((bVar4 & 1) == (bVar4 >> 1 & 1));
        bVar2 = (bVar4 & 1) == (bVar4 >> 1 & 1);
        bVar3 = (bool)(bVar4 >> 1 & 1) == ((uVar8 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar6 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar6 + iVar7);
        cVar1 = bVar2 * (uVar6 < uVar9) + !bVar2 * (uVar9 < uVar6);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = (uint)bVar4 << 8 & 0xfffffeff | uVar6;
        uVar5 = (uint)bVar4 << 8 & 0xfffffefe;
        uVar8 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar8;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar8;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar8 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar8 & 0xfffffefe;
        uVar8 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar8;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar8;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar8 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar8 & 0xfffffefe;
        uVar8 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar8;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar8;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar8 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar8 & 0xfffffefe;
        uVar8 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar8;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar8;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar8 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar8 & 0xfffffefe;
        uVar8 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar8;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar8;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar8 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar8 & 0xfffffefe;
        uVar8 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar8 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar6 & 0xfffffeff | uVar8;
        uVar5 = uVar5 | uVar6 & 0xfffffefe;
        uVar6 = uVar5 | uVar8;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar6 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar9 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar9) + !bVar2 * (uVar9 < uVar13);
        uVar6 = (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        uVar13 = uVar5 | uVar8 & 0xfffffeff | uVar6;
        uVar5 = uVar5 | uVar8 & 0xfffffefe;
        uVar8 = uVar5 | uVar6;
        uVar13 = uVar9 * 2 | (uint)(((byte)(uVar13 >> 8) & 1) == ((byte)(uVar13 >> 9) & 1));
        bVar2 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar3 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar9 & 0x80000000) != 0);
        uVar8 = (uint)bVar2 * (uVar13 + iVar12 * -0x10000) + (uint)!bVar2 * (uVar13 + iVar7);
        cVar1 = bVar2 * (uVar13 < uVar8) + !bVar2 * (uVar8 < uVar13);
        uVar6 = uVar5 | uVar6 & 0xfffffeff |
                (uint)(byte)(bVar3 * cVar1 + (!bVar3 && cVar1 == '\0')) << 8;
        return uVar8 * 2 & 0xff | (uint)(((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1));
      }
    }
    else {
      pbVar10 = pbVar10 + iVar12;
    }
  }
  return (int)(char)*pbVar10;
}

