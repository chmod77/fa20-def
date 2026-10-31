
void FUN_0004ebb4(void)

{
  undefined4 uVar1;
  
  if ((DAT_fffef319 & 1) == 0) {
    uVar1 = FUN_00001550(0x70);
    DAT_fffef09e = DAT_fffef09e & 0xdf;
  }
  else {
    uVar1 = FUN_00001550();
    DAT_fffef09e = DAT_fffef09e | 0x20;
  }
  FUN_00001550(uVar1);
  return;
}

