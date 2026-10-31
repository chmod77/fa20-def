
void FUN_000eaed4(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_c [8];
  
  FUN_000eaf3c((DAT_ffff0709 & 0x40) != 0,DAT_fffef050 & 1,local_c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff070c | 1;
  if ((local_c[0] & 1) == 0) {
    bVar2 = DAT_ffff070c & 0xfe;
  }
  DAT_ffff070c = bVar2;
  FUN_00001550(uVar1);
  FUN_000eaea8(((int)(char)DAT_ffff0709 & 0x80U) != 0,DAT_ffff070c & 1,&DAT_ffff070b);
  return;
}

