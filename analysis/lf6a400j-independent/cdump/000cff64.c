
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cff64(float param_1,float param_2,ushort param_3,byte param_4,char param_5,int *param_6)

{
  float fVar1;
  float fVar2;
  
  if (param_5 != '\0') {
    fVar1 = ((float)param_4 + 223.0) * 327.5;
    fVar2 = 0.0;
    if (fVar1 != 0.0) {
      fVar2 = ((((float)param_3 * 16000.0 * 2.4414062e-08) / 2.0) * param_1) / fVar1;
    }
    _DAT_fffecd74 = param_2 * fVar2 * 1000.0;
  }
  fVar1 = 0.0;
  if (param_5 != '\0') {
    fVar1 = _DAT_fffecd74;
  }
  fVar1 = fVar1 + 0.099999994;
  fVar2 = 8.589934e+08;
  if ((fVar1 <= 8.589934e+08) && (fVar2 = fVar1, fVar1 < 0.0)) {
    fVar2 = 0.0;
  }
  if (8.589934e+08 < fVar2) {
    *param_6 = -1;
    return;
  }
  if (0.0 <= fVar2) {
    fVar2 = fVar2 * 5.0;
    if (2.1474836e+09 <= fVar2) {
      fVar2 = fVar2 - 4.2949673e+09;
    }
    *param_6 = (int)fVar2;
    return;
  }
  *param_6 = 0;
  return;
}

