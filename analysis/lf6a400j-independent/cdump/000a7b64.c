
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a7b64(char param_1,char param_2,short param_3,short *param_4)

{
  if (param_1 != '\0') {
    if (param_3 == -1) {
      _DAT_fffec43c = -1;
    }
    else {
      _DAT_fffec43c = param_3 + 1;
    }
  }
  if (((param_2 != '\x01') && (param_2 != '\x02')) && (param_2 != '\x03')) {
    if (param_1 != '\0') {
      *param_4 = _DAT_fffec43c;
      return;
    }
    *param_4 = param_3;
    return;
  }
  *param_4 = 0;
  return;
}

