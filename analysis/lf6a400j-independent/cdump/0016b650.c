
void FUN_0016b650(undefined4 *param_1,byte param_2,byte param_3)

{
  byte bVar1;
  undefined1 uVar3;
  undefined4 uVar2;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  
  pcVar7 = (char *)*param_1;
  pbVar5 = (byte *)param_1[1];
  pbVar6 = (byte *)param_1[2];
  bVar1 = *(byte *)((int)param_1 + 0xd);
  if (pbVar5[*(byte *)(param_1 + 3) - 1] < param_2) {
    param_2 = pbVar5[*(byte *)(param_1 + 3) - 1];
  }
  if (param_2 < *pbVar5) {
    param_2 = *pbVar5;
  }
  for (; pbVar5[1] < param_2; pbVar5 = pbVar5 + 1) {
    pcVar7 = pcVar7 + bVar1;
  }
  if (pbVar6[bVar1 - 1] < param_3) {
    param_3 = pbVar6[bVar1 - 1];
  }
  bVar4 = param_3;
  if (param_3 < *pbVar6) {
    param_3 = *pbVar6;
    bVar4 = param_3;
  }
  for (; pbVar6[1] < bVar4; pbVar6 = pbVar6 + 1) {
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = FUN_0016be94((int)(char)*pbVar6,(int)(char)pbVar6[1],(int)*pcVar7,(int)pcVar7[1],param_3);
  uVar2 = FUN_0016be94((int)(char)*pbVar6,(int)(char)pbVar6[1],(int)pcVar7[bVar1],
                       (int)pcVar7[bVar1 + 1],param_3);
  FUN_0016be94((int)(char)*pbVar5,(int)(char)pbVar5[1],uVar3,uVar2,param_2);
  return;
}

