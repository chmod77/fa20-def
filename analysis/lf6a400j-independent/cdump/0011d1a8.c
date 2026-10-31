
/* WARNING: Removing unreachable block (ram,0x0011d1ce) */

void FUN_0011d1a8(ushort param_1,int param_2,int param_3,ushort param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  
  DAT_fffee0b4 = param_4 < 0x2ea6;
  fVar1 = (float)(int)((uint)param_1 * 0x82d0);
  if ((int)((uint)param_1 * 0x82d0) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)param_2;
  if (param_2 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar1 = fVar1 * fVar2 * 2.3283064e-10;
  if ((bool)DAT_fffee0b4) {
    fVar2 = (float)param_3;
    if (param_3 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar1 = fVar1 + fVar2 * 0.00390625;
  }
  if (16777216.0 < fVar1) {
    fVar1 = 16777216.0;
  }
  if (fVar1 <= 16777216.0) {
    fVar1 = fVar1 * 256.0;
    if (2.1474836e+09 <= fVar1) {
      fVar1 = fVar1 - 4.2949673e+09;
    }
    *param_5 = (int)fVar1;
  }
  else {
    *param_5 = -1;
  }
  return;
}

