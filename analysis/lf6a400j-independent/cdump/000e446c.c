
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e446c(char param_1,char param_2,ushort param_3,ushort param_4,ushort param_5,
                 undefined2 *param_6,ushort *param_7)

{
  float fVar1;
  float fVar2;
  
  if ((param_2 == '\0') || (param_1 == '\0')) {
    param_3 = param_5;
  }
  *param_7 = param_3;
  if (DAT_fffed2cc == '\0') {
    _DAT_fffed2c8 = (float)param_5 * 3.1999998;
  }
  else {
    _DAT_fffed2c8 =
         (float)param_3 * (float)param_4 * 9.7656244e-05 +
         _DAT_fffed2c8 * -((float)param_4 * 3.0517578e-05 + -1.0);
  }
  fVar1 = _DAT_fffed2c8 + 1.5999999;
  fVar2 = 209712.0;
  if ((fVar1 <= 209712.0) && (fVar2 = 0.0, 0.0 <= fVar1)) {
    fVar2 = fVar1;
  }
  *param_6 = (short)(int)(fVar2 * 0.3125);
  DAT_fffed2cc = 1;
  return;
}

