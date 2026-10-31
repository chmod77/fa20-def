
void FUN_0009106c(float param_1,byte param_2,ushort param_3,ushort param_4,undefined2 *param_5)

{
  float fVar1;
  
  param_1 = ((float)param_4 * 0.00390625 + (float)param_2 * 0.00390625 + (float)param_3 * 0.00390625
            + 0.5) * param_1;
  fVar1 = 52428.0;
  if ((param_1 <= 52428.0) && (fVar1 = param_1, param_1 < 0.0)) {
    fVar1 = 0.0;
  }
  if (fVar1 <= 52428.0) {
    if (fVar1 < 0.0) {
      *param_5 = 0;
      return;
    }
    *param_5 = (short)(int)(fVar1 * 1.25);
    return;
  }
  *param_5 = 0xffff;
  return;
}

