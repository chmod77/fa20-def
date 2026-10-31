
undefined4 FUN_001195cc(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_8 [8];
  
  FUN_0011990c(DAT_fffeeec6 & 1,local_8);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0921 | 1;
  if ((local_8[0] & 1) == 0) {
    bVar2 = DAT_ffff0921 & 0xfe;
  }
  DAT_ffff0921 = bVar2;
  uVar1 = FUN_00001550(uVar1);
  return uVar1;
}

