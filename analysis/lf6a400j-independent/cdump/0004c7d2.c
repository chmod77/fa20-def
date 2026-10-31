
void FUN_0004c7d2(void)

{
  undefined4 uVar1;
  
  if ((DAT_ffff0006 & 2) == 0) {
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeec2 = DAT_fffeeec2 & 0xef;
  }
  else {
    uVar1 = FUN_00001550();
    DAT_fffeeec2 = DAT_fffeeec2 | 0x10;
  }
  FUN_00001550(uVar1);
  return;
}

