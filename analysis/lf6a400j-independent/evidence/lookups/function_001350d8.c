
int FUN_001350d8(byte *param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  short *psVar5;
  uint uVar6;
  
  pbVar3 = *(byte **)(param_1 + 8);
  if (**(short **)(param_1 + 4) < param_2) {
    psVar5 = *(short **)(param_1 + 4) + (*param_1 - 1);
    pbVar3 = pbVar3 + (*param_1 - 1);
    if (param_2 < *psVar5) {
      do {
        pbVar4 = pbVar3;
        psVar5 = psVar5 + -1;
        pbVar3 = pbVar4 + -1;
      } while (param_2 < *psVar5);
      uVar2 = (uint)*pbVar3;
      uVar6 = (uint)*pbVar4;
      if (uVar2 < uVar6) {
        iVar1 = (*(code *)PTR_FUN_00135160)();
        return iVar1 + uVar2;
      }
      uVar6 = (*(code *)PTR_FUN_00135160)(uVar2,uVar2,uVar6,param_4,uVar2);
      return uVar2 - (uVar6 & 0xff);
    }
  }
  return (int)(char)*pbVar3;
}

