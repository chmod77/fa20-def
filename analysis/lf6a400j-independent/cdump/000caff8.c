
void FUN_000caff8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,char param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_9 == '\0') {
    fVar8 = (float)param_2;
    if (param_2 < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    fVar1 = (float)param_1;
    if (param_1 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar2 = (float)param_3;
    if (param_3 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar3 = (float)param_4;
    if (param_4 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar4 = (float)param_5;
    if (param_5 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar5 = (float)param_6;
    if (param_6 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    fVar6 = (float)param_7;
    if (param_7 < 0) {
      fVar6 = fVar6 + 4.2949673e+09;
    }
    fVar7 = (float)param_8;
    if (param_8 < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    *param_10 = (fVar8 * 0.79999995 + fVar1 * 0.79999995 + fVar2 * 0.79999995 + fVar3 * 0.79999995 +
                 fVar4 * 0.79999995 + fVar5 * 0.79999995 + fVar6 * 0.79999995 + fVar7 * 0.79999995)
                / 4.0;
    return;
  }
  *param_10 = 0.0;
  return;
}

