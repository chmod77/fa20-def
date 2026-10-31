
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011bfb4(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_48 [4];
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_ffff090a;
  FUN_0011c49c(DAT_fffef050 & 1,((int)DAT_ffff0515 & 0x80U) != 0,(int)DAT_ffff2996,(int)DAT_ffff03a0
               ,DAT_ffff29a4,DAT_ffff039f,DAT_ffff03d8 & 1,(DAT_fffee710 & 0x10) != 0,
               _v_Catalyst_Temperature_B1S1_0FE4,(int)_DAT_ffff0f82,(DAT_ffff06ce & 8) != 0,
               _DAT_ffff0dba,v_Coolant_Temperature_29A5,DAT_ffff090a,v_CPC_Valve_Duty_Ratio_043B,
               _DAT_ffff389a,_DAT_ffff0bde,_DAT_ffff0b60,_DAT_ffff0b62,DAT_ffff0401,DAT_ffff0404,
               DAT_ffff0415,_DAT_ffff0b84,_DAT_ffff0b80,_DAT_ffff0b42,_DAT_ffff0d3a,_DAT_ffff0d36,
               local_48,&DAT_ffff135c,&DAT_ffff135e,&DAT_ffff1360,&DAT_ffff1362);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0929 | 1;
  if ((local_48[0] & 1) == 0) {
    bVar2 = DAT_ffff0929 & 0xfe;
  }
  DAT_ffff0929 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011bd78((int)_DAT_ffff38f8,&DAT_ffff39f4);
  FUN_0011cdd4(DAT_ffff0929 & 1,(int)_DAT_ffff39f4,abStack_44);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0929 | 0x20;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff0929 & 0xdf;
  }
  DAT_ffff0929 = bVar2;
  FUN_00001550();
  FUN_0011bd4c((DAT_ffff0929 & 0x20) != 0,DAT_fffef050 & 1,(int)DAT_ffff3842);
  FUN_0011bd7c((int)_DAT_ffff38f8,(int)_DAT_ffff39f6,DAT_fffef050 & 1,(DAT_ffff0929 & 0x20) != 0,
               &DAT_ffff39f6);
  FUN_0011bf14((int)_DAT_ffff39f6,&DAT_ffff1358);
  FUN_0011bf64((int)_DAT_ffff39f6,&DAT_ffff135a);
  FUN_0011bd9c((int)_DAT_ffff39f6,(int)_DAT_ffff39f4,(int)_DAT_ffff39f8,DAT_fffef050 & 1,
               &DAT_ffff39f8);
  abStack_40[0] = DAT_ffff3843 & 1;
  FUN_0011cd84(DAT_fffef050 & 1,(int)DAT_ffff3842,abStack_40[0],abStack_40);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff3843 | 1;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff3843 & 0xfe;
  }
  DAT_ffff3843 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011c980(DAT_ffff0929 & 1,DAT_ffff3843 & 1,(int)_DAT_ffff0dea,(int)_DAT_ffff135a,
               (int)_DAT_ffff39f6,(DAT_fffeeec2 & 4) != 0,0xffff370b,&DAT_ffff37d9,abStack_3c,
               &DAT_ffff1364,&DAT_ffff1366);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0929 | 8;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff0929 & 0xf7;
  }
  DAT_ffff0929 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011caa8(DAT_ffff0929 & 1,DAT_ffff3843 & 1,(int)_DAT_ffff0dea,(int)_DAT_ffff135a,
               (int)_DAT_ffff39f6,abStack_38,&DAT_ffff1368,&DAT_ffff136a);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0929 | 0x10;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff0929 & 0xef;
  }
  DAT_ffff0929 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011cb84(DAT_ffff0929 & 1,DAT_ffff3843 & 1,(int)_DAT_ffff0dea,(int)_DAT_ffff1358,
               (int)_DAT_ffff39f6,(DAT_fffeeec2 & 4) != 0,0xffff370b,&DAT_ffff37d9,abStack_34,
               &DAT_ffff136c,&DAT_ffff136e);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0929 | 2;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff0929 & 0xfd;
  }
  DAT_ffff0929 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011cca8(DAT_ffff0929 & 1,DAT_ffff3843 & 1,(int)_DAT_ffff0dea,(int)_DAT_ffff1358,
               (int)_DAT_ffff39f6,abStack_30,&DAT_ffff1370,&DAT_ffff1372);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0929 | 4;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff0929 & 0xfb;
  }
  DAT_ffff0929 = bVar2;
  FUN_00001550();
  FUN_0011be3c((DAT_ffff0929 & 8) != 0,(DAT_ffff0929 & 0x10) != 0,DAT_fffef050 & 1,&DAT_ffff0927);
  FUN_0011be68((DAT_ffff0929 & 2) != 0,(DAT_ffff0929 & 4) != 0,DAT_fffef050 & 1,&DAT_ffff0928);
  FUN_0011cdac((DAT_ffff0929 & 8) != 0,(DAT_ffff0929 & 0x10) != 0,DAT_fffef050 & 1,abStack_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff092a | 2;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff092a & 0xfd;
  }
  DAT_ffff092a = bVar2;
  FUN_00001550();
  FUN_0011cee0((DAT_ffff0929 & 2) != 0,(DAT_ffff0929 & 4) != 0,DAT_fffef050 & 1,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff092a | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff092a & 0xfe;
  }
  DAT_ffff092a = bVar2;
  FUN_00001550(uVar1);
  return;
}

