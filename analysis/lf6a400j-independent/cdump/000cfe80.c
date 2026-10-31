
void FUN_000cfe80(float param_1,int *param_2)

{
  float fVar1;
  
  param_1 = param_1 + 0.00039062498;
  fVar1 = 3355443.0;
  if ((param_1 <= 3355443.0) && (fVar1 = param_1, param_1 < 0.0)) {
    fVar1 = 0.0;
  }
  if (3355443.0 < fVar1) {
    *param_2 = -1;
    return;
  }
  if (0.0 <= fVar1) {
    fVar1 = fVar1 * 1280.0;
    if (2.1474836e+09 <= fVar1) {
      fVar1 = fVar1 - 4.2949673e+09;
    }
    *param_2 = (int)fVar1;
    return;
  }
  *param_2 = 0;
  return;
}

