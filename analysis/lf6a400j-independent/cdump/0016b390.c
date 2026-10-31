
uint FUN_0016b390(uint param_1,ushort param_2,uint param_3)

{
  if ((param_1 & 0xffff) + (uint)param_2 < (param_3 & 0xffff)) {
    param_3 = (param_1 & 0xffff) + (uint)param_2;
  }
  return param_3;
}

