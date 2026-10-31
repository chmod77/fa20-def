
int FUN_00135750(byte *param_1,ushort param_2)

{
  short *psVar1;
  short *psVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  psVar1 = *(short **)(param_1 + 8);
  if (**(ushort **)(param_1 + 4) < param_2) {
    puVar3 = *(ushort **)(param_1 + 4) + (*param_1 - 1);
    psVar1 = psVar1 + (*param_1 - 1);
    if (param_2 < *puVar3) {
      do {
        puVar4 = puVar3;
        psVar2 = psVar1;
        puVar3 = puVar4 + -1;
        psVar1 = psVar2 + -1;
      } while (param_2 < *puVar3);
      if (param_2 == *puVar4) {
        return (int)*psVar2;
      }
    }
  }
  return (int)*psVar1;
}

