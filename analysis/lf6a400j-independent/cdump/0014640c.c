
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014640c(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if (param_1 == '\0') {
    _DAT_ffff6738 = _DAT_ffff6738 & 0xffdf;
  }
  else {
    _DAT_ffff6738 = _DAT_ffff6738 | 0x20;
  }
  FUN_00001550(uVar1);
  return;
}

