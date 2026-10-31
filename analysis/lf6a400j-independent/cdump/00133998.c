
/* WARNING: Unknown calling convention */

uint LK_133998(uint p0,uint p1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = p1 & 0xff;
  pbVar2 = *(byte **)(p0 + 4);
  iVar1 = 0;
  if ((*pbVar2 < uVar3) && (iVar1 = *(byte *)p0 - 1, uVar3 < pbVar2[iVar1])) {
    for (iVar1 = 1; uVar3 != pbVar2[iVar1]; iVar1 = iVar1 + 1) {
      if (uVar3 < pbVar2[iVar1]) {
        iVar1 = iVar1 + -1;
        break;
      }
    }
  }
  return (int)*(char *)(*(int *)(p0 + 8) + iVar1);
}

