
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb7cc(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_24 [4];
  byte abStack_20 [8];
  
  FUN_000eb370((int)_DAT_ffff1152,&DAT_ffff114a);
  FUN_000ec088((int)_DAT_ffff395e,local_24);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0712 | 2;
  if ((local_24[0] & 1) == 0) {
    bVar2 = DAT_ffff0712 & 0xfd;
  }
  DAT_ffff0712 = bVar2;
  FUN_00001550();
  FUN_000eb1a4((DAT_ffff0712 & 2) != 0,(int)_DAT_ffff114a,_DAT_ffff16f8,(int)_DAT_ffff395e,
               &DAT_ffff113c);
  FUN_000eb0dc((DAT_ffff0712 & 2) != 0,(int)_DAT_ffff395e,&DAT_ffff395e);
  FUN_000eb4c0((DAT_ffff0712 & 2) != 0,(int)_DAT_ffff114a,&DAT_ffff16f8);
  FUN_000ec0d4((int)_DAT_ffff113c,(int)_DAT_ffff1140,(int)_DAT_ffff1144,abStack_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0711 | 8;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff0711 & 0xf7;
  }
  DAT_ffff0711 = bVar2;
  FUN_00001550(uVar1);
  FUN_000eb02c(DAT_ffff0711 & 1,(DAT_ffff0711 & 8) != 0,&DAT_ffff1134);
  FUN_000eb0ac((DAT_ffff0711 & 8) != 0,&DAT_ffff1136);
  FUN_000eb2a0((DAT_ffff0711 & 8) != 0,(int)_DAT_ffff113c,&DAT_ffff1142);
  FUN_000eb26c((DAT_ffff0711 & 8) != 0,(int)_DAT_ffff113c,&DAT_ffff1140);
  FUN_000eb2f8((DAT_ffff0711 & 8) != 0,(int)_DAT_ffff113c,&DAT_ffff1146);
  FUN_000eb2c4((DAT_ffff0711 & 8) != 0,(int)_DAT_ffff113c,&DAT_ffff1144);
  FUN_000eb068(DAT_ffff0711 & 1,(DAT_ffff0711 & 8) != 0,(int)_DAT_ffff1136,&DAT_ffff16f4);
  FUN_000eafb0(DAT_ffff0711 & 1,(DAT_ffff0711 & 8) != 0,(int)_DAT_ffff1134,_DAT_ffff16f4,
               _DAT_ffff1150,&DAT_ffff1132);
  return;
}

