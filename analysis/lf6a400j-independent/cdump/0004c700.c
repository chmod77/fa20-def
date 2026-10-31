
void FUN_0004c700(void)

{
  undefined4 uVar1;
  
  if ((DAT_fffeeec2 & 0x10) == 0) {
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeec2 = DAT_fffeeec2 & 0xfe;
  }
  else {
    if ((DAT_fffeeec2 & 4) == 0) {
      return;
    }
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeec2 = DAT_fffeeec2 | 1;
  }
  FUN_00001550(uVar1);
  return;
}

