
uint FUN_00052ade(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  int local_14;
  int aiStack_10 [2];
  
  if (param_2 != param_1) {
    aiStack_10[0] = param_5 - param_1;
    local_14 = param_3 - param_4;
    if (param_3 < param_4) {
      local_14 = -local_14;
      FUN_0016b31c(aiStack_10[0],local_14,aiStack_10,&local_14);
      iVar1 = FUN_0016b26c(aiStack_10[0],local_14,0,param_2 - param_1);
      param_3 = param_3 + iVar1;
    }
    else {
      FUN_0016b31c(aiStack_10[0],local_14,aiStack_10,&local_14);
      iVar1 = FUN_0016b26c(aiStack_10[0],local_14,0,param_2 - param_1);
      param_3 = param_3 - iVar1;
    }
  }
  return param_3;
}

