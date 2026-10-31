
void FUN_0004c054(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  DAT_fffef529 = FUN_0000152c(DAT_fffef529 + 1);
  FUN_00001550(uVar1);
  if ((DAT_fffef528 == '\0') || (4 < DAT_fffef529)) {
    DAT_fffef526 = 0;
    DAT_fffef528 = '\0';
  }
  else {
    DAT_fffef526 = 0xff;
  }
  return;
}

