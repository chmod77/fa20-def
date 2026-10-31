
/* WARNING: Unknown calling convention */

uint LK_1350D8(uint p0,uint p1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  
  iVar2 = (int)(short)p1;
  pbVar6 = *(byte **)(p0 + 8);
  if (**(short **)(p0 + 4) < iVar2) {
    psVar8 = *(short **)(p0 + 4) + (*(byte *)p0 - 1);
    pbVar6 = pbVar6 + (*(byte *)p0 - 1);
    if (iVar2 < *psVar8) {
      do {
        psVar9 = psVar8;
        pbVar7 = pbVar6;
        psVar8 = psVar9 + -1;
        pbVar6 = pbVar7 + -1;
      } while (iVar2 < *psVar8);
      uVar5 = (uint)*pbVar6;
      uVar10 = (uint)*pbVar7;
      uVar3 = iVar2 - *psVar8;
      uVar1 = (int)*psVar9 - (int)*psVar8 & 0xffff;
      uVar4 = uVar5 - uVar10;
      if (uVar5 < uVar10) {
        iVar2 = __udiv32_r1_by_r0((uVar3 & 0xffff) * (-uVar4 & 0xffff),uVar1);
        return iVar2 + uVar5;
      }
      uVar1 = __udiv32_r1_by_r0((uVar3 & 0xffff) * (uVar4 & 0xffff),uVar1);
      return uVar5 - (uVar1 & 0xff);
    }
  }
  return (int)(char)*pbVar6;
}

