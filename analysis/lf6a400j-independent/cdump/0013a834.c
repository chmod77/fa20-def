
/* WARNING: Unknown calling convention */

uint LK_13A834(uint p0,uint p1,uint p2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  byte *pbVar8;
  uint b;
  ushort *puVar9;
  ushort *puVar10;
  
  puVar1 = *(ushort **)(p0 + 0xc);
  uVar3 = (ushort)*(byte *)(p0 + 8);
  puVar9 = *(ushort **)(p0 + 4);
  uVar4 = p1 & 0xffff;
  if (uVar4 < *puVar9) {
    p1 = (uint)(short)*puVar9;
    uVar4 = (uint)*puVar9;
  }
  if (puVar9[*(byte *)p0 - 1] < uVar4) {
    p1 = (uint)(short)puVar9[*(byte *)p0 - 1];
    uVar4 = (uint)puVar9[*(byte *)p0 - 1];
  }
  uVar5 = 0;
  while (puVar10 = puVar9 + 1, *puVar10 < uVar4) {
    uVar5 = uVar5 + 1;
    puVar9 = puVar10;
  }
  uVar4 = p2 & 0xffff;
  if (uVar4 < *puVar1) {
    p2 = (uint)(short)*puVar1;
    uVar4 = (uint)*puVar1;
  }
  uVar6 = (int)(short)uVar3 - 1;
  puVar1 = puVar1 + (uVar6 & 0xffff);
  if (*puVar1 < uVar4) {
    p2 = (uint)(short)*puVar1;
    uVar4 = (uint)*puVar1;
  }
  do {
    puVar2 = puVar1;
    puVar1 = puVar2 + -1;
    uVar6 = uVar6 - 1;
  } while (uVar4 < *puVar1);
  uVar4 = (int)(short)*puVar2 - p2 & 0xffff;
  b = (p2 - (int)(short)*puVar1) + uVar4 & 0xffff;
  pbVar8 = (byte *)(*(int *)(p0 + 0x10) + (uint)uVar3 * (uVar5 & 0xffff) + (uVar6 & 0xffff));
  if (b == 0) {
    uVar5 = (uint)(char)*pbVar8;
    uVar4 = (uint)(char)pbVar8[uVar3];
  }
  else {
    pcVar7 = __udiv32_r1_by_r0;
    uVar5 = __udiv32_r1_by_r0(uVar4 * *pbVar8 +
                              (p2 - (int)(short)*puVar1 & 0xffff) * (uint)pbVar8[1],b);
    uVar4 = (*pcVar7)();
  }
  uVar6 = (p1 - (int)(short)*puVar9) + ((int)(short)*puVar10 - p1) & 0xffff;
  if (uVar6 != 0) {
    uVar5 = __udiv32_r1_by_r0((uVar5 & 0xff) * ((int)(short)*puVar10 - p1 & 0xffff) +
                              (uVar4 & 0xff) * (p1 - (int)(short)*puVar9 & 0xffff),uVar6);
  }
  return uVar5;
}

