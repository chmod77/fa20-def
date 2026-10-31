
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5b24(char param_1,char param_2,uint param_3,char param_4,undefined2 param_5,
                 char param_6,undefined2 *param_7)

{
  uint uVar1;
  
  if ((param_2 != '\0') && (param_1 != '\0')) {
    if (param_4 == '\x01') {
      if (param_6 == '\0') {
        _DAT_fffec390 = FUN_0016bc68(&DAT_00013c5e,param_5);
      }
      else {
        _DAT_fffec390 = FUN_0016bc68(&DAT_00014932);
      }
    }
    else if ((param_4 == '\x03') || (param_4 == '\x02')) {
      if (param_6 == '\0') {
        _DAT_fffec390 = FUN_0016bc68(&DAT_00014952,param_5);
      }
      else {
        _DAT_fffec390 = FUN_0016bc68(&DAT_00014912);
      }
    }
    else {
      uVar1 = LK_133F40((uint)&T_02DB44,param_3);
      _DAT_fffec390 = (short)uVar1;
    }
  }
  *param_7 = _DAT_fffec390;
  return;
}

