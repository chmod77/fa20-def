
void FUN_0016b31c(uint param_1,uint param_2,int *param_3,int *param_4)

{
  uint uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    *param_4 = 0;
    *param_3 = *param_4;
  }
  else {
    uVar1 = ((param_2 & 0xffff) * (param_1 & 0xffff) >> 0x10) +
            (param_2 & 0xffff) * (param_1 >> 0x10);
    *param_3 = ((param_2 >> 0x10) * (param_1 & 0xffff) + (uVar1 & 0xffff) >> 0x10) +
               (param_2 >> 0x10) * (param_1 >> 0x10) + (uVar1 >> 0x10);
    *param_4 = param_2 * param_1;
  }
  return;
}

