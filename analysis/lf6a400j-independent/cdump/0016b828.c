
void FUN_0016b828(undefined4 *param_1,ushort param_2,ushort param_3)

{
  byte bVar1;
  undefined2 uVar3;
  undefined4 uVar2;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  short *psVar7;
  
  psVar7 = (short *)*param_1;
  puVar5 = (ushort *)param_1[1];
  puVar6 = (ushort *)param_1[2];
  bVar1 = *(byte *)((int)param_1 + 0xd);
  if (puVar5[*(byte *)(param_1 + 3) - 1] < param_2) {
    param_2 = puVar5[*(byte *)(param_1 + 3) - 1];
  }
  if (param_2 < *puVar5) {
    param_2 = *puVar5;
  }
  for (; puVar5[1] < param_2; puVar5 = puVar5 + 1) {
    psVar7 = psVar7 + bVar1;
  }
  if (puVar6[bVar1 - 1] < param_3) {
    param_3 = puVar6[bVar1 - 1];
  }
  uVar4 = param_3;
  if (param_3 < *puVar6) {
    param_3 = *puVar6;
    uVar4 = param_3;
  }
  for (; puVar6[1] < uVar4; puVar6 = puVar6 + 1) {
    psVar7 = psVar7 + 1;
  }
  uVar3 = FUN_0016bf7c((int)(short)*puVar6,(int)(short)puVar6[1],(int)*psVar7,(int)psVar7[1],param_3
                      );
  uVar2 = FUN_0016bf7c((int)(short)*puVar6,(int)(short)puVar6[1],(int)psVar7[bVar1],
                       (int)psVar7[bVar1 + 1],param_3);
  FUN_0016bf7c((int)(short)*puVar5,(int)(short)puVar5[1],uVar3,uVar2,param_2);
  return;
}

