
/* WARNING: Removing unreachable block (ram,0x00132dd8) */
/* WARNING: Removing unreachable block (ram,0x00132dfe) */

void FUN_00132dcc(ushort param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = -(((float)param_1 * 0.0024414062 + -40.0) * 5225.0) * 4.0 + 390576.0;
  fVar2 = 1.7179868e+10;
  if ((fVar1 <= 1.7179868e+10) && (fVar2 = 0.0, 0.0 <= fVar1)) {
    fVar2 = fVar1;
  }
  fVar2 = fVar2 * 0.25;
  if (2.1474836e+09 <= fVar2) {
    fVar2 = fVar2 - 4.2949673e+09;
  }
  if (&DAT_00008e9f < (undefined *)(int)fVar2) {
    *param_2 = (undefined *)(int)fVar2;
    return;
  }
  *param_2 = &DAT_00008e9f;
  return;
}

