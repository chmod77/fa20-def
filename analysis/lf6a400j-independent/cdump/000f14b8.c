
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f14b8(int param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = (float)param_1 * 0.0027465818;
  if (DAT_fffed64c != '\0') {
    fVar1 = _DAT_fffed648;
  }
  _DAT_fffed648 = (float)param_1 * 0.0027465818 * 0.5 + fVar1 * 0.5;
  fVar1 = 5898239.5;
  if ((_DAT_fffed648 <= 5898239.5) && (fVar1 = _DAT_fffed648, _DAT_fffed648 < -5.89824e+06)) {
    fVar1 = -5.89824e+06;
  }
  if (fVar1 <= 5898239.5) {
    if (-5.89824e+06 <= fVar1) {
      *param_2 = (int)(fVar1 * 364.08887);
    }
    else {
      *param_2 = -0x80000000;
    }
  }
  else {
    *param_2 = 0x7fffffff;
  }
  DAT_fffed64c = 1;
  return;
}

