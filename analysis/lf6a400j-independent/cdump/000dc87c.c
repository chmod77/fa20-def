
void FUN_000dc87c(int param_1,char param_2,short param_3,short param_4,undefined2 *param_5,
                 ushort *param_6,int *param_7)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  
  if ((param_2 != '\x01') && (param_2 != '\x03')) {
    param_3 = param_4;
  }
  uVar1 = (param_3 >> 5) + 0x8000;
  *param_6 = uVar1;
  fVar2 = (float)param_1;
  if (param_1 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = fVar2 * (float)uVar1 * 3.0517576e-06;
  fVar2 = 3.4028233e+38;
  if ((fVar3 <= 3.4028233e+38) && (fVar2 = 0.099999994, 0.099999994 <= fVar3)) {
    fVar2 = fVar3;
  }
  if (4.294967e+08 < fVar3) {
    fVar3 = 4.294967e+08;
  }
  if (fVar3 <= 4.294967e+08) {
    fVar3 = fVar3 * 10.0;
    if (2.1474836e+09 <= fVar3) {
      fVar3 = fVar3 - 4.2949673e+09;
    }
    *param_7 = (int)fVar3;
  }
  else {
    *param_7 = -1;
  }
  fVar2 = 28333334.0 / fVar2;
  fVar3 = 8191.875;
  if ((fVar2 <= 8191.875) && (fVar3 = fVar2, fVar2 < 0.0)) {
    fVar3 = 0.0;
  }
  if (8191.875 < fVar3) {
    *param_5 = 0xffff;
    return;
  }
  if (0.0 <= fVar3) {
    *param_5 = (short)(int)(fVar3 * 8.0);
    return;
  }
  *param_5 = 0;
  return;
}

