
/* WARNING: Unknown calling convention */

uint LK_139368(uint p0,uint p1,uint p2)

{
  ushort uVar1;
  ushort uVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  
  psVar3 = *(short **)(p0 + 0xc);
  puVar11 = *(ushort **)(p0 + 4);
  uVar6 = p1 & 0xffff;
  uVar5 = (uint)*(byte *)(p0 + 8);
  if (uVar6 < *puVar11) {
    p1 = (uint)(short)*puVar11;
    uVar6 = (uint)*puVar11;
  }
  uVar7 = *(byte *)p0 - 1 & 0xffff;
  puVar11 = puVar11 + uVar7;
  if (*puVar11 < uVar6) {
    p1 = (uint)(short)*puVar11;
    uVar6 = (uint)*puVar11;
  }
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -1;
    uVar7 = uVar7 - 1;
  } while (uVar6 < *puVar11);
  puVar10 = (ushort *)(*(int *)(p0 + 0x10) + uVar5 * (uVar7 & 0xffff) * 2);
  iVar9 = (int)(short)p2;
  if (iVar9 < *psVar3) {
    iVar9 = (int)*psVar3;
  }
  if (psVar3[uVar5 - 1] < iVar9) {
    iVar9 = (int)psVar3[uVar5 - 1];
  }
  while (psVar4 = psVar3 + 1, *psVar4 < iVar9) {
    puVar10 = puVar10 + 1;
    psVar3 = psVar4;
  }
  uVar7 = -(int)*psVar3 + iVar9;
  uVar8 = -(int)*psVar3 + (int)*psVar4 & 0xffff;
  uVar1 = *puVar10;
  uVar6 = (uint)(short)uVar1;
  uVar2 = puVar10[1];
  if (uVar8 == 0) {
    uVar5 = (uint)(short)puVar10[uVar5];
  }
  else {
    if ((uint)uVar1 < (uint)uVar2) {
      iVar9 = __udiv32_r1_by_r0((uVar7 & 0xffff) * ((uint)uVar2 - (uint)uVar1),uVar8);
      uVar6 = iVar9 + (uint)uVar1;
    }
    else {
      iVar9 = __udiv32_r1_by_r0((uVar7 & 0xffff) * ((uint)uVar1 - (uint)uVar2),uVar8);
      uVar6 = uVar6 - iVar9;
    }
    uVar1 = puVar10[uVar5];
    uVar2 = (puVar10 + uVar5)[1];
    if ((uint)uVar1 < (uint)uVar2) {
      iVar9 = __udiv32_r1_by_r0((uVar7 & 0xffff) * ((uint)uVar2 - (uint)uVar1),uVar8);
      uVar5 = iVar9 + (uint)uVar1;
    }
    else {
      iVar9 = __udiv32_r1_by_r0((uVar7 & 0xffff) * ((uint)uVar1 - (uint)uVar2),uVar8);
      uVar5 = (short)uVar1 - iVar9;
    }
  }
  uVar7 = (int)(short)*puVar12 - p1;
  uVar8 = (p1 - (int)(short)*puVar11) + uVar7 & 0xffff;
  if (uVar8 != 0) {
    uVar6 = __udiv32_r1_by_r0((uVar6 & 0xffff) * (uVar7 & 0xffff) +
                              (uVar5 & 0xffff) * (p1 - (int)(short)*puVar11 & 0xffff),uVar8);
  }
  return uVar6;
}

