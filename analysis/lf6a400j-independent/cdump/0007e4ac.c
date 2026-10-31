
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e4ac(float param_1,char param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 *param_5)

{
  undefined2 uVar1;
  float fVar2;
  
  if (DAT_fffeba0d == '\0') {
    DAT_fffeba0c = '\0';
    DAT_fffeba0d = '\x01';
  }
  uVar1 = param_3;
  if (DAT_fffeba0c != '\0') {
    FUN_0016b4d8(&DAT_ffff199c,param_3,param_4);
    uVar1 = _DAT_ffff199c;
  }
  _DAT_ffff199c = uVar1;
  DAT_fffeba0c = 1;
  if (param_2 == '\0') {
    param_1 = param_1 * 0.0009999999;
    fVar2 = 269.29608;
    if ((param_1 <= 269.29608) && (fVar2 = param_1, param_1 < 13.299999)) {
      fVar2 = 13.299999;
    }
    if (fVar2 <= 269.29608) {
      if (13.299999 <= fVar2) {
        *param_5 = (short)(int)(fVar2 * 256.0 + -3404.7998);
      }
      else {
        *param_5 = 0;
      }
    }
    else {
      *param_5 = 0xffff;
    }
  }
  else {
    *param_5 = _DAT_ffff199c;
  }
  return;
}

