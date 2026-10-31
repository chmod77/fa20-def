
void FUN_0004ed36(void)

{
  undefined4 uVar1;
  
  if (((DAT_fffef319 & 0x10) == 0) && ((DAT_fffef079 & 0x20) == 0)) {
    uVar1 = FUN_00001550(0x70);
    DAT_fffef09e = DAT_fffef09e & 0xbf;
  }
  else {
    uVar1 = FUN_00001550(0x70);
    DAT_fffef09e = DAT_fffef09e | 0x40;
  }
  FUN_00001550(uVar1);
  return;
}

