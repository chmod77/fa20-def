
/* WARNING: Unknown calling convention */

uint LK_13714C(uint p0,uint p1,uint p2)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  
  puVar1 = *(ushort **)(p0 + 0xc);
  puVar9 = *(ushort **)(p0 + 4);
  uVar3 = p1 & 0xffff;
  uVar5 = (uint)*(byte *)(p0 + 8);
  if (uVar3 < *puVar9) {
    p1 = (uint)(short)*puVar9;
    uVar3 = (uint)*puVar9;
  }
  if (puVar9[*(byte *)p0 - 1] < uVar3) {
    p1 = (uint)(short)puVar9[*(byte *)p0 - 1];
    uVar3 = (uint)puVar9[*(byte *)p0 - 1];
  }
  uVar4 = 0;
  while (puVar10 = puVar9 + 1, *puVar10 < uVar3) {
    uVar4 = uVar4 + 1;
    puVar9 = puVar10;
  }
  puVar8 = (uint *)(*(int *)(p0 + 0x10) + uVar5 * (uVar4 & 0xffff) * 4);
  uVar3 = p2 & 0xffff;
  if (uVar3 < *puVar1) {
    p2 = (uint)(short)*puVar1;
    uVar3 = (uint)*puVar1;
  }
  if (puVar1[uVar5 - 1] < uVar3) {
    p2 = (uint)(short)puVar1[uVar5 - 1];
    uVar3 = (uint)puVar1[uVar5 - 1];
  }
  while (puVar2 = puVar1 + 1, *puVar2 < uVar3) {
    puVar8 = puVar8 + 1;
    puVar1 = puVar2;
  }
  iVar6 = (p2 & 0xffff) - (uint)*puVar1;
  iVar7 = (uint)*puVar2 - (p2 & 0xffff);
  if (iVar6 + iVar7 == 0) {
    uVar4 = *puVar8;
    uVar3 = puVar8[uVar5];
  }
  else {
    uVar4 = FUN_0016c048(iVar6,iVar7,*puVar8,puVar8[1]);
    uVar3 = FUN_0016c048(iVar6,iVar7,puVar8[uVar5],(puVar8 + uVar5)[1]);
  }
  iVar6 = (p1 & 0xffff) - (uint)*puVar9;
  iVar7 = (uint)*puVar10 - (p1 & 0xffff);
  if (iVar6 + iVar7 != 0) {
    uVar4 = FUN_0016c048(iVar6,iVar7,uVar4,uVar3);
  }
  return uVar4;
}

