
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d025c(char param_1,char param_2,ushort param_3,ushort param_4,float *param_5)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = '\x01';
  if ((param_2 != '\0') && (param_1 == '\0')) {
    cVar1 = '\0';
  }
  if (cVar1 != '\0') {
    param_4 = param_3;
  }
  fVar2 = 1.9999694;
  if ((float)param_4 * 3.0517578e-05 <= 1.9999694) {
    fVar2 = (float)param_4 * 3.0517578e-05;
  }
  if (fVar2 < _DAT_fffecd80) {
    fVar3 = _DAT_fffecd80 + -1.9999695;
    if (fVar2 <= fVar3) goto LAB_000d02be;
  }
  else {
    fVar3 = _DAT_fffecd80 + 1.9999695;
    if (fVar3 <= fVar2) goto LAB_000d02be;
  }
  fVar3 = fVar2;
LAB_000d02be:
  _DAT_fffecd80 = fVar2 - _DAT_fffecd80;
  if (_DAT_fffecd80 < 0.0) {
    _DAT_fffecd80 = -_DAT_fffecd80;
  }
  fVar4 = 1.0;
  if (1.9999695 < _DAT_fffecd80) {
    fVar4 = (float)DAT_fffecd84;
  }
  if (cVar1 != DAT_fffecd85) {
    fVar4 = 0.0;
  }
  if (fVar4 < 0.5) {
    *param_5 = fVar3;
  }
  else {
    *param_5 = fVar2;
  }
  _DAT_fffecd80 = fVar3;
  DAT_fffecd85 = cVar1;
  DAT_fffecd84 = (char)(int)fVar4;
  return;
}

