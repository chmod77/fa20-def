
void FUN_0004c79a(void)

{
  undefined4 uVar1;
  
  if ((DAT_ffff0000 & 2) == 0) {
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeec2 = DAT_fffeeec2 & 0xf7;
  }
  else {
    uVar1 = FUN_00001550();
    DAT_fffeeec2 = DAT_fffeeec2 | 8;
  }
  FUN_00001550(uVar1);
  return;
}

