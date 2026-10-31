
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b7370(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte local_68 [4];
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
  byte bStack_28;
  undefined1 *local_24;
  
  local_24 = &v_CPC_Valve_Duty_Ratio_043B;
  FUN_000b7890((int)_DAT_ffff0f56,(DAT_ffffab40 & 0x20) != 0,&DAT_ffff0df0);
  FUN_000b7cf4((int)DAT_ffff66b0,(int)_DAT_fffeecae,(int)_DAT_fffef384,(int)_DAT_fffeeee0,local_68);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0512 | 0x80;
  if ((local_68[0] & 1) == 0) {
    bVar2 = DAT_ffff0512 & 0x7f;
  }
  DAT_ffff0512 = bVar2;
  FUN_00001550(uVar1);
  FUN_000b7f64((int)_DAT_fffeecae,abStack_64);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0515 | 0x20;
  if ((abStack_64[0] & 1) == 0) {
    bVar2 = DAT_ffff0515 & 0xdf;
  }
  DAT_ffff0515 = bVar2;
  FUN_00001550(uVar1);
  FUN_000b8268((int)_DAT_fffeecae,abStack_60);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0515 | 0x40;
  if ((abStack_60[0] & 1) == 0) {
    bVar2 = DAT_ffff0515 & 0xbf;
  }
  DAT_ffff0515 = bVar2;
  FUN_00001550();
  FUN_000b67f8((DAT_ffff06ce & 8) != 0,(int)_DAT_ffff0dd2);
  FUN_000b7320();
  FUN_000b794c((int)_DAT_ffff0d80,(int)_DAT_fffeef94,(int)_DAT_ffff0f56,(int)_DAT_fffeecae,
               (DAT_ffffab40 & 0x20) != 0,((int)DAT_ffff064e & 0x80U) != 0,
               ((int)(char)DAT_ffff0512 & 0x80U) != 0,&DAT_ffff0dee);
  FUN_000b7f88((int)v_Vehicle_Speed_byte_65A1,(int)_v_Catalyst_Temperature_B1S1_0FE4,
               (DAT_ffffab40 & 0x20) != 0,(int)_DAT_ffff29d8,DAT_ffff29a8,v_Coolant_Temperature_29A5
               ,((int)DAT_ffff050e & 0x80U) != 0,_DAT_ffff0dc0,_DAT_fffeef94,
               ((int)(char)DAT_ffff0512 & 0x80U) != 0,(DAT_fffef32b & 0x40) != 0,
               ((int)DAT_ffff064e & 0x80U) != 0,abStack_38,abStack_3c,abStack_40,abStack_44,
               abStack_48,abStack_4c,abStack_50,abStack_54,abStack_58,abStack_5c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0515 | 0x80;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff0515 & 0x7f;
  }
  bVar3 = DAT_ffff0513 | 0x20;
  if ((abStack_3c[0] & 1) == 0) {
    bVar3 = DAT_ffff0513 & 0xdf;
  }
  bVar4 = bVar3 | 0x10;
  if ((abStack_40[0] & 1) == 0) {
    bVar4 = bVar3 & 0xef;
  }
  bVar3 = bVar4 | 8;
  if ((abStack_44[0] & 1) == 0) {
    bVar3 = bVar4 & 0xf7;
  }
  bVar4 = bVar3 | 4;
  if ((abStack_48[0] & 1) == 0) {
    bVar4 = bVar3 & 0xfb;
  }
  DAT_ffff0513 = bVar4 | 2;
  if ((abStack_4c[0] & 1) == 0) {
    DAT_ffff0513 = bVar4 & 0xfd;
  }
  bVar3 = DAT_ffff0514 | 0x20;
  if ((abStack_50[0] & 1) == 0) {
    bVar3 = DAT_ffff0514 & 0xdf;
  }
  bVar4 = bVar3 | 0x10;
  if ((abStack_54[0] & 1) == 0) {
    bVar4 = bVar3 & 0xef;
  }
  bVar3 = bVar4 | 8;
  if ((abStack_58[0] & 1) == 0) {
    bVar3 = bVar4 & 0xf7;
  }
  DAT_ffff0514 = bVar3 | 2;
  if ((abStack_5c[0] & 1) == 0) {
    DAT_ffff0514 = bVar3 & 0xfd;
  }
  DAT_ffff0515 = bVar2;
  FUN_00001550(uVar1);
  FUN_000b67d0((int)_DAT_ffff0dd4,&DAT_ffff0dd2);
  FUN_000b7e2c(((int)(char)DAT_ffff0515 & 0x80U) != 0,(int)_DAT_ffff0dee,(DAT_ffff0515 & 0x20) != 0,
               abStack_34);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0516 | 0x40;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff0516 & 0xbf;
  }
  DAT_ffff0516 = bVar2;
  FUN_00001550();
  FUN_000b7e84(((int)(char)DAT_ffff0515 & 0x80U) != 0,(DAT_ffff0515 & 0x20) != 0,
               (DAT_ffff0515 & 0x40) != 0,abStack_30);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0516 | 0x20;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff0516 & 0xdf;
  }
  DAT_ffff0516 = bVar2;
  FUN_00001550();
  FUN_000b7f08(((int)(char)DAT_ffff0515 & 0x80U) != 0,(int)_DAT_ffff0dee,(DAT_ffff0515 & 0x40) != 0,
               abStack_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0516 | 0x80;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0516 & 0x7f;
  }
  DAT_ffff0516 = bVar2;
  FUN_00001550();
  FUN_000b6e90(((int)(char)DAT_ffff0515 & 0x80U) != 0,(int)_DAT_ffff0dee,(int)_DAT_fffeecae,
               &DAT_ffff0de0);
  FUN_000b6fbc(((int)(char)DAT_ffff0515 & 0x80U) != 0,(int)_DAT_fffeecae,(int)_DAT_ffff0f56,
               &DAT_ffff0de2,&DAT_ffff0de4,&DAT_ffff0de6,&DAT_ffff0de8);
  FUN_000b7dec((int)_DAT_fffeecae);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0515 | 0x10;
  if ((bStack_28 & 1) == 0) {
    bVar2 = DAT_ffff0515 & 0xef;
  }
  DAT_ffff0515 = bVar2;
  FUN_00001550();
  FUN_000b692c(((int)(char)DAT_ffff0515 & 0x80U) != 0,(int)_DAT_ffff0dee,(DAT_ffff0515 & 0x40) != 0,
               (DAT_ffff0515 & 0x20) != 0,(DAT_ffff0516 & 0x20) != 0,(DAT_ffff0516 & 0x40) != 0,
               ((int)(char)DAT_ffff0516 & 0x80U) != 0,_DAT_ffff0d3a,_DAT_ffff0d36,
               v_CPC_Valve_Duty_Ratio_043B,DAT_ffff2996,(int)_DAT_ffff39f8,&DAT_ffff38f8,
               &DAT_ffff0dd6,&DAT_ffff0dd8,&DAT_ffff0dda,&DAT_ffff0ddc,&DAT_ffff0dde,&DAT_ffff0511);
  FUN_000b7c74((int)_DAT_ffff0dec,(DAT_ffff06ce & 8) != 0,(DAT_ffff0515 & 0x10) != 0,&DAT_ffff0df4);
  FUN_000b7248((int)_DAT_ffff0de0,(int)_DAT_ffff0de2,(int)_DAT_ffff38f8,(int)_DAT_ffff0f82,
               &DAT_ffff0dea);
  FUN_000b7c24((int)_DAT_ffff0dec,(int)_DAT_ffff0df4,&DAT_ffff0df2);
  return;
}

