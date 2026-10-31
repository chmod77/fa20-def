
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c8f00(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined2 param_6,undefined2 *param_7)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    if (param_5 == '\0') {
      _DAT_fffecb3c = param_6;
    }
    else {
      _DAT_fffecb3c = 0;
    }
  }
  if (bVar1) {
    _DAT_fffecb3e = _DAT_fffecb3c;
  }
  *param_7 = _DAT_fffecb3e;
  return;
}

