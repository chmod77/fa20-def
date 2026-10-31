
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a006c(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_38 [4];
  byte abStack_34 [4];
  byte bStack_30;
  byte abStack_2c [4];
  byte bStack_28;
  byte abStack_24 [4];
  undefined1 *local_20;
  
  local_20 = &DAT_ffff03e0;
  FUN_0009efe8(DAT_ffff03e0 & 1,&DAT_ffff04a7);
  FUN_0009f2e8((int)_DAT_ffff09b4,&DAT_ffff0c2a,&DAT_ffff0c2e);
  FUN_000a36d0(((int)DAT_ffff2a03 & 0x80U) != 0,((int)(char)DAT_ffff04b5 & 0x80U) != 0,&DAT_ffff0c36
              );
  FUN_000a3704(((int)DAT_ffff2a03 & 0x80U) != 0,(DAT_ffff04b5 & 0x20) != 0,&DAT_ffff0c38);
  FUN_000a3818(0xffff366a,0xffff389c,(int)DAT_ffff3669,DAT_ffff3668 & 1,local_38,&DAT_ffff04a5,
               &DAT_ffff04a6);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff04b7 | 2;
  if ((local_38[0] & 1) == 0) {
    bVar2 = DAT_ffff04b7 & 0xfd;
  }
  DAT_ffff04b7 = bVar2;
  FUN_00001550();
  FUN_000a5124(((int)(char)DAT_ffff04b5 & 0x80U) != 0,abStack_34);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff04b5 | 0x40;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff04b5 & 0xbf;
  }
  DAT_ffff04b5 = bVar2;
  FUN_00001550();
  FUN_000a5174((DAT_ffff04b5 & 0x20) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff04b5 | 0x10;
  if ((bStack_30 & 1) == 0) {
    bVar2 = DAT_ffff04b5 & 0xef;
  }
  DAT_ffff04b5 = bVar2;
  FUN_00001550();
  FUN_000a412c(1,(DAT_fffeef76 & 8) != 0,(int)DAT_ffff66b0,((int)DAT_ffff2985 & 0x80U) != 0,
               v_Coolant_Temperature_29A5,(DAT_fffee710 & 0x20) != 0,DAT_ffff048f,
               ((int)DAT_fffef6e4 & 0x80U) != 0,DAT_ffff03a0,_v_Engine_Speed_2994,
               (DAT_fffef73b & 0x10) != 0,(DAT_fffef73b & 0x20) != 0,(DAT_fffef748 & 8) != 0,
               (DAT_fffef748 & 4) != 0,DAT_ffff0541,abStack_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff04b3 | 4;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff04b3 & 0xfb;
  }
  DAT_ffff04b3 = bVar2;
  FUN_00001550();
  FUN_000a3fb4((DAT_ffff04b3 & 4) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff04b3 | 0x80;
  if ((bStack_28 & 1) == 0) {
    bVar2 = DAT_ffff04b3 & 0x7f;
  }
  DAT_ffff04b3 = bVar2;
  FUN_00001550();
  FUN_000a3fbc(((int)(char)DAT_ffff04b3 & 0x80U) != 0,(DAT_ffff04b2 & 0x10) != 0,abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff04b2 | 0x20;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff04b2 & 0xdf;
  }
  DAT_ffff04b2 = bVar2;
  FUN_00001550(uVar1);
  return;
}

