
void FUN_000910d8(float param_1,byte param_2,ushort param_3,ushort param_4,ushort param_5,
                 byte param_6,short param_7,byte param_8,undefined2 *param_9)

{
  float fVar1;
  
  param_1 = ((float)param_4 * 0.00390625 + (float)param_2 * 0.00390625 +
             (float)param_5 * 1.5258788e-05 + (float)param_6 * 0.00390625 +
             (float)(int)param_7 * 1.5258788e-05 + (float)param_8 * 0.00390625 +
             (float)param_3 * 0.00390625 + 0.5) * param_1;
  fVar1 = 52428.0;
  if ((param_1 <= 52428.0) && (fVar1 = param_1, param_1 < 0.0)) {
    fVar1 = 0.0;
  }
  if (fVar1 <= 52428.0) {
    if (0.0 <= fVar1) {
      *param_9 = (short)(int)(fVar1 * 1.25);
    }
    else {
      *param_9 = 0;
    }
  }
  else {
    *param_9 = 0xffff;
  }
  return;
}

