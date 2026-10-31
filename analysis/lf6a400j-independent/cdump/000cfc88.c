
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cfc88(float param_1,float param_2,uint param_3,ushort param_4,char param_5,
                 float *param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_5 == '\0') {
    DAT_fffecd6c = '\0';
  }
  else {
    if (DAT_fffecd6c == '\0') {
      _DAT_fffecd64 = 0.0;
      _DAT_fffecd68 = 0.0;
      DAT_fffecd6c = '\x01';
    }
    fVar7 = 0.75;
    uVar2 = LK_133E10((uint)&T_02ECE0,param_3);
    fVar7 = fVar7 + (float)(uVar2 & 0xffff) * 7.629394e-06;
    fVar4 = 0.0;
    fVar6 = 0.0;
    if (param_1 != 0.0) {
      fVar6 = param_2 / param_1;
    }
    fVar5 = 0.53;
    if (0.53 < fVar6) {
      fVar5 = fVar6;
    }
    if (1.0 < fVar5) {
      cVar1 = -0x40;
    }
    else {
      cVar1 = '@';
    }
    fVar6 = (float)(int)cVar1 * 0.015625;
    if (param_2 != 0.0) {
      fVar4 = param_1 / param_2;
    }
    if ((1.0 < fVar5) && (fVar5 = fVar4, fVar4 <= 0.53)) {
      fVar5 = 0.53;
    }
    if (fVar5 <= 0.9999923) {
      if (0.53 <= fVar5) {
        fVar4 = fVar5 * 4.2949673e+09 + -2.1474836e+09;
        if (2.1474836e+09 <= fVar4) {
          fVar4 = fVar4 - 4.2949673e+09;
        }
        uVar2 = (uint)fVar4;
      }
      else {
        uVar2 = 0x7ae147b;
      }
    }
    else {
      uVar2 = 0x7fff8000;
    }
    uVar3 = LK_1347A4((uint)&T_02ECEC,uVar2);
    fVar4 = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar6 = (param_1 / 101325.0) * fVar4 * (float)param_4 * 2.980232e-15 * fVar7 * fVar6 * 60000.0;
    uVar2 = LK_134070((uint)&T_02ECF8,uVar2);
    fVar4 = 1.0;
    if ((undefined *)(uVar2 & 0xffff) < &DAT_0000ffff) {
      fVar4 = (float)(int)(uVar2 & 0xffff) * 1.5258788e-05;
    }
    fVar7 = fVar6;
    if (0.5 <= _DAT_fffecd68) {
      fVar7 = _DAT_fffecd64;
    }
    _DAT_fffecd60 = fVar6 * fVar4 + fVar7 * (1.0 - fVar4);
    _DAT_fffecd68 = 1.0;
    _DAT_fffecd64 = _DAT_fffecd60;
  }
  if (param_5 == '\0') {
    *param_6 = 0.0;
  }
  else {
    *param_6 = _DAT_fffecd60;
  }
  return;
}

