
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bf760(char param_1,uint param_2,byte param_3,uint *param_4)

{
  uint uVar1;
  
  if (param_3 != 0) {
    if (param_3 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = __udiv32_r1_by_r0((param_2 & 0xffff) << 8,(uint)param_3);
    }
    _DAT_fffec934 = uVar1 + _DAT_fffec934;
    if (_DAT_fffec934 < uVar1) {
      _DAT_fffec934 = 0xffffffff;
    }
  }
  if (param_1 != '\x03') {
    _DAT_fffec934 = 0;
  }
  *param_4 = _DAT_fffec934;
  return;
}

