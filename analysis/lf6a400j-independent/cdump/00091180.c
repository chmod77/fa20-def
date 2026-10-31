
void FUN_00091180(float param_1,byte param_2,ushort param_3,undefined2 *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)param_3 * param_1 * (float)param_2 * 1.5258789e-05;
  fVar1 = 52428.0;
  if ((fVar2 <= 52428.0) && (fVar1 = fVar2, fVar2 < 0.0)) {
    fVar1 = 0.0;
  }
  if (fVar1 <= 52428.0) {
    if (fVar1 < 0.0) {
      *param_4 = 0;
      return;
    }
    *param_4 = (short)(int)(fVar1 * 1.25);
    return;
  }
  *param_4 = 0xffff;
  return;
}

