
int FUN_00135708(byte *param_1,ushort param_2)

{
  char *pcVar1;
  char *pcVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  pcVar1 = *(char **)(param_1 + 8);
  if (**(ushort **)(param_1 + 4) < param_2) {
    puVar3 = *(ushort **)(param_1 + 4) + (*param_1 - 1);
    pcVar1 = pcVar1 + (*param_1 - 1);
    if (param_2 < *puVar3) {
      do {
        puVar4 = puVar3;
        pcVar2 = pcVar1;
        puVar3 = puVar4 + -1;
        pcVar1 = pcVar2 + -1;
      } while (param_2 < *puVar3);
      if (param_2 == *puVar4) {
        return (int)*pcVar2;
      }
    }
  }
  return (int)*pcVar1;
}

