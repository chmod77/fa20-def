
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00087478(void)

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
  byte abStack_30 [4];
  byte abStack_2c [4];
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff09b4;
  puStack_28 = &DAT_ffff09b4;
  FUN_0008527c((DAT_fffee710 & 0x20) != 0,(int)v_Vehicle_Speed_byte_65A1,(int)DAT_ffff66b0,
               (int)_v_Atmospheric_Pressure_E6AA,&DAT_ffff0aa4,&DAT_ffff0b02);
  FUN_00086758((int)_DAT_ffff09b4,(int)_v_Engine_Speed_2994,((int)DAT_ffff04f4 & 0x80U) != 0,
               (DAT_ffff054a & 0x10) != 0,(int)DAT_ffff049c,(int)DAT_ffff049b,&DAT_ffff03d1,
               &DAT_ffff03d6,&DAT_ffff03d2);
  FUN_00086b58((int)DAT_ffff0458,(int)DAT_ffff0531,(int)DAT_ffff0532,(int)DAT_ffff0533,DAT_ffff0530,
               &DAT_ffff03d3);
  FUN_00086a50((int)_DAT_ffff09ba,(int)_v_Engine_Speed_2994,&DAT_ffff0ae8,&DAT_ffff0ae4);
  FUN_00086ac4(_DAT_fffeecb0,&DAT_ffff152c);
  FUN_00087010((int)DAT_ffff29b7,(int)DAT_ffff29ba,(int)_v_Engine_Speed_2994,&DAT_ffff0b0e,
               &DAT_ffff0ab2);
  FUN_00088478((int)DAT_ffff0541,(int)DAT_ffff03d3,(int)v_Ignition_Total_Timing_046C,local_50);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03d8 | 0x20;
  if ((local_50[0] & 1) == 0) {
    bVar3 = DAT_ffff03d8 & 0xdf;
  }
  DAT_ffff03d8 = bVar3;
  FUN_00001550(uVar2);
  FUN_00085278((int)v_Ignition_Total_Timing_046C,&DAT_ffff03ce);
  FUN_00088000((int)_DAT_ffff09d4,puStack_28 + 0x164,puStack_28 + 0x116);
  FUN_00088298(DAT_fffeeec6 & 1,abStack_4c);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff03d9 | 2;
  if ((abStack_4c[0] & 1) == 0) {
    bVar3 = DAT_ffff03d9 & 0xfd;
  }
  DAT_ffff03d9 = bVar3;
  FUN_00001550();
  FUN_000884c4((DAT_fffeeec2 & 2) != 0,abStack_48);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03d9 | 1;
  if ((abStack_48[0] & 1) == 0) {
    bVar3 = DAT_ffff03d9 & 0xfe;
  }
  DAT_ffff03d9 = bVar3;
  FUN_00001550(uVar2);
  puVar1 = puStack_28;
  FUN_000853c4((int)DAT_ffff049e,(int)DAT_ffff03d1,(int)DAT_ffff0541,(int)DAT_ffff04a4,
               (int)DAT_ffff04bb,puStack_28 + 0xf4);
  FUN_00085fb4((int)DAT_ffff0541,(int)DAT_ffff03d3,(int)v_Ignition_Total_Timing_046C,
               (DAT_fffee710 & 0x20) != 0,_DAT_fffeeede,DAT_ffff04ca & 1,(DAT_ffff03d8 & 0x20) != 0,
               puVar1 + 0x114,abStack_44);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff03d8 | 0x40;
  if ((abStack_44[0] & 1) == 0) {
    bVar3 = DAT_ffff03d8 & 0xbf;
  }
  DAT_ffff03d8 = bVar3;
  FUN_00001550();
  FUN_00086680((DAT_ffff2a14 & 0x40) != 0,(DAT_ffff0002 & 4) != 0,(DAT_ffff0002 & 2) != 0,
               (DAT_ffff0007 & 0x10) != 0,DAT_ffff6570 & 1,(DAT_ffff6570 & 0x10) != 0,
               (DAT_ffff0000 & 0x20) != 0,(DAT_ffff0002 & 0x20) != 0,_DAT_ffff0adc,_DAT_ffff0ae8,
               puStack_28 + 0x126,puStack_28 + 0x150,puStack_28 + 0x152,puStack_28 + 0x154);
  FUN_0008832c((int)DAT_ffff0541,(int)DAT_ffff03d3,(int)v_Ignition_Total_Timing_046C,
               DAT_ffff04ca & 1,(DAT_fffee710 & 0x20) != 0,(DAT_ffff03d8 & 0x20) != 0,abStack_40);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03d8 | 0x80;
  if ((abStack_40[0] & 1) == 0) {
    bVar3 = DAT_ffff03d8 & 0x7f;
  }
  DAT_ffff03d8 = bVar3;
  FUN_00001550(uVar2);
  FUN_00085b3c((int)_DAT_ffff0ada,(int)_DAT_ffff0a08,puStack_28 + 0x10a);
  FUN_00086f44((int)_DAT_ffff0ada,(int)_DAT_ffff0a70,puStack_28 + 0x14a);
  FUN_00085434((int)_DAT_ffff0ae8,(int)_DAT_ffff0afe,(int)_v_Engine_Speed_2994,puStack_28 + 0xf6,
               puStack_28 + 0x144);
  FUN_00086954((int)_DAT_ffff0b10,(int)_DAT_ffff0adc,(int)_DAT_ffff0afe,puStack_28 + 300);
  FUN_0008637c((int)DAT_ffff03d1,(int)_DAT_ffff0aa8,(int)DAT_ffff0530,(int)_v_Engine_Speed_2994,
               _DAT_ffff0ae0,_DAT_ffff0ae2,_DAT_ffff0b0e,_DAT_ffff0aa4,(int)DAT_ffff03d3,
               _DAT_ffff0ac8,puStack_28 + 0x11e,puStack_28 + 0x142,puStack_28 + 0x122,
               puStack_28 + 0x120);
  FUN_00086d9c((int)_DAT_ffff0aaa,0,(int)_DAT_ffff0f56,(int)_v_Engine_Speed_2994,puStack_28 + 0x148,
               puStack_28 + 0x12a,puStack_28 + 0x132,puStack_28 + 0x10e,puStack_28 + 0x13c);
  FUN_00086634((int)_DAT_ffff0ad2,(int)_DAT_fffeeede,puStack_28 + 0x11c,&DAT_ffff03d0);
  FUN_000870fc((int)_DAT_ffff0ad2,(int)_DAT_ffff0abe,(int)_DAT_ffff0b0e,(int)_DAT_ffff0aaa,
               DAT_ffff299c,_DAT_ffff0afc,_DAT_ffff0aa8,_DAT_ffff0ac8,&DAT_ffff03d7,
               puStack_28 + 0x106,&DAT_ffff03dc);
  FUN_00085940((int)_DAT_ffff0aaa,(int)DAT_ffff299c,(int)_DAT_ffff0afc,(int)_DAT_ffff0b0e,
               _DAT_ffff0ac8,puStack_28 + 0x108,&DAT_ffff03db,puStack_28 + 0x104);
  FUN_00087ee4((int)_DAT_ffff0abe,(int)_DAT_ffff0abc,&DAT_ffff03da);
  FUN_0008549c((int)_DAT_ffff0aaa,(int)_DAT_ffff0abc,puStack_28 + 0xf8,puStack_28 + 0x15e,
               puStack_28 + 0x124);
  FUN_00085910((int)_DAT_ffff0ada,(int)_DAT_ffff0abc,puStack_28 + 0x102);
  FUN_00085b74((int)DAT_ffff03da,(int)DAT_ffff66b0,(int)DAT_ffff03c6,DAT_ffff03c8 & 1,
               (DAT_fffef3fc & 0x20) != 0,((int)(char)DAT_fffef3fc & 0x80U) != 0,
               (DAT_fffef32e & 4) != 0,(DAT_fffef498 & 2) != 0,(DAT_fffef498 & 4) != 0,_DAT_ffff0d06
               ,_v_Engine_Speed_2994,(DAT_fffef910 & 4) != 0,DAT_ffff29a2,v_Vehicle_Speed_byte_65A1,
               (DAT_fffeef76 & 0x40) != 0,&DAT_ffff03cf,puStack_28 + 0x112,puStack_28 + 0x110);
  FUN_00085580((int)_v_Engine_Speed_2994,_DAT_ffff152c,(int)_DAT_ffff0aac,puStack_28 + 0xfa,
               puStack_28 + 0x160,puStack_28 + 0x138,puStack_28 + 0x136,puStack_28 + 0xfc,
               puStack_28 + 0x13a,puStack_28 + 0x156);
  FUN_000882a8((int)DAT_ffff03cf,abStack_3c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03d8 | 2;
  if ((abStack_3c[0] & 1) == 0) {
    bVar3 = DAT_ffff03d8 & 0xfd;
  }
  DAT_ffff03d8 = bVar3;
  FUN_00001550(uVar2);
  FUN_000882bc((int)DAT_ffff03cf,(int)DAT_ffff03c5,DAT_ffff03ca & 1,abStack_38);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03d8 | 4;
  if ((abStack_38[0] & 1) == 0) {
    bVar3 = DAT_ffff03d8 & 0xfb;
  }
  DAT_ffff03d8 = bVar3;
  FUN_00001550(uVar2);
  FUN_0008829c((int)DAT_ffff03cf,abStack_34);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03d8 | 1;
  if ((abStack_34[0] & 1) == 0) {
    bVar3 = DAT_ffff03d8 & 0xfe;
  }
  DAT_ffff03d8 = bVar3;
  FUN_00001550(uVar2);
  puVar1 = puStack_28;
  FUN_00085394((int)_DAT_ffff0ada,(int)_DAT_ffff0aae,puStack_28 + 0xf2);
  FUN_000857a8((int)_DAT_ffff0ada,(int)DAT_ffff0488,(int)_DAT_ffff0abc,(int)DAT_ffff03cf,
               (int)DAT_ffff0498,_DAT_ffff0bf6,(int)v_Ignition_Total_Timing_046C,0,puVar1 + 0x100);
  FUN_00086f74((int)_DAT_ffff0adc,(int)_DAT_ffff0aae,(int)_DAT_ffff0ad0,(int)DAT_ffff03ce,
               puVar1 + 0x158);
  FUN_000882fc((DAT_ffff03d8 & 2) != 0,(int)DAT_ffff03c6,DAT_ffff03ca & 1,abStack_30);
  FUN_00001550(0xf0);
  bVar3 = DAT_fffee6bd | 0x20;
  if ((abStack_30[0] & 1) == 0) {
    bVar3 = DAT_fffee6bd & 0xdf;
  }
  DAT_fffee6bd = bVar3;
  FUN_00001550();
  FUN_00088318((DAT_ffff03d8 & 2) != 0,(int)DAT_ffff03c6,abStack_2c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_fffee6bd | 0x10;
  if ((abStack_2c[0] & 1) == 0) {
    bVar3 = DAT_fffee6bd & 0xef;
  }
  DAT_fffee6bd = bVar3;
  FUN_00001550(uVar2);
  puVar1 = puStack_28;
  FUN_00086d3c((int)_DAT_ffff0b10,(int)_DAT_ffff0b0c,puStack_28 + 0x146);
  FUN_00087f78((int)_DAT_ffff0b0c,(int)_v_Engine_Speed_2994,(int)DAT_ffff66b0,(int)_DAT_ffff0a6e,
               puVar1 + 0x162);
  FUN_00086a00((int)_DAT_ffff0b10);
  FUN_00086bb4(0,0,0,(int)_DAT_fffeecb4,DAT_ffff66b0,_DAT_ffff09d4,_DAT_ffff0b16,puVar1 + 0x140);
  puStack_28 = puVar1 + 0x166;
  FUN_00088054((int)_v_Throttle_Opening_Angle_target_commanded_0AF4,(int)_v_Engine_Speed_2994,
               (DAT_ffff0675 & 4) != 0,DAT_ffff03d9 & 1,v_Vehicle_Speed_byte_65A1,_DAT_fffeef10,
               (DAT_ffff03d9 & 2) != 0,(DAT_fffeef76 & 0x40) != 0,_DAT_fffeeede,
               (DAT_fffef498 & 4) != 0,(DAT_fffef32e & 4) != 0,(DAT_fffef32e & 0x10) != 0,
               (DAT_fffef498 & 8) != 0,_DAT_ffff0b18,puStack_28,puVar1 + 0x14c);
  return;
}

