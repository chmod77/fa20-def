
void FUN_0004ed76(void)

{
  undefined4 uVar1;
  
  if (((int)DAT_fffef319 & 0x80U) == 0) {
    uVar1 = FUN_00001550(0x70);
    DAT_fffef331 = DAT_fffef331 & 0xfe;
  }
  else {
    uVar1 = FUN_00001550();
    DAT_fffef331 = DAT_fffef331 | 1;
  }
  FUN_00001550(uVar1);
  return;
}

