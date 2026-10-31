
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010b91c(ushort param_1,ushort param_2,undefined2 *param_3,undefined2 *param_4,
                 undefined2 *param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = param_2 != 0;
  if ((float)param_2 * 0.0032552083 == 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = ((float)param_1 * 0.0045776367) / ((float)param_2 * 0.0032552083);
  }
  if (bVar1) {
    _DAT_fffedca4 = fVar2 / 2.0;
  }
  fVar2 = 25700.0;
  fVar3 = fVar2;
  if ((_DAT_fffedca4 <= 25700.0) && (fVar3 = _DAT_fffedca4, _DAT_fffedca4 < 0.0)) {
    fVar3 = 0.0;
  }
  if (fVar3 <= 25700.0) {
    if (0.0 <= fVar3) {
      *param_5 = (short)(int)(fVar3 * 2.55);
    }
    else {
      *param_5 = 0;
    }
  }
  else {
    *param_5 = 0xffff;
  }
  if (bVar1) {
    _DAT_fffedca0 = (_DAT_fffedca4 / 0.59142184) * 100.0;
  }
  fVar3 = 0.0;
  if ((bVar1) && (fVar3 = 399.99997, _DAT_fffedca0 < 399.99997)) {
    fVar3 = _DAT_fffedca0;
  }
  fVar4 = fVar2;
  if ((fVar3 <= 25700.0) && (fVar4 = fVar3, fVar3 < 0.0)) {
    fVar4 = 0.0;
  }
  if (fVar4 <= 25700.0) {
    if (0.0 <= fVar4) {
      *param_3 = (short)(int)(fVar4 * 2.55);
    }
    else {
      *param_3 = 0;
    }
  }
  else {
    *param_3 = 0xffff;
  }
  if ((_DAT_fffedca0 <= 25700.0) && (fVar2 = _DAT_fffedca0, _DAT_fffedca0 < 0.0)) {
    fVar2 = 0.0;
  }
  if (fVar2 <= 25700.0) {
    if (0.0 <= fVar2) {
      *param_4 = (short)(int)(fVar2 * 2.55);
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    *param_4 = 0xffff;
  }
  return;
}

