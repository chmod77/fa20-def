
void FUN_001227a0(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_18;
  byte abStack_14 [4];
  byte abStack_10 [8];
  
  FUN_001228a0(DAT_ffff094e & 1);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0951 | 1;
  if ((local_18 & 1) == 0) {
    bVar2 = DAT_ffff0951 & 0xfe;
  }
  DAT_ffff0951 = bVar2;
  FUN_00001550();
  FUN_001228c4((DAT_ffff094e & 2) != 0,(DAT_ffff0948 & 2) != 0,(DAT_ffff094c & 2) != 0,
               (DAT_ffff0943 & 2) != 0,DAT_fffef050 & 1,abStack_14,&DAT_ffff13f0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0951 | 2;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff0951 & 0xfd;
  }
  DAT_ffff0951 = bVar2;
  FUN_00001550();
  FUN_00122954((DAT_ffff0950 & 0x20) != 0,(DAT_ffff0950 & 0x10) != 0,(DAT_ffff0950 & 8) != 0,
               (DAT_ffff0950 & 4) != 0,(DAT_ffff0950 & 2) != 0,abStack_10);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0950 | 0x80;
  if ((abStack_10[0] & 1) == 0) {
    bVar2 = DAT_ffff0950 & 0x7f;
  }
  DAT_ffff0950 = bVar2;
  FUN_00001550(uVar1);
  return;
}

