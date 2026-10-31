
void FUN_00119a5c(float param_1,char param_2,ushort param_3,undefined2 *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if (param_2 != '\0') {
    fVar1 = (float)param_3 * param_1 * 0.1953125;
  }
  fVar2 = 1999.9694;
  if ((fVar1 <= 1999.9694) && (fVar2 = fVar1, fVar1 < 0.0)) {
    fVar2 = 0.0;
  }
  if (fVar2 <= 1999.9694) {
    if (fVar2 < 0.0) {
      *param_4 = 0;
      return;
    }
    *param_4 = (short)(int)(fVar2 * 32.767998);
    return;
  }
  *param_4 = 0xffff;
  return;
}

