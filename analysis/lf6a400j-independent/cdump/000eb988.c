
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb988(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [4];
  undefined1 *local_18;
  
  local_18 = &v_A_F_Sensor_1_EF96;
  FUN_000ebd2c((int)_v_A_F_Sensor_1_EF96,(int)_DAT_fffeeed0,&DAT_ffff1152);
  FUN_000ebdb0((int)_DAT_ffff0dc0,&DAT_ffff1154);
  FUN_000ec050(local_24,&DAT_ffff070e);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0711 | 4;
  if ((local_24[0] & 1) == 0) {
    bVar2 = DAT_ffff0711 & 0xfb;
  }
  DAT_ffff0711 = bVar2;
  FUN_00001550(uVar1);
  FUN_000ec09c(abStack_20,&DAT_ffff070d);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0711 | 2;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff0711 & 0xfd;
  }
  DAT_ffff0711 = bVar2;
  FUN_00001550(uVar1);
  FUN_000eb218((int)_DAT_ffff1152,&DAT_ffff113e);
  FUN_000eb31c((int)_DAT_ffff1152,&DAT_ffff1148);
  FUN_000eb104((DAT_ffff0711 & 2) != 0,(int)_DAT_ffff113e,&DAT_ffff1138);
  FUN_000eb3c4((DAT_ffff0711 & 4) != 0,(int)_DAT_ffff1148,&DAT_ffff114c);
  FUN_000eb154((DAT_ffff0711 & 2) != 0,(int)_DAT_ffff1150,DAT_ffff0711 & 1,(int)_DAT_ffff1138,
               DAT_fffef050 & 1,&DAT_ffff113a);
  FUN_000eb470((DAT_ffff0711 & 4) != 0,(int)_DAT_ffff1150,DAT_ffff0711 & 1,(int)_DAT_ffff114c,
               DAT_fffef050 & 1,&DAT_ffff114e);
  FUN_000eb534((int)_DAT_ffff1150,(int)_DAT_ffff113a,(int)_DAT_ffff114e,DAT_fffef050 & 1,
               _DAT_ffff1132,&DAT_ffff070f);
  FUN_000ec11c((int)_DAT_ffff1150,(int)_DAT_ffff113a,(int)_DAT_ffff114e,DAT_fffef050 & 1,
               _DAT_ffff1132,abStack_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0713 | 0x80;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff0713 & 0x7f;
  }
  DAT_ffff0713 = bVar2;
  FUN_00001550(uVar1);
  return;
}

