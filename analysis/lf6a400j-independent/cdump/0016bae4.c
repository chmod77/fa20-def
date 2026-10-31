
int FUN_0016bae4(undefined4 *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  short *psVar5;
  
  psVar5 = (short *)*param_1;
  pbVar4 = (byte *)param_1[1];
  uVar2 = 0;
  while ((*pbVar4 < param_2 &&
         (uVar3 = uVar2 & 0xff, uVar2 = uVar3 + 1, (int)uVar3 < (int)(*(byte *)(param_1 + 2) - 1))))
  {
    pbVar4 = pbVar4 + 1;
    psVar5 = psVar5 + 1;
  }
  if (((uVar2 & 0xff) == 0) || ((uVar2 & 0xff) == (uint)*(byte *)(param_1 + 2))) {
    iVar1 = (int)*psVar5;
  }
  else {
    iVar1 = FUN_0016bee4((int)(char)pbVar4[-1],(int)(char)*pbVar4,(int)psVar5[-1],(int)*psVar5,
                         param_2);
  }
  return iVar1;
}

