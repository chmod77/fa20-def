
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004e82c(void)

{
  undefined4 uVar1;
  
  if (_DAT_fffeeed6 < 2) {
    uVar1 = FUN_00001550();
    DAT_fffeeebe = DAT_fffeeebe | 1;
  }
  else {
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeebe = DAT_fffeeebe & 0xfe;
  }
  FUN_00001550(uVar1);
  return;
}

