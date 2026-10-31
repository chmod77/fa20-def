
void FUN_000862fc(ushort param_1,ushort param_2,undefined2 *param_3)

{
  float fVar1;
  
  fVar1 = (float)(int)((uint)param_2 * 0xa1be);
  if ((int)((uint)param_2 * 0xa1be) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar1 = fVar1 * (float)param_1 * 2.8421708e-14;
  if (1.9999694 < fVar1) {
    fVar1 = 1.9999694;
  }
  if (fVar1 <= 1.9999694) {
    *param_3 = (short)(int)(fVar1 * 32768.0);
  }
  else {
    *param_3 = 0xffff;
  }
  return;
}

