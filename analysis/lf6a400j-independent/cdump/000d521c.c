
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d521c(char param_1,ushort param_2,undefined2 *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (param_1 == '\0') {
    fVar2 = ((float)param_2 * 0.091552734) / 1000.0 + _DAT_fffecea8;
  }
  fVar1 = 153597.66;
  if ((fVar2 <= 153597.66) && (fVar1 = 0.0, 0.0 <= fVar2)) {
    fVar1 = fVar2;
  }
  *param_3 = (short)(int)(fVar1 * 0.42666665);
  _DAT_fffecea8 = fVar2;
  return;
}

