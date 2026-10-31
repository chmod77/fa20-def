
int FUN_001354d0(byte *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  
  pcVar3 = *(char **)(param_1 + 8);
  param_2 = param_2 & 0xffff;
  if (**(ushort **)(param_1 + 4) < param_2) {
    puVar6 = *(ushort **)(param_1 + 4) + (*param_1 - 1);
    pcVar3 = pcVar3 + (*param_1 - 1);
    if (param_2 < *puVar6) {
      do {
        puVar7 = puVar6;
        pcVar4 = pcVar3;
        puVar6 = puVar7 + -1;
        pcVar3 = pcVar4 + -1;
      } while (param_2 < *puVar6);
      iVar8 = (int)*pcVar3;
      iVar1 = (int)*pcVar4;
      iVar5 = (uint)*puVar7 - (uint)*puVar6;
      if (iVar8 < iVar1) {
        iVar1 = (*(code *)PTR_FUN_0013555c)(iVar5,iVar1 - iVar8);
        return iVar1 + iVar8;
      }
      uVar2 = (*(code *)PTR_FUN_0013555c)(iVar5,iVar1,param_2 - *puVar6);
      return iVar8 - (uVar2 & 0xff);
    }
  }
  return (int)*pcVar3;
}

