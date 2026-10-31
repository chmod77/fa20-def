
void FUN_0004ea2c(void)

{
  undefined4 uVar1;
  
  if ((DAT_fffef32d & 0x10) == 0) {
    uVar1 = FUN_00001550(0x70);
    DAT_fffef331 = DAT_fffef331 & 0xfb;
  }
  else {
    uVar1 = FUN_00001550();
    DAT_fffef331 = DAT_fffef331 | 4;
  }
  FUN_00001550(uVar1);
  return;
}

