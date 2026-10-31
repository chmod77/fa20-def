
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00146004(char param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)DAT_ffff66c4;
  uVar2 = FUN_00001550(0xf0);
  if ((uVar1 & 0x80) == 0 && param_1 != '\0') {
    _DAT_ffff675e = _DAT_ffff675e | 0x10;
  }
  else {
    _DAT_ffff675e = _DAT_ffff675e & 0xffef;
  }
  FUN_00001550(uVar2);
  return;
}

