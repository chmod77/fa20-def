
void FUN_00121360(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_24;
  byte abStack_20 [4];
  byte bStack_1c;
  byte abStack_18 [4];
  byte abStack_14 [4];
  byte abStack_10 [8];
  
  FUN_00121294((int)DAT_fffee688,(int)DAT_fffee687,&DAT_ffff093c);
  FUN_001212bc((int)DAT_fffee688,&DAT_ffff093d);
  FUN_001212ec((int)DAT_fffee687,&DAT_ffff093e);
  FUN_001215d0(DAT_fffef050 & 1,(int)DAT_ffffab41);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0940 | 4;
  if ((local_24 & 1) == 0) {
    bVar2 = DAT_ffff0940 & 0xfb;
  }
  DAT_ffff0940 = bVar2;
  FUN_00001550(uVar1);
  FUN_00121614((int)DAT_ffff093c,(int)DAT_ffff093e,(DAT_ffff0940 & 4) != 0,(int)DAT_ffff093d,
               abStack_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0941 | 1;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff0941 & 0xfe;
  }
  DAT_ffff0941 = bVar2;
  FUN_00001550(uVar1);
  FUN_00121660((int)DAT_ffff093c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0941 | 2;
  if ((bStack_1c & 1) == 0) {
    bVar2 = DAT_ffff0941 & 0xfd;
  }
  DAT_ffff0941 = bVar2;
  FUN_00001550(uVar1);
  FUN_001214e0(DAT_ffff0941 & 1,(DAT_ffff0940 & 4) != 0,abStack_18,&DAT_ffff0942);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0940 | 1;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff0940 & 0xfe;
  }
  DAT_ffff0940 = bVar2;
  FUN_00001550();
  FUN_00121558((DAT_ffff0941 & 2) != 0,(DAT_ffff0940 & 4) != 0,abStack_14,&DAT_ffff13e2);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0940 | 2;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff0940 & 0xfd;
  }
  DAT_ffff0940 = bVar2;
  FUN_00001550(uVar1);
  FUN_001215f0(DAT_ffff0940 & 1,(DAT_ffff0940 & 2) != 0,abStack_10);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff093f | 8;
  if ((abStack_10[0] & 1) == 0) {
    bVar2 = DAT_ffff093f & 0xf7;
  }
  DAT_ffff093f = bVar2;
  FUN_00001550(uVar1);
  return;
}

