
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f50a8(int param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = (float)param_1 * 0.099999994;
  if (DAT_fffed770 != '\0') {
    fVar1 = _DAT_fffed76c;
  }
  _DAT_fffed76c = (float)param_1 * 0.099999994 * 0.5 + fVar1 * 0.5;
  fVar1 = 2.1474835e+08;
  if ((_DAT_fffed76c <= 2.1474835e+08) && (fVar1 = _DAT_fffed76c, _DAT_fffed76c < -2.1474835e+08)) {
    fVar1 = -2.1474835e+08;
  }
  if (fVar1 <= 2.1474835e+08) {
    if (-2.1474835e+08 <= fVar1) {
      *param_2 = (int)(fVar1 * 10.0);
    }
    else {
      *param_2 = -0x80000000;
    }
  }
  else {
    *param_2 = 0x7fffffff;
  }
  DAT_fffed770 = 1;
  return;
}

