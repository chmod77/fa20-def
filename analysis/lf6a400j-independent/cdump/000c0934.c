
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c0934(char param_1,short *param_2)

{
  undefined2 local_4;
  
  if ((param_1 == '\x02') || (param_1 == '\x03')) {
    local_4 = 0;
    *param_2 = 0;
  }
  else {
    local_4 = (param_1 == '\x01') + _DAT_fffec9a8;
    if (local_4 < (param_1 == '\x01')) {
      local_4 = 0xffff;
    }
    *param_2 = _DAT_fffec9a8;
  }
  _DAT_fffec9a8 = local_4;
  return;
}

