
uint FUN_0016b630(uint param_1,uint param_2)

{
  if ((param_1 & 0xffff) < (param_2 & 0xffff)) {
    param_1 = param_2;
  }
  return param_1;
}

