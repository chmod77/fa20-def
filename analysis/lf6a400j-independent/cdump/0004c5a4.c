
void FUN_0004c5a4(void)

{
  undefined4 uVar1;
  
  if ((DAT_fffeeec2 & 8) == 0) {
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeec2 = DAT_fffeeec2 & 0xfd;
  }
  else {
    uVar1 = FUN_00001550();
    DAT_fffeeec2 = DAT_fffeeec2 | 2;
  }
  FUN_00001550(uVar1);
  return;
}

