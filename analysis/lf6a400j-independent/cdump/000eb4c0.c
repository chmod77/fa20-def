
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb4c0(char param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  
  if (param_1 == '\0') {
    uVar1 = (param_2 & 0xffff) >> 1;
    _DAT_fffed50c = uVar1 + _DAT_fffed50c;
    if (_DAT_fffed50c < uVar1) {
      _DAT_fffed50c = 0xffffffff;
    }
  }
  else {
    _DAT_fffed50c = (int)(param_2 & 0xffff) >> 1;
  }
  *param_3 = _DAT_fffed50c;
  return;
}

