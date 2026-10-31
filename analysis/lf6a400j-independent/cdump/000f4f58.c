
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f4f58(int param_1,char param_2,undefined4 param_3,int *param_4)

{
  if (param_2 == '\x01') {
    if (_DAT_fffed750 < param_1) {
      param_1 = _DAT_fffed750;
    }
  }
  else {
    param_1 = 1000;
  }
  *param_4 = param_1;
  _DAT_fffed750 = param_1;
  return;
}

