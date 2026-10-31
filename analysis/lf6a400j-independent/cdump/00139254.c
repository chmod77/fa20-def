
/* WARNING: Unknown calling convention */

uint LK_139254(uint p0,uint p1,uint p2)

{
  uint b;
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  ushort *puVar9;
  ushort *puVar10;
  
  puVar1 = *(uint **)(p0 + 0xc);
  puVar9 = *(ushort **)(p0 + 4);
  uVar3 = p1 & 0xffff;
  uVar6 = (uint)*(byte *)(p0 + 8);
  if (uVar3 < *puVar9) {
    p1 = (uint)(short)*puVar9;
    uVar3 = (uint)*puVar9;
  }
  uVar4 = *(byte *)p0 - 1 & 0xffff;
  puVar9 = puVar9 + uVar4;
  if (*puVar9 < uVar3) {
    p1 = (uint)(short)*puVar9;
    uVar3 = (uint)*puVar9;
  }
  do {
    puVar10 = puVar9;
    puVar9 = puVar10 + -1;
    uVar4 = uVar4 - 1;
  } while (uVar3 < *puVar9);
  psVar8 = (short *)(*(int *)(p0 + 0x10) + uVar6 * (uVar4 & 0xffff) * 2);
  if (p2 < *puVar1) {
    p2 = *puVar1;
  }
  if (puVar1[uVar6 - 1] < p2) {
    p2 = puVar1[uVar6 - 1];
  }
  while (puVar2 = puVar1 + 1, *puVar2 < p2) {
    psVar8 = psVar8 + 1;
    puVar1 = puVar2;
  }
  iVar5 = p2 - *puVar1;
  iVar7 = *puVar2 - p2;
  if (iVar5 + iVar7 == 0) {
    uVar4 = (uint)*psVar8;
    uVar3 = (uint)psVar8[uVar6];
  }
  else {
    uVar4 = FUN_0016c048(iVar5,iVar7,*psVar8,psVar8[1]);
    uVar3 = FUN_0016c048(iVar5,iVar7,psVar8[uVar6],(psVar8 + uVar6)[1]);
  }
  uVar6 = (int)(short)*puVar10 - p1;
  b = (p1 - (int)(short)*puVar9) + uVar6 & 0xffff;
  if (b != 0) {
    uVar4 = __udiv32_r1_by_r0((uVar4 & 0xffff) * (uVar6 & 0xffff) +
                              (uVar3 & 0xffff) * (p1 - (int)(short)*puVar9 & 0xffff),b);
  }
  return uVar4;
}

