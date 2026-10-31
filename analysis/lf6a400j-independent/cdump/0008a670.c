
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008a670(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte local_50 [4];
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  undefined1 *puStack_30;
  uint uStack_2c;
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff03d4;
  FUN_00093150((int)DAT_fffeed24,((int)(char)DAT_ffff03e1 & 0x80U) != 0,local_50);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03e1 | 1;
  if ((local_50[0] & 1) == 0) {
    bVar3 = DAT_ffff03e1 & 0xfe;
  }
  DAT_ffff03e1 = bVar3;
  FUN_00001550(uVar2);
  FUN_0009317c((int)DAT_fffeed25,((int)(char)DAT_ffff03e1 & 0x80U) != 0,abStack_4c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03e1 | 2;
  if ((abStack_4c[0] & 1) == 0) {
    bVar3 = DAT_ffff03e1 & 0xfd;
  }
  DAT_ffff03e1 = bVar3;
  FUN_00001550(uVar2);
  FUN_000931a8((int)DAT_fffeed26,((int)(char)DAT_ffff03e1 & 0x80U) != 0,abStack_48);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03e1 | 4;
  if ((abStack_48[0] & 1) == 0) {
    bVar3 = DAT_ffff03e1 & 0xfb;
  }
  DAT_ffff03e1 = bVar3;
  FUN_00001550(uVar2);
  FUN_000931d4((int)DAT_fffeed27,((int)(char)DAT_ffff03e1 & 0x80U) != 0,abStack_44);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03e1 | 8;
  if ((abStack_44[0] & 1) == 0) {
    bVar3 = DAT_ffff03e1 & 0xf7;
  }
  DAT_ffff03e1 = bVar3;
  FUN_00001550(uVar2);
  FUN_00090d84((int)DAT_ffff053d,(int)DAT_ffff0543,(int)DAT_ffff0544,
               ((int)(char)DAT_ffff0539 & 0x80U) != 0,_v_Engine_Speed_2994,&DAT_ffff041f);
  FUN_00090dec((int)DAT_ffff053e,(int)DAT_ffff0543,(int)DAT_ffff0544,(DAT_ffff0539 & 0x40) != 0,
               _v_Engine_Speed_2994,&DAT_ffff0420);
  FUN_00090e54((int)DAT_ffff053f,(int)DAT_ffff0543,(int)DAT_ffff0544,(DAT_ffff0539 & 0x20) != 0,
               _v_Engine_Speed_2994,&DAT_ffff0421);
  FUN_00090ebc((int)DAT_ffff0540,(int)DAT_ffff0543,(int)DAT_ffff0544,(DAT_ffff0539 & 0x10) != 0,
               _v_Engine_Speed_2994,&DAT_ffff0422);
  puStack_30 = &DAT_ffff1534;
  FUN_00091310((int)DAT_ffff053d,(int)_DAT_ffff0ba6,(int)_DAT_ffff0ba8,(int)_DAT_ffff0baa,
               ((int)(char)DAT_ffff0539 & 0x80U) != 0,DAT_ffff2996,_DAT_ffff0b22,_DAT_ffff0b24,
               DAT_ffff66b0,_DAT_ffff0b78,&DAT_ffff1534,&DAT_ffff040f,&DAT_ffff0bae);
  FUN_00091450((int)DAT_ffff053e,(int)_DAT_ffff0ba6,(int)_DAT_ffff0ba8,(int)_DAT_ffff0baa,
               (DAT_ffff0539 & 0x40) != 0,DAT_ffff2996,_DAT_ffff0b22,_DAT_ffff0b24,DAT_ffff66b0,
               _DAT_ffff0b7a,&DAT_ffff1538,&DAT_ffff0410,&DAT_ffff0bb0);
  FUN_00091590((int)DAT_ffff053f,(int)_DAT_ffff0ba6,(int)_DAT_ffff0ba8,(int)_DAT_ffff0baa,
               (DAT_ffff0539 & 0x20) != 0,DAT_ffff2996,_DAT_ffff0b22,_DAT_ffff0b24,DAT_ffff66b0,
               _DAT_ffff0b7c,&DAT_ffff153c,&DAT_ffff0411,&DAT_ffff0bb2);
  FUN_000916ac((int)DAT_ffff0540,(int)_DAT_ffff0ba6,(int)_DAT_ffff0ba8,(int)_DAT_ffff0baa,
               (DAT_ffff0539 & 0x10) != 0,DAT_ffff2996,_DAT_ffff0b22,_DAT_ffff0b24,DAT_ffff66b0,
               _DAT_ffff0b7e,&DAT_ffff1540,&DAT_ffff0412,&DAT_ffff0bb4);
  uStack_2c = (uint)((DAT_fffef152 & 0x20) != 0);
  FUN_000936ac(((int)(char)DAT_ffff0537 & 0x80U) != 0,(int)DAT_ffff03d4,DAT_fffef498 & 1,
               (DAT_fffef87a & 8) != 0,(DAT_fffef87b & 8) != 0,uStack_2c,DAT_fffeeec6 & 1,
               DAT_ffff66b3,abStack_40);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff03e4 | 0x80;
  if ((abStack_40[0] & 1) == 0) {
    bVar3 = DAT_ffff03e4 & 0x7f;
  }
  puStack_28 = &DAT_ffff03d4;
  DAT_ffff03e4 = bVar3;
  FUN_00001550();
  FUN_00093708((DAT_ffff0537 & 0x40) != 0,(int)DAT_ffff03d4,DAT_fffef498 & 1,(DAT_fffef87a & 8) != 0
               ,(DAT_fffef87b & 8) != 0,(DAT_fffef152 & 0x20) != 0,DAT_fffeeec6 & 1,DAT_ffff66b3,
               abStack_3c);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff03e4 | 0x40;
  if ((abStack_3c[0] & 1) == 0) {
    bVar3 = DAT_ffff03e4 & 0xbf;
  }
  DAT_ffff03e4 = bVar3;
  FUN_00001550();
  FUN_00093764((DAT_ffff0537 & 0x20) != 0,(int)DAT_ffff03d4,DAT_fffef498 & 1,(DAT_fffef87c & 8) != 0
               ,(DAT_fffef87d & 8) != 0,(DAT_fffef152 & 0x20) != 0,DAT_fffeeec6 & 1,DAT_ffff66b3,
               abStack_38);
  FUN_00001550(0xf0);
  puVar1 = puStack_28;
  bVar3 = DAT_ffff03e4 | 0x20;
  if ((abStack_38[0] & 1) == 0) {
    bVar3 = DAT_ffff03e4 & 0xdf;
  }
  DAT_ffff03e4 = bVar3;
  FUN_00001550();
  FUN_000937c0((DAT_ffff0537 & 0x10) != 0,(int)DAT_ffff03d4,DAT_fffef498 & 1,(DAT_fffef87c & 8) != 0
               ,(DAT_fffef87d & 8) != 0,(DAT_fffef152 & 0x20) != 0,DAT_fffeeec6 & 1,DAT_ffff66b3,
               abStack_34);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff03e4 | 0x10;
  if ((abStack_34[0] & 1) == 0) {
    bVar3 = DAT_ffff03e4 & 0xef;
  }
  DAT_ffff03e4 = bVar3;
  FUN_00001550();
  FUN_0008dea0();
  FUN_0008dfcc();
  FUN_0008e1c0();
  FUN_0008e2ec();
  FUN_0008e4d0();
  FUN_0008e5fc();
  FUN_0008e7d0();
  FUN_0008e8fc((int)DAT_ffff66b0,(int)DAT_fffeed27,(int)DAT_ffff0540,(int)_DAT_ffff0b90,
               (DAT_ffff053c & 0x10) != 0,(DAT_ffff03e4 & 0x10) != 0,DAT_ffff0422,
               (DAT_ffff0536 & 0x10) != 0,_v_Engine_Speed_2994,DAT_ffff299c,
               ((int)(char)DAT_ffff03e1 & 0x80U) != 0,&DAT_ffff0b56,puVar1 + 0x4a);
  puVar1 = puStack_30;
  FUN_000917ec(_DAT_ffff1534,((int)(char)DAT_ffff0539 & 0x80U) != 0,
               ((int)(char)DAT_ffff03e4 & 0x80U) != 0,(int)DAT_ffff041f,DAT_ffff66b0,0xffff1644,
               puStack_30 + 0x10,&DAT_ffff0bb8);
  FUN_00091940(_DAT_ffff1534,((int)(char)DAT_ffff03e4 & 0x80U) != 0,(int)DAT_ffff041f,
               (int)_v_Engine_Speed_2994,DAT_ffff66b0,0xffff1644,
               ((int)(char)DAT_ffff0539 & 0x80U) != 0,puVar1 + 0x14,&DAT_ffff0bba);
  FUN_00091aa0(_DAT_ffff1538,(DAT_ffff0539 & 0x40) != 0,(DAT_ffff03e4 & 0x40) != 0,(int)DAT_ffff0420
               ,DAT_ffff66b0,0xffff1644,puVar1 + 0x18,&DAT_ffff0bbc);
  FUN_00091bf8(_DAT_ffff1538,(DAT_ffff03e4 & 0x40) != 0,(int)DAT_ffff0420,(int)_v_Engine_Speed_2994,
               DAT_ffff66b0,0xffff1644,(DAT_ffff0539 & 0x40) != 0,puVar1 + 0x1c,&DAT_ffff0bbe);
  FUN_00091d5c(_DAT_ffff153c,(DAT_ffff0539 & 0x20) != 0,(DAT_ffff03e4 & 0x20) != 0,(int)DAT_ffff0421
               ,DAT_ffff66b0,0xffff1644,puVar1 + 0x20,&DAT_ffff0bc0);
  FUN_00091eb4(_DAT_ffff153c,(DAT_ffff03e4 & 0x20) != 0,(int)DAT_ffff0421,(int)_v_Engine_Speed_2994,
               DAT_ffff66b0,0xffff1644,(DAT_ffff0539 & 0x20) != 0,puVar1 + 0x24,&DAT_ffff0bc2);
  FUN_00092018(_DAT_ffff1540,(DAT_ffff0539 & 0x10) != 0,(DAT_ffff03e4 & 0x10) != 0,(int)DAT_ffff0422
               ,DAT_ffff66b0,0xffff1644,puVar1 + 0x28,&DAT_ffff0bc4);
  puStack_30 = puVar1 + 0x2c;
  FUN_00092170(_DAT_ffff1540,(DAT_ffff03e4 & 0x10) != 0,(int)DAT_ffff0422,(int)_v_Engine_Speed_2994,
               DAT_ffff66b0,0xffff1644,(DAT_ffff0539 & 0x10) != 0,puStack_30,&DAT_ffff0bc6);
  return;
}

