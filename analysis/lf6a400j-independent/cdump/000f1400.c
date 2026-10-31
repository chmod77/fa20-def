
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f1400(undefined *param_1,char param_2,undefined4 param_3,undefined4 *param_4)

{
  if (param_2 == '\x01') {
    if ((int)_DAT_fffed634 < (int)param_1) {
      param_1 = _DAT_fffed634;
    }
  }
  else {
    param_1 = &DAT_00008e39;
  }
  *param_4 = param_1;
  _DAT_fffed634 = param_1;
  return;
}

