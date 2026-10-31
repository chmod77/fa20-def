
void FUN_00122248(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_28;
  byte abStack_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [4];
  byte abStack_14 [8];
  
  FUN_001223b0(DAT_fffef050 & 1);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff094c | 4;
  if ((local_28 & 1) == 0) {
    bVar2 = DAT_ffff094c & 0xfb;
  }
  DAT_ffff094c = bVar2;
  FUN_00001550();
  FUN_00122498((DAT_fffef910 & 0x10) != 0,(DAT_fffef910 & 0x20) != 0,
               ((int)DAT_ffff34bd & 0x80U) != 0,(DAT_ffff094c & 4) != 0,DAT_ffffab41,abStack_24);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0950 | 0x10;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff0950 & 0xef;
  }
  DAT_ffff0950 = bVar2;
  FUN_00001550();
  FUN_00122448((DAT_ffff0950 & 0x10) != 0,(int)DAT_ffffab41,abStack_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff094d | 1;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff094d & 0xfe;
  }
  DAT_ffff094d = bVar2;
  FUN_00001550(uVar1);
  FUN_00122470((int)DAT_ffffab41,(DAT_ffff0950 & 0x10) != 0,abStack_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff094d | 2;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff094d & 0xfd;
  }
  DAT_ffff094d = bVar2;
  FUN_00001550(uVar1);
  FUN_001223bc(DAT_ffff094d & 1,(DAT_ffff094c & 4) != 0,abStack_18);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff094c | 1;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff094c & 0xfe;
  }
  DAT_ffff094c = bVar2;
  FUN_00001550();
  FUN_001223d0((DAT_ffff094d & 2) != 0,(DAT_ffff094c & 4) != 0,abStack_14,&DAT_ffff13ec);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff094c | 2;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff094c & 0xfd;
  }
  DAT_ffff094c = bVar2;
  FUN_00001550(uVar1);
  return;
}

