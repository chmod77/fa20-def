
/* WARNING: Removing unreachable block (ram,0x000cfbe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cfaf0(float param_1,float param_2,float param_3,int param_4,ushort param_5,char param_6,
                 byte param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)param_4;
  if (param_4 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar3 = fVar3 * 0.00078124995;
  fVar2 = fVar3;
  fVar1 = fVar3;
  if (DAT_fffecd5d != '\0') {
    fVar2 = _DAT_fffecd54;
    fVar1 = _DAT_fffecd58;
  }
  fVar2 = (fVar3 * 305.85532 + -fVar1 * 554.7141 + fVar2 * 249.85883 + _DAT_fffecd50 * 44.498962) /
          45.498962;
  if (param_6 == '\0') {
    *param_8 = (float)param_5 * 3.90625;
  }
  else {
    _DAT_fffecd4c =
         param_2 + param_3 * ((float)param_7 + 223.0 + 0.0) *
                             (((fVar2 - param_1) * 287.0 * 4.0 * 1.6666663e-08) / 0.0057187495);
    *param_8 = _DAT_fffecd4c;
  }
  *param_9 = fVar2;
  _DAT_fffecd50 = fVar3;
  if (DAT_fffecd5c != '\0') {
    _DAT_fffecd50 = fVar2;
  }
  _DAT_fffecd58 = fVar3;
  _DAT_fffecd54 = fVar1;
  DAT_fffecd5d = 1;
  DAT_fffecd5c = 1;
  return;
}

