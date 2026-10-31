
void FUN_000cfac8(float param_1,float param_2,float *param_3)

{
  if (300000.0 <= param_1 + param_2) {
    *param_3 = 300000.0;
    return;
  }
  *param_3 = param_1 + param_2;
  return;
}

