
void FUN_000d4fb8(ushort param_1,short param_2,ushort param_3,undefined2 *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = ((float)param_1 * 0.07629394) / 4099.9756;
  fVar2 = ((float)param_3 * 0.27465817) / 1.183;
  uVar1 = LK_1343B8((uint)&T_02ED98,(int)param_2);
  if (fVar2 == 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = ((float)(uVar1 & 0xffff) * ((fVar3 * 10.0) / 28.8) * 0.390625) / fVar2;
  }
  fVar3 = 1.9999694;
  if ((fVar2 <= 1.9999694) && (fVar3 = fVar2, fVar2 < 0.0)) {
    fVar3 = 0.0;
  }
  if (fVar3 <= 1.9999694) {
    if (0.0 <= fVar3) {
      *param_4 = (short)(int)(fVar3 * 32768.0);
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

