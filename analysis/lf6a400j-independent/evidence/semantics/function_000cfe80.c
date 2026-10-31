
void FUN_000cfe80(float param_1,int *param_2)

{
  float fVar1;
  
  param_1 = param_1 + DAT_000cfecc;
  fVar1 = DAT_000cfed0;
  if ((param_1 <= DAT_000cfed0) && (fVar1 = param_1, param_1 < 0.0)) {
    fVar1 = 0.0;
  }
  if (DAT_000cfed0 < fVar1) {
    *param_2 = -1;
    return;
  }
  if (0.0 <= fVar1) {
    fVar1 = fVar1 * DAT_000cfed4;
    if (DAT_000cfed8 <= fVar1) {
      fVar1 = fVar1 - (DAT_000cfed8 + DAT_000cfed8);
    }
    *param_2 = (int)fVar1;
    return;
  }
  *param_2 = 0;
  return;
}

