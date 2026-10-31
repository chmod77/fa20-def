
/* WARNING: Unknown calling convention */

uint LK_1354D0(uint p0,uint p1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int b;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  pcVar2 = *(char **)(p0 + 8);
  uVar6 = p1 & 0xffff;
  if (**(ushort **)(p0 + 4) < uVar6) {
    puVar4 = *(ushort **)(p0 + 4) + (*(byte *)p0 - 1);
    pcVar2 = pcVar2 + (*(byte *)p0 - 1);
    if (uVar6 < *puVar4) {
      do {
        puVar5 = puVar4;
        pcVar3 = pcVar2;
        puVar4 = puVar5 + -1;
        pcVar2 = pcVar3 + -1;
      } while (uVar6 < *puVar4);
      iVar8 = (int)*pcVar2;
      iVar1 = (int)*pcVar3;
      iVar7 = uVar6 - *puVar4;
      b = (uint)*puVar5 - (uint)*puVar4;
      if (iVar8 < iVar1) {
        iVar1 = __udiv32_r1_by_r0(iVar7 * (iVar1 - iVar8 & 0xffffU),b);
        return iVar1 + iVar8;
      }
      uVar6 = __udiv32_r1_by_r0(iVar7 * (iVar8 - iVar1 & 0xffffU),b);
      return iVar8 - (uVar6 & 0xff);
    }
  }
  return (int)*pcVar2;
}

