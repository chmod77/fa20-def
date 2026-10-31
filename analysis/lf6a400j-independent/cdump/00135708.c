
/* WARNING: Unknown calling convention */

uint LK_135708(uint p0,uint p1)

{
  char *pcVar1;
  char *pcVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  
  pcVar1 = *(char **)(p0 + 8);
  uVar5 = p1 & 0xffff;
  if (**(ushort **)(p0 + 4) < uVar5) {
    puVar3 = *(ushort **)(p0 + 4) + (*(byte *)p0 - 1);
    pcVar1 = pcVar1 + (*(byte *)p0 - 1);
    if (uVar5 < *puVar3) {
      do {
        puVar4 = puVar3;
        pcVar2 = pcVar1;
        puVar3 = puVar4 + -1;
        pcVar1 = pcVar2 + -1;
      } while (uVar5 < *puVar3);
      if (uVar5 == *puVar4) {
        return (int)*pcVar2;
      }
    }
  }
  return (int)*pcVar1;
}

