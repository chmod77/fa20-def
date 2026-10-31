
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014616a(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if (param_1 == '\0') {
    _DAT_ffff6740 = _DAT_ffff6740 | 0x20;
  }
  else {
    _DAT_ffff6740 = _DAT_ffff6740 & 0xffdf;
  }
  FUN_00001550(uVar1);
  return;
}

