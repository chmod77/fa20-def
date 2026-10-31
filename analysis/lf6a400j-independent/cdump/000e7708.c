
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e7708(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_1c;
  byte abStack_18 [4];
  byte abStack_14 [8];
  
  FUN_000e70e0((int)_DAT_fffeecae,&DAT_ffff06ef);
  FUN_000e8ad4((int)DAT_ffff06ef);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06f5 | 2;
  if ((local_1c & 1) == 0) {
    bVar2 = DAT_ffff06f5 & 0xfd;
  }
  DAT_ffff06f5 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e7058((int)DAT_ffff06ef,(DAT_ffff06f5 & 2) != 0,&DAT_ffff1102);
  FUN_000e9470((int)DAT_ffff06ef,(DAT_ffff06f5 & 2) != 0,abStack_18);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06f5 | 4;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff06f5 & 0xfb;
  }
  DAT_ffff06f5 = bVar2;
  FUN_00001550();
  FUN_000e6fac((DAT_ffff06f4 & 0x10) != 0,(DAT_ffff06f5 & 2) != 0,(int)_DAT_ffff1102,
               DAT_ffff06f7 & 1,(DAT_ffff06f5 & 4) != 0,DAT_ffff06ef,&DAT_ffff1100);
  abStack_14[0] = DAT_ffff06f5 & 1;
  FUN_000e8cfc((DAT_ffff06f4 & 0x10) != 0,(DAT_ffff06f5 & 2) != 0,DAT_ffff06f7 & 1,abStack_14[0],
               DAT_fffef050 & 1,(DAT_ffff06f5 & 4) != 0,DAT_ffff06ef,abStack_14);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06f5 | 1;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff06f5 & 0xfe;
  }
  DAT_ffff06f5 = bVar2;
  FUN_00001550(uVar1);
  return;
}

