
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00145a0a(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if (param_1 == '\0') {
    _DAT_ffff675e = _DAT_ffff675e & 0xf7ff;
  }
  else {
    _DAT_ffff675e = _DAT_ffff675e | 0x800;
  }
  FUN_00001550(uVar1);
  return;
}

