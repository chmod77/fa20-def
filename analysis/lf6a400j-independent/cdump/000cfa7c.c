
void FUN_000cfa7c(float param_1,undefined2 *param_2)

{
  float fVar1;
  
  param_1 = param_1 * 0.0009999999;
  fVar1 = 255.9961;
  if ((param_1 <= 255.9961) && (fVar1 = param_1, param_1 < 0.0)) {
    fVar1 = 0.0;
  }
  if (fVar1 <= 255.9961) {
    if (fVar1 < 0.0) {
      *param_2 = 0;
      return;
    }
    *param_2 = (short)(int)(fVar1 * 256.0);
    return;
  }
  *param_2 = 0xffff;
  return;
}

