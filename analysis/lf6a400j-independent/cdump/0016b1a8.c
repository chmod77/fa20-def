
int FUN_0016b1a8(undefined4 *param_1,short param_2)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  
  psVar5 = (short *)*param_1;
  psVar2 = (short *)param_1[1];
  uVar3 = 0;
  while (((int)*psVar2 <= (int)param_2 &&
         (uVar4 = uVar3 & 0xff, uVar3 = uVar4 + 1, (int)uVar4 < (int)(*(byte *)(param_1 + 2) - 1))))
  {
    psVar2 = psVar2 + 1;
    psVar5 = psVar5 + 1;
  }
  if (((uVar3 & 0xff) == 0) || ((uVar3 & 0xff) == (uint)*(byte *)(param_1 + 2))) {
    iVar1 = (int)*psVar5;
  }
  else {
    iVar1 = FUN_0016aa04((int)psVar2[-1],(int)*psVar2,(int)psVar5[-1],(int)*psVar5,(int)param_2);
  }
  return iVar1;
}

