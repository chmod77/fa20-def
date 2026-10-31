
void FUN_0007e3f8(ushort param_1,int param_2,char param_3,ushort param_4,undefined2 *param_5)

{
  float fVar1;
  float fVar2;
  
  if (param_3 != '\0') {
    param_2 = (uint)param_4 << 9;
  }
  fVar2 = (float)param_2;
  if (param_2 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  if (param_1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (((fVar2 * 0.00078124995) / 2586.0) * 200000.0) / ((float)param_1 * 0.1953125);
  }
  fVar1 = 255.9961;
  if ((fVar2 <= 255.9961) && (fVar1 = fVar2, fVar2 < 0.0)) {
    fVar1 = 0.0;
  }
  if (fVar1 <= 255.9961) {
    if (fVar1 < 0.0) {
      *param_5 = 0;
      return;
    }
    *param_5 = (short)(int)(fVar1 * 256.0);
    return;
  }
  *param_5 = 0xffff;
  return;
}

