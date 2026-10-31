
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e43d8(char param_1,char param_2,ushort param_3,ushort param_4,undefined2 *param_5)

{
  float fVar1;
  float fVar2;
  
  if ((param_1 == '\0') || (param_2 != '\0')) {
    _DAT_fffed2c4 = 0.0;
  }
  else {
    _DAT_fffed2c4 =
         (float)param_3 * (float)param_4 * 5.9604645e-06 +
         _DAT_fffed2c4 * -((float)param_4 * 3.0517578e-05 + -1.0);
  }
  fVar1 = _DAT_fffed2c4 + 0.5;
  fVar2 = 65535.0;
  if ((fVar1 <= 65535.0) && (fVar2 = fVar1, fVar1 < 0.0)) {
    fVar2 = 0.0;
  }
  if (fVar2 <= 65535.0) {
    if (0.0 <= fVar2) {
      *param_5 = (short)(int)fVar2;
    }
    else {
      *param_5 = 0;
    }
  }
  else {
    *param_5 = 0xffff;
  }
  return;
}

