
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c08f0(byte param_1,short *param_2)

{
  undefined2 local_4;
  
  if (param_1 < DAT_fffec9a6) {
    local_4 = 0;
    *param_2 = 0;
  }
  else {
    if (_DAT_fffec9a4 == -1) {
      local_4 = -1;
    }
    else {
      local_4 = _DAT_fffec9a4 + 1;
    }
    *param_2 = _DAT_fffec9a4;
  }
  DAT_fffec9a6 = param_1;
  _DAT_fffec9a4 = local_4;
  return;
}

