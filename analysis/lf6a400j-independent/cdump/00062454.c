
void FUN_00062454(void)

{
  undefined4 uVar1;
  byte bVar2;
  
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_fffef63b | 1;
  if ((DAT_fffef63b & 2) == 0) {
    bVar2 = DAT_fffef63b & 0xfe;
  }
  DAT_fffef63b = bVar2;
  FUN_00001550(uVar1);
  return;
}

