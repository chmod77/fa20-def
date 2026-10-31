
/* WARNING: Unknown calling convention */

uint LK_133A54(uint p0,uint p1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  
  uVar3 = p1 & 0xffff;
  puVar2 = *(ushort **)(p0 + 4);
  iVar1 = 0;
  if ((*puVar2 < uVar3) && (iVar1 = (uint)*(byte *)p0 * 2 + -2, uVar3 < puVar2[*(byte *)p0 - 1])) {
    for (iVar1 = 2; uVar3 != *(ushort *)(iVar1 + (int)puVar2); iVar1 = iVar1 + 2) {
      if (uVar3 < *(ushort *)(iVar1 + (int)puVar2)) {
        iVar1 = iVar1 + -2;
        break;
      }
    }
  }
  return (int)*(short *)(*(int *)(p0 + 8) + iVar1);
}

