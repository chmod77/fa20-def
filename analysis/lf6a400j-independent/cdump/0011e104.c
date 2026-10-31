
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011e104(int param_1,int param_2,uint param_3,char param_4,ushort param_5,
                 undefined2 *param_6,undefined2 *param_7,undefined4 param_8)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_fffee10c == '\0') {
    uVar1 = 0x11;
  }
  else {
    uVar1 = 0xf;
  }
  DAT_fffee10c = uVar1 <= param_3;
  fVar4 = (float)(int)param_3;
  if ((int)param_3 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  bVar2 = param_4 == '\x01';
  fVar4 = fVar4 * 33488.0 * 7.450581e-09;
  if ((!bVar2) && (bVar2 = param_4 == '\x02', !bVar2)) {
    bVar2 = !(bool)DAT_fffee10c;
  }
  *(bool *)param_8 = bVar2;
  if (fVar4 == 0.0) {
    fVar4 = 1023.96875;
  }
  else {
    fVar4 = ((float)param_1 * 0.00390625 +
            -(_DAT_fffee108 * 33488.0 * (float)param_2) * 7.450581e-09) / fVar4;
  }
  *param_7 = (short)(int)(fVar4 * 32.0);
  if (bVar2 == false) {
    _DAT_fffee108 = _DAT_fffee108 + ((fVar4 * 3.0 - _DAT_fffee104) / 2.0) * 0.08;
  }
  else {
    _DAT_fffee108 = (float)param_5 * 0.03125;
  }
  fVar3 = 2047.9688;
  if ((_DAT_fffee108 <= 2047.9688) && (fVar3 = _DAT_fffee108, _DAT_fffee108 < 0.0)) {
    fVar3 = 0.0;
  }
  if (fVar3 <= 2047.9688) {
    if (0.0 <= fVar3) {
      *param_6 = (short)(int)(fVar3 * 32.0);
    }
    else {
      *param_6 = 0;
    }
  }
  else {
    *param_6 = 0xffff;
  }
  _DAT_fffee104 = fVar4;
  return;
}

