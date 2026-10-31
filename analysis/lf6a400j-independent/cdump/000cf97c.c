
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cf97c(float param_1,ushort param_2,uint param_3,int param_4,char param_5,char param_6,
                 float *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  if (param_6 != '\0') {
    uVar2 = __sdiv32_r1_by_r0(param_3 & 0xffff,5);
    uVar3 = (uVar2 & 0xffff) - param_4;
    iVar1 = -(uint)((uVar2 & 0xffff) < uVar3);
    if ((iVar1 < -1) || ((iVar1 == -1 && (uVar3 < 0x80000000)))) {
      uVar3 = 0x80000000;
    }
    if ((uVar3 == 0) && (param_5 == '\0')) {
      _DAT_fffecd48 = 0.0;
    }
    else {
      _DAT_fffecd48 = 300000.0;
      fVar4 = (float)param_4;
      if (param_4 < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
      }
      param_1 = param_1 + ((float)(param_3 & 0xffff) * 0.04 + -fVar4 * 0.19999999) *
                          (float)param_2 * 327.5 * 2.6041664e-07;
      if (param_1 < 300000.0) {
        _DAT_fffecd48 = param_1;
      }
    }
  }
  if (param_6 == '\0') {
    *param_7 = 0.0;
  }
  else {
    *param_7 = _DAT_fffecd48;
  }
  return;
}

