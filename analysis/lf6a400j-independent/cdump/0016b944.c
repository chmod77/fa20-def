
uint FUN_0016b944(uint param_1,uint param_2,uint param_3)

{
  param_2 = param_2 & 0xffff;
  if ((param_2 < (param_1 & 0xffff)) && ((param_3 & 0xffff) < (param_1 & 0xffff) - param_2)) {
    param_3 = (param_1 & 0xffff) - param_2;
  }
  return param_3;
}

