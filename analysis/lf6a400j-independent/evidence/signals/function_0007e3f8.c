
void FUN_0007e3f8(ushort param_1,int param_2,char param_3,ushort param_4,undefined2 *param_5)

{
  float fVar1;
  float fVar2;
  
  if (param_3 != '\0') {
    param_2 = (uint)param_4 << 9;
  }
  fVar2 = (float)param_2;
  if (param_2 < 0) {
    fVar2 = fVar2 + DAT_0007e488;
  }
  if (param_1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (((fVar2 * DAT_0007e48c) / ((float)*(ushort *)PTR_DAT_0007e490 * DAT_0007e494)) *
            DAT_0007e498) / ((float)param_1 * DAT_0007e49c);
  }
  fVar1 = DAT_0007e4a0;
  if ((fVar2 <= DAT_0007e4a0) && (fVar1 = fVar2, fVar2 < 0.0)) {
    fVar1 = 0.0;
  }
  if (fVar1 <= DAT_0007e4a0) {
    if (fVar1 < 0.0) {
      *param_5 = 0;
      return;
    }
    *param_5 = (short)(int)(fVar1 * DAT_0007e4a4);
    return;
  }
  *param_5 = 0xffff;
  return;
}

