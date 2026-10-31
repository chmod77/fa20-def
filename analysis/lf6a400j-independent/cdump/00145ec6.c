
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00145ec6(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if (param_1 == '\0') {
    _DAT_ffff6746 = _DAT_ffff6746 & 0xfff7;
  }
  else {
    _DAT_ffff6746 = _DAT_ffff6746 | 8;
  }
  if ((_DAT_ffff6746 & 8) == 0) {
    _DAT_fffff754 = _DAT_fffff754 & 0xfff7;
  }
  else {
    _DAT_fffff754 = _DAT_fffff754 | 8;
  }
  FUN_00001550(uVar1);
  return;
}

