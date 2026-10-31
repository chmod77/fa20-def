
void FUN_000c4738(float param_1,ushort param_2,char param_3,undefined2 *param_4)

{
  float fVar1;
  float fVar2;
  
  if (param_3 == '\0') {
    fVar2 = ((param_1 * 49917.0 * (float)param_2 * 2.6375345e-11) / 60.0) * 32768.0 * 3.0517578e-05;
    fVar1 = 65.534996;
    if ((fVar2 <= 65.534996) && (fVar1 = fVar2, fVar2 < 0.0)) {
      fVar1 = 0.0;
    }
    if (65.534996 < fVar1) {
      *param_4 = 0xffff;
      return;
    }
    if (0.0 <= fVar1) {
      *param_4 = (short)(int)(fVar1 * 1000.0);
      return;
    }
  }
  *param_4 = 0;
  return;
}

