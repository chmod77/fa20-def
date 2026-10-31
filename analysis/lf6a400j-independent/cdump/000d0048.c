
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d0048(float param_1,float param_2,uint param_3,ushort param_4,byte param_5,
                 undefined1 param_6,char param_7,uint param_8,undefined1 *param_9,
                 undefined2 *param_10)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = LK_133E10((uint)&T_02ED04,param_3);
  *param_10 = (short)uVar1;
  fVar6 = (float)param_5 + -50.0 + 273.0;
  fVar4 = param_2 * 0.0009999999;
  if (0.5 <= _DAT_fffecd7c) {
    fVar4 = _DAT_fffecd78;
  }
  fVar5 = param_2 * 0.0009999999 * 800.0 * 1.5258788e-05 + fVar4 * 0.98779297;
  fVar4 = 1.0;
  if (param_4 != 0) {
    fVar4 = fVar5 / ((float)param_4 * 0.00390625);
  }
  if (param_7 == '\0') {
    fVar4 = 1.0;
  }
  else {
    fVar3 = 1.0;
    if (1.0 <= fVar4) {
      fVar3 = fVar4;
    }
    fVar4 = fVar3 * 32768.0 * 3.0517578e-05;
  }
  fVar4 = ((fVar6 * param_1 * 287.0) / 60000.0 - (float)(uVar1 & 0xffff)) * fVar4 * 32768.0 *
          1.5258789e-10 + 0.0033;
  bVar2 = FUN_0016ba04(&DAT_000167ba,param_6);
  fVar6 = (float)param_5 + -50.0 + (float)bVar2 * fVar4 * 0.0078125 * fVar6;
  fVar4 = 205.0;
  if ((fVar6 <= 205.0) && (fVar4 = fVar6, fVar6 < -50.0)) {
    fVar4 = -50.0;
  }
  uVar1 = 0xff;
  if ((fVar4 <= 205.0) && (uVar1 = 0, -50.0 <= fVar4)) {
    uVar1 = (uint)(fVar4 + 50.0);
  }
  if ((param_8 & 0xff) < (uVar1 & 0xff)) {
    *param_9 = (char)param_8;
  }
  else {
    *param_9 = (char)uVar1;
  }
  _DAT_fffecd78 = fVar5;
  _DAT_fffecd7c = 1.0;
  return;
}

