
/* WARNING: Removing unreachable block (ram,0x0011e882) */

void FUN_0011e868(ushort param_1,ushort param_2,int *param_3)

{
  float fVar1;
  
  fVar1 = (float)param_1 * (float)param_2 * 211917.0 * 7.579121e-16;
  if (51.199997 < fVar1) {
    fVar1 = 51.199997;
  }
  if (51.199997 < fVar1) {
    *param_3 = -1;
    return;
  }
  fVar1 = fVar1 * 8.388608e+07;
  if (2.1474836e+09 <= fVar1) {
    fVar1 = fVar1 - 4.2949673e+09;
  }
  *param_3 = (int)fVar1;
  return;
}

