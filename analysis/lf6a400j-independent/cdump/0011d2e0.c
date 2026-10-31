
/* WARNING: Removing unreachable block (ram,0x0011d2f2) */

void FUN_0011d2e0(ushort param_1,ushort param_2,uint param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(int)((uint)param_2 - (param_3 & 0xffff)) *
          (float)((uint)param_1 * 0x285) * 4.7683713e-07 * 0.03125;
  fVar2 = 16777216.0;
  if ((fVar1 <= 16777216.0) && (fVar2 = fVar1, fVar1 < 0.0)) {
    fVar2 = 0.0;
  }
  if (fVar2 <= 16777216.0) {
    if (0.0 <= fVar2) {
      fVar2 = fVar2 * 256.0;
      if (2.1474836e+09 <= fVar2) {
        fVar2 = fVar2 - 4.2949673e+09;
      }
      *param_4 = (int)fVar2;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    *param_4 = -1;
  }
  return;
}

