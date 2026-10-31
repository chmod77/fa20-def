
/* WARNING: Unknown calling convention */

uint LK_139E34(uint p0,uint p1,uint p2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint b;
  int iVar8;
  short *psVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  puVar6 = *(ushort **)(p0 + 0xc);
  pbVar10 = *(byte **)(p0 + 4);
  uVar3 = p1 & 0xff;
  uVar2 = (uint)*(byte *)(p0 + 8);
  if (uVar3 < *pbVar10) {
    uVar3 = (uint)*pbVar10;
    p1 = uVar3;
  }
  uVar5 = *(byte *)p0 - 1 & 0xffff;
  pbVar10 = pbVar10 + uVar5;
  if (*pbVar10 < uVar3) {
    uVar3 = (uint)*pbVar10;
    p1 = uVar3;
  }
  do {
    pbVar11 = pbVar10;
    pbVar10 = pbVar11 + -1;
    uVar5 = uVar5 - 1;
  } while (uVar3 < *pbVar10);
  psVar9 = (short *)(*(int *)(p0 + 0x10) + uVar2 * (uVar5 & 0xffff) * 2);
  uVar3 = p2 & 0xffff;
  if (uVar3 < *puVar6) {
    p2 = (uint)(short)*puVar6;
    uVar3 = (uint)*puVar6;
  }
  if (puVar6[uVar2 - 1] < uVar3) {
    p2 = (uint)(short)puVar6[uVar2 - 1];
    uVar3 = (uint)puVar6[uVar2 - 1];
  }
  while (puVar7 = puVar6 + 1, *puVar7 < uVar3) {
    psVar9 = psVar9 + 1;
    puVar6 = puVar7;
  }
  uVar5 = -(uint)*puVar6 + p2;
  b = -(uint)*puVar6 + (int)(short)*puVar7 & 0xffff;
  uVar3 = (uint)*psVar9;
  iVar1 = (int)psVar9[1];
  if (b == 0) {
    sVar4 = psVar9[uVar2];
  }
  else {
    if ((int)uVar3 < iVar1) {
      iVar1 = __udiv32_r1_by_r0((uVar5 & 0xffff) * (iVar1 - uVar3 & 0xffff),b);
      iVar1 = (int)(short)iVar1;
    }
    else {
      iVar1 = __udiv32_r1_by_r0((uVar5 & 0xffff) * (uVar3 - iVar1 & 0xffff),b);
      iVar1 = -(int)(short)iVar1;
    }
    uVar3 = iVar1 + uVar3;
    sVar4 = psVar9[uVar2];
    iVar8 = (int)sVar4;
    iVar1 = (int)(psVar9 + uVar2)[1];
    if (iVar8 < iVar1) {
      iVar1 = __udiv32_r1_by_r0((uVar5 & 0xffff) * (iVar1 - iVar8 & 0xffffU),b);
      sVar4 = (short)iVar1 + sVar4;
    }
    else {
      iVar1 = __udiv32_r1_by_r0((uVar5 & 0xffff) * (iVar8 - iVar1 & 0xffffU),b);
      sVar4 = sVar4 - (short)iVar1;
    }
  }
  uVar2 = (uint)*pbVar10;
  if (*pbVar11 != uVar2) {
    uVar5 = (p1 & 0xff) - uVar2;
    iVar8 = (int)(short)uVar3;
    iVar1 = (int)sVar4;
    uVar2 = *pbVar11 - uVar2 & 0xffff;
    if (iVar8 < iVar1) {
      iVar1 = __udiv32_r1_by_r0((uVar5 & 0xffff) * (iVar1 - iVar8 & 0xffffU),uVar2);
      uVar3 = iVar1 + iVar8;
    }
    else {
      uVar2 = __udiv32_r1_by_r0((uVar5 & 0xffff) * (iVar8 - iVar1 & 0xffffU),uVar2);
      uVar3 = iVar8 - (uVar2 & 0xffff);
    }
  }
  return uVar3;
}

