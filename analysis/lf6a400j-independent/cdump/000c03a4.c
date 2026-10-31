
void FUN_000c03a4(float param_1,uint param_2,char param_3,char param_4,int param_5,int param_6,
                 int param_7,int param_8,short param_9,ushort param_10,char param_11,uint param_12,
                 uint param_13,char param_14,byte param_15,ushort param_16,ushort param_17,
                 ushort param_18,undefined1 *param_19,undefined2 *param_20,undefined2 *param_21,
                 ushort *param_22,int *param_23)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_11 != '\0') {
    param_13 = param_12;
  }
  if ((param_14 == '\0') || (1 < param_15)) {
    uVar1 = LK_138810((uint)&T_02E7DC,param_2,param_13);
  }
  else {
    uVar1 = LK_138810((uint)&T_02E7C8,param_2,param_13);
  }
  fVar4 = (float)(byte)(0xff - param_4) * (float)param_16 * param_1 * (float)param_18 *
          (float)param_17 * 2.3283064e-10;
  fVar8 = 3.4359736e+09;
  if ((fVar4 <= 3.4359736e+09) && (fVar8 = fVar4, fVar4 < 0.0)) {
    fVar8 = 0.0;
  }
  if (fVar8 <= 3.4359736e+09) {
    if (0.0 <= fVar8) {
      fVar8 = fVar8 * 1.25;
      if (2.1474836e+09 <= fVar8) {
        fVar8 = fVar8 - 4.2949673e+09;
      }
      *param_23 = (int)fVar8;
    }
    else {
      *param_23 = 0;
    }
  }
  else {
    *param_23 = -1;
  }
  fVar8 = (float)param_8;
  if (param_8 < 0) {
    fVar8 = fVar8 + 4.2949673e+09;
  }
  fVar8 = fVar8 * 0.79999995 - fVar4;
  fVar7 = (float)param_5;
  if (param_5 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  fVar7 = fVar7 * 0.79999995 - fVar4;
  fVar9 = (float)param_6;
  if (param_6 < 0) {
    fVar9 = fVar9 + 4.2949673e+09;
  }
  fVar9 = fVar9 * 0.79999995 - fVar4;
  fVar5 = (float)param_7;
  if (param_7 < 0) {
    fVar5 = fVar5 + 4.2949673e+09;
  }
  fVar4 = fVar5 * 0.79999995 - fVar4;
  if (fVar7 < fVar9) {
    fVar9 = fVar7;
  }
  if (fVar4 < fVar9) {
    fVar9 = fVar4;
  }
  if (fVar8 < fVar9) {
    fVar9 = fVar8;
  }
  fVar9 = fVar9 + -(float)(int)param_9 * 0.79999995;
  fVar6 = (float)(int)param_9 * 0.79999995;
  fVar5 = (float)(uVar1 & 0xff) * 0.00390625;
  fVar8 = fVar6 + fVar9 * -(fVar5 + -0.99609375);
  fVar4 = 52428.0;
  fVar7 = fVar4;
  if ((fVar8 <= 52428.0) && (fVar7 = fVar8, fVar8 < 0.0)) {
    fVar7 = 0.0;
  }
  if (fVar7 <= 52428.0) {
    if (0.0 <= fVar7) {
      *param_20 = (short)(int)(fVar7 * 1.25);
    }
    else {
      *param_20 = 0;
    }
  }
  else {
    *param_20 = 0xffff;
  }
  fVar6 = fVar6 + fVar5 * fVar9;
  if (fVar6 <= fVar8) {
    fVar8 = fVar6;
  }
  fVar7 = fVar4;
  if ((fVar8 <= 52428.0) && (fVar7 = fVar8, fVar8 < 0.0)) {
    fVar7 = 0.0;
  }
  uVar2 = 0xffff;
  if ((fVar7 <= 52428.0) && (uVar2 = 0, 0.0 <= fVar7)) {
    uVar2 = (ushort)(int)(fVar7 * 1.25);
  }
  *param_22 = uVar2;
  if ((fVar6 <= 52428.0) && (fVar4 = fVar6, fVar6 < 0.0)) {
    fVar4 = 0.0;
  }
  if (fVar4 <= 52428.0) {
    if (0.0 <= fVar4) {
      *param_21 = (short)(int)(fVar4 * 1.25);
    }
    else {
      *param_21 = 0;
    }
  }
  else {
    *param_21 = 0xffff;
  }
  if ((param_3 == '\x02') && (param_4 == '\0')) {
    uVar3 = param_10 + 0x3e;
    if (uVar3 < param_10) {
      uVar3 = 0xffff;
    }
    *param_19 = uVar2 < uVar3;
  }
  else {
    *param_19 = 0;
  }
  return;
}

