
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00126af4(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte local_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [4];
  undefined1 *local_1c;
  
  local_1c = &DAT_ffff08c6;
  FUN_00126cf8(DAT_fffef050 & 1,(int)DAT_fffeef9c,(DAT_fffef371 & 4) != 0,(int)DAT_ffff08c6,
               abStack_2c,local_30,&DAT_ffff147e);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff095e | 4;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff095e & 0xfb;
  }
  bVar3 = DAT_ffff095f | 1;
  if ((local_30[0] & 1) == 0) {
    bVar3 = DAT_ffff095f & 0xfe;
  }
  DAT_ffff095e = bVar2;
  DAT_ffff095f = bVar3;
  FUN_00001550(uVar1);
  FUN_00126db8((int)_DAT_fffeeeb6,(DAT_ffff095e & 4) != 0,abStack_28,&DAT_ffff1480);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff095e | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff095e & 0xfe;
  }
  DAT_ffff095e = bVar2;
  FUN_00001550(uVar1);
  FUN_00126e30((int)_DAT_fffeeeb6,(DAT_ffff095e & 4) != 0,abStack_24,&DAT_ffff1482);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff095e | 2;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff095e & 0xfd;
  }
  DAT_ffff095e = bVar2;
  FUN_00001550(uVar1);
  FUN_001269c8(DAT_ffff095e & 1,(DAT_ffff095e & 2) != 0,DAT_fffef050 & 1,&DAT_ffff095d);
  FUN_00126a40(DAT_fffef050 & 1,DAT_ffff095e & 1,(DAT_ffff095e & 2) != 0,(int)_DAT_ffff39fc,
               &DAT_ffff39fc);
  FUN_00126a78(DAT_fffef050 & 1,DAT_ffff095e & 1,(DAT_ffff095e & 2) != 0,(int)_DAT_ffff39fe,
               &DAT_ffff39fe);
  FUN_00126a98(DAT_fffef050 & 1,DAT_ffff095e & 1,(DAT_ffff095e & 2) != 0,(int)_DAT_fffeeeb6,
               _DAT_ffff3a00,&DAT_ffff3a00);
  FUN_00126acc(DAT_fffef050 & 1,DAT_ffff095e & 1,(DAT_ffff095e & 2) != 0,(int)DAT_ffff3845,
               &DAT_ffff3845);
  FUN_00126d8c(DAT_ffff095e & 1,(DAT_ffff095e & 2) != 0,DAT_fffef050 & 1,abStack_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff095e | 0x80;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff095e & 0x7f;
  }
  DAT_ffff095e = bVar2;
  FUN_00001550(uVar1);
  return;
}

