
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b1f0c(ushort param_1,char param_2,uint param_3,uint param_4,undefined2 *param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)param_1 * 0.04;
  if (DAT_fffec690 != '\0') {
    fVar2 = _DAT_fffec68c + (fVar2 - _DAT_fffec68c) * 16.0 * 0.0078125 + 0.02;
  }
  if (param_2 != '\0') {
    uVar1 = LK_135904((uint)&T_02E0FC,param_3,param_4);
    fVar3 = (float)(uVar1 & 0xff) * fVar2 * 0.0078125;
    fVar4 = 2621.4;
    if ((fVar3 <= 2621.4) && (fVar4 = fVar3, fVar3 < 0.0)) {
      fVar4 = 0.0;
    }
    if (2621.4 < fVar4) {
      *param_5 = 0xffff;
      _DAT_fffec68c = fVar2;
      DAT_fffec690 = 1;
      return;
    }
    if (0.0 <= fVar4) {
      *param_5 = (short)(int)(fVar4 * 25.0);
      _DAT_fffec68c = fVar2;
      DAT_fffec690 = 1;
      return;
    }
  }
  *param_5 = 0;
  DAT_fffec690 = 1;
  _DAT_fffec68c = fVar2;
  return;
}

