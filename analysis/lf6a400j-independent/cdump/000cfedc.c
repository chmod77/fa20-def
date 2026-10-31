
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cfedc(float param_1,float param_2,ushort param_3,byte param_4,char param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  
  if (param_5 != '\0') {
    fVar1 = ((float)param_4 + 223.0) * 287.0;
    fVar2 = 0.0;
    if (fVar1 != 0.0) {
      fVar2 = ((((float)param_3 * 16000.0 * 2.4414062e-08) / 2.0) * param_1) / fVar1;
    }
    _DAT_fffecd70 = param_2 * fVar2 * 1000.0;
  }
  if (param_5 == '\0') {
    *param_6 = 0.0;
    return;
  }
  *param_6 = _DAT_fffecd70;
  return;
}

