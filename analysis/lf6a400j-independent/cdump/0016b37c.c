
uint FUN_0016b37c(byte param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_1 + (param_2 & 0xff);
  if (uVar1 < (param_3 & 0xff)) {
    param_3 = uVar1;
  }
  return param_3;
}

