
void FUN_000db454(byte param_1,byte param_2,uint param_3,undefined2 *param_4)

{
  *param_4 = (short)((param_3 & 0xff) * (uint)param_2 * (uint)param_1 >> 9);
  return;
}

