
void FUN_000d2b9c(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_10 [4];
  byte abStack_c [8];
  
  local_10[0] = 1 - (((int)(char)DAT_ffff369c & 0x80U) == 0);
  FUN_000d3de4(DAT_fffeeec2 & 1,(DAT_ffff2fd4 & 0x40) != 0,(int)DAT_ffff66b0,(int)(char)local_10[0],
               local_10);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff369c | 0x80;
  if ((local_10[0] & 1) == 0) {
    bVar2 = DAT_ffff369c & 0x7f;
  }
  DAT_ffff369c = bVar2;
  FUN_00001550();
  FUN_000d3e7c(((int)DAT_ffff064a & 0x80U) != 0,abStack_c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff064c | 1;
  if ((abStack_c[0] & 1) == 0) {
    bVar2 = DAT_ffff064c & 0xfe;
  }
  DAT_ffff064c = bVar2;
  FUN_00001550(uVar1);
  return;
}

