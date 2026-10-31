
uint FUN_0016b924(byte param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (((param_2 & 0xff) < (uint)param_1) &&
     (uVar1 = (uint)param_1 - (param_2 & 0xff), (int)(param_3 & 0xff) < (int)uVar1)) {
    param_3 = uVar1;
  }
  return param_3;
}

