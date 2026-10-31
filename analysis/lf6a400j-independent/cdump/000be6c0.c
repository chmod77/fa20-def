
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000be6c0(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_88 [4];
  byte abStack_84 [4];
  byte abStack_80 [4];
  byte bStack_7c;
  byte abStack_78 [4];
  byte abStack_74 [4];
  byte abStack_70 [4];
  byte bStack_6c;
  byte abStack_68 [4];
  byte abStack_64 [4];
  byte abStack_60 [4];
  byte abStack_5c [4];
  byte abStack_58 [4];
  byte abStack_54 [4];
  byte abStack_50 [4];
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [8];
  
  FUN_000c0244((int)DAT_fffeed24,local_88);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0536 | 0x80;
  if ((local_88[0] & 1) == 0) {
    bVar2 = DAT_ffff0536 & 0x7f;
  }
  DAT_ffff0536 = bVar2;
  FUN_00001550(uVar1);
  FUN_000c0268((int)DAT_fffeed25,abStack_84);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0536 | 0x40;
  if ((abStack_84[0] & 1) == 0) {
    bVar2 = DAT_ffff0536 & 0xbf;
  }
  DAT_ffff0536 = bVar2;
  FUN_00001550(uVar1);
  FUN_000c028c((int)DAT_fffeed26,abStack_80);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0536 | 0x20;
  if ((abStack_80[0] & 1) == 0) {
    bVar2 = DAT_ffff0536 & 0xdf;
  }
  DAT_ffff0536 = bVar2;
  FUN_00001550(uVar1);
  FUN_000c02b0((int)DAT_fffeed27);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0536 | 0x10;
  if ((bStack_7c & 1) == 0) {
    bVar2 = DAT_ffff0536 & 0xef;
  }
  DAT_ffff0536 = bVar2;
  FUN_00001550(uVar1);
  FUN_000bfce0((int)DAT_fffeed24,((int)(char)DAT_ffff0536 & 0x80U) != 0,abStack_78);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0538 | 0x80;
  if ((abStack_78[0] & 1) == 0) {
    bVar2 = DAT_ffff0538 & 0x7f;
  }
  DAT_ffff0538 = bVar2;
  FUN_00001550(uVar1);
  FUN_000bfd10((int)DAT_fffeed25,(DAT_ffff0536 & 0x40) != 0,abStack_74);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0538 | 0x40;
  if ((abStack_74[0] & 1) == 0) {
    bVar2 = DAT_ffff0538 & 0xbf;
  }
  DAT_ffff0538 = bVar2;
  FUN_00001550(uVar1);
  FUN_000bfd40((int)DAT_fffeed26,(DAT_ffff0536 & 0x20) != 0,abStack_70);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0538 | 0x20;
  if ((abStack_70[0] & 1) == 0) {
    bVar2 = DAT_ffff0538 & 0xdf;
  }
  DAT_ffff0538 = bVar2;
  FUN_00001550(uVar1);
  FUN_000bfd70((int)DAT_fffeed27);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0538 | 0x10;
  if ((bStack_6c & 1) == 0) {
    bVar2 = DAT_ffff0538 & 0xef;
  }
  DAT_ffff0538 = bVar2;
  FUN_00001550(uVar1);
  FUN_000bfc70((int)DAT_fffeed24,((int)(char)DAT_ffff0536 & 0x80U) != 0,
               ((int)(char)DAT_ffff0538 & 0x80U) != 0,abStack_68);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff053a | 0x80;
  if ((abStack_68[0] & 1) == 0) {
    bVar2 = DAT_ffff053a & 0x7f;
  }
  DAT_ffff053a = bVar2;
  FUN_00001550(uVar1);
  FUN_000c00e0((int)DAT_fffeed24,((int)(char)DAT_ffff0536 & 0x80U) != 0,
               ((int)(char)DAT_ffff0538 & 0x80U) != 0,abStack_64);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0537 | 0x80;
  if ((abStack_64[0] & 1) == 0) {
    bVar2 = DAT_ffff0537 & 0x7f;
  }
  DAT_ffff0537 = bVar2;
  FUN_00001550(uVar1);
  FUN_000c0324((int)DAT_fffeed24,((int)(char)DAT_ffff0536 & 0x80U) != 0,
               ((int)(char)DAT_ffff0538 & 0x80U) != 0,abStack_60);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0539 | 0x80;
  if ((abStack_60[0] & 1) == 0) {
    bVar2 = DAT_ffff0539 & 0x7f;
  }
  DAT_ffff0539 = bVar2;
  FUN_00001550(uVar1);
  FUN_000bfc8c((int)DAT_fffeed25,(DAT_ffff0536 & 0x40) != 0,(DAT_ffff0538 & 0x40) != 0,abStack_5c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff053a | 0x40;
  if ((abStack_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff053a & 0xbf;
  }
  DAT_ffff053a = bVar2;
  FUN_00001550(uVar1);
  FUN_000c00fc((int)DAT_fffeed25,(DAT_ffff0536 & 0x40) != 0,(DAT_ffff0538 & 0x40) != 0,abStack_58);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0537 | 0x40;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff0537 & 0xbf;
  }
  DAT_ffff0537 = bVar2;
  FUN_00001550(uVar1);
  FUN_000c0344((int)DAT_fffeed25,(DAT_ffff0536 & 0x40) != 0,(DAT_ffff0538 & 0x40) != 0,abStack_54);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0539 | 0x40;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff0539 & 0xbf;
  }
  DAT_ffff0539 = bVar2;
  FUN_00001550(uVar1);
  FUN_000bfca8((int)DAT_fffeed26,(DAT_ffff0536 & 0x20) != 0,(DAT_ffff0538 & 0x20) != 0,abStack_50);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff053a | 0x20;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff053a & 0xdf;
  }
  DAT_ffff053a = bVar2;
  FUN_00001550(uVar1);
  FUN_000c0118((int)DAT_fffeed26,(DAT_ffff0536 & 0x20) != 0,(DAT_ffff0538 & 0x20) != 0,abStack_4c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0537 | 0x20;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff0537 & 0xdf;
  }
  DAT_ffff0537 = bVar2;
  FUN_00001550(uVar1);
  FUN_000c0364((int)DAT_fffeed26,(DAT_ffff0536 & 0x20) != 0,(DAT_ffff0538 & 0x20) != 0,abStack_48);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0539 | 0x20;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff0539 & 0xdf;
  }
  DAT_ffff0539 = bVar2;
  FUN_00001550(uVar1);
  FUN_000bfcc4((int)DAT_fffeed27,(DAT_ffff0536 & 0x10) != 0,(DAT_ffff0538 & 0x10) != 0,abStack_44);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff053a | 0x10;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff053a & 0xef;
  }
  DAT_ffff053a = bVar2;
  FUN_00001550(uVar1);
  FUN_000c0134((int)DAT_fffeed27,(DAT_ffff0536 & 0x10) != 0,(DAT_ffff0538 & 0x10) != 0,abStack_40);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0537 | 0x10;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff0537 & 0xef;
  }
  DAT_ffff0537 = bVar2;
  FUN_00001550(uVar1);
  FUN_000c0384((int)DAT_fffeed27,(DAT_ffff0536 & 0x10) != 0,(DAT_ffff0538 & 0x10) != 0,abStack_3c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0539 | 0x10;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff0539 & 0xef;
  }
  DAT_ffff0539 = bVar2;
  FUN_00001550();
  FUN_000bee08(((int)(char)DAT_ffff0536 & 0x80U) != 0,(int)DAT_ffff0530,
               ((int)(char)DAT_ffff0537 & 0x80U) != 0,&DAT_ffff053d);
  FUN_000bee30((DAT_ffff0536 & 0x40) != 0,(int)DAT_ffff0530,(DAT_ffff0537 & 0x40) != 0,&DAT_ffff053e
              );
  FUN_000bee58((DAT_ffff0536 & 0x20) != 0,(int)DAT_ffff0530,(DAT_ffff0537 & 0x20) != 0,&DAT_ffff053f
              );
  FUN_000bee80((DAT_ffff0536 & 0x10) != 0,(int)DAT_ffff0530,(DAT_ffff0537 & 0x10) != 0,&DAT_ffff0540
              );
  FUN_000bfda0((int)DAT_fffeed24,((int)(char)DAT_ffff0536 & 0x80U) != 0,
               ((int)(char)DAT_ffff0538 & 0x80U) != 0,(int)DAT_ffff053d,abStack_38);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff053b | 0x80;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff053b & 0x7f;
  }
  DAT_ffff053b = bVar2;
  FUN_00001550(uVar1);
  FUN_000bfe80((int)_v_Engine_Speed_2994,(int)DAT_fffeed24,((int)(char)DAT_ffff0536 & 0x80U) != 0,
               ((int)(char)DAT_ffff0538 & 0x80U) != 0,DAT_ffff053d,abStack_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff053c | 0x80;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff053c & 0x7f;
  }
  DAT_ffff053c = bVar2;
  FUN_00001550(uVar1);
  FUN_000bfdd8((int)DAT_fffeed25,(DAT_ffff0536 & 0x40) != 0,(DAT_ffff0538 & 0x40) != 0,
               (int)DAT_ffff053e,abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff053b | 0x40;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff053b & 0xbf;
  }
  DAT_ffff053b = bVar2;
  FUN_00001550(uVar1);
  FUN_000bff18((int)_v_Engine_Speed_2994,(int)DAT_fffeed25,(DAT_ffff0536 & 0x40) != 0,
               (DAT_ffff0538 & 0x40) != 0,DAT_ffff053e,abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff053c | 0x40;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff053c & 0xbf;
  }
  DAT_ffff053c = bVar2;
  FUN_00001550(uVar1);
  FUN_000bfe10((int)DAT_fffeed26,(DAT_ffff0536 & 0x20) != 0,(DAT_ffff0538 & 0x20) != 0,
               (int)DAT_ffff053f,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff053b | 0x20;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff053b & 0xdf;
  }
  DAT_ffff053b = bVar2;
  FUN_00001550(uVar1);
  FUN_000bffb0((int)_v_Engine_Speed_2994,(int)DAT_fffeed26,(DAT_ffff0536 & 0x20) != 0,
               (DAT_ffff0538 & 0x20) != 0,DAT_ffff053f,abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff053c | 0x20;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff053c & 0xdf;
  }
  DAT_ffff053c = bVar2;
  FUN_00001550(uVar1);
  FUN_000bfe48((int)DAT_fffeed27,(DAT_ffff0536 & 0x10) != 0,(DAT_ffff0538 & 0x10) != 0,
               (int)DAT_ffff0540,abStack_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff053b | 0x10;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff053b & 0xef;
  }
  DAT_ffff053b = bVar2;
  FUN_00001550(uVar1);
  FUN_000c0048((int)_v_Engine_Speed_2994,(int)DAT_fffeed27,(DAT_ffff0536 & 0x10) != 0,
               (DAT_ffff0538 & 0x10) != 0,DAT_ffff0540,abStack_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff053c | 0x10;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff053c & 0xef;
  }
  DAT_ffff053c = bVar2;
  FUN_00001550(uVar1);
  return;
}

