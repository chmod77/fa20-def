
/* WARNING: Unknown calling convention */

uint LK_135750(uint p0,uint p1)

{
  short *psVar1;
  short *psVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  
  psVar1 = *(short **)(p0 + 8);
  uVar5 = p1 & 0xffff;
  if (**(ushort **)(p0 + 4) < uVar5) {
    puVar3 = *(ushort **)(p0 + 4) + (*(byte *)p0 - 1);
    psVar1 = psVar1 + (*(byte *)p0 - 1);
    if (uVar5 < *puVar3) {
      do {
        puVar4 = puVar3;
        psVar2 = psVar1;
        puVar3 = puVar4 + -1;
        psVar1 = psVar2 + -1;
      } while (uVar5 < *puVar3);
      if (uVar5 == *puVar4) {
        return (int)*psVar2;
      }
    }
  }
  return (int)*psVar1;
}

