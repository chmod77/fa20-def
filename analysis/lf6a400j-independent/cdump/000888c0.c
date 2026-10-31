
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000888c0(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte local_70 [4];
  byte abStack_6c [4];
  byte abStack_68 [4];
  byte abStack_64 [4];
  byte abStack_60 [4];
  byte local_5c [4];
  byte abStack_58 [4];
  byte abStack_54 [4];
  byte abStack_50 [4];
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte bStack_44;
  byte bStack_40;
  byte local_3c [4];
  byte abStack_38 [4];
  byte bStack_34;
  byte abStack_30 [4];
  byte bStack_2c;
  undefined2 uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff03a0;
  FUN_000884c8(DAT_fffef63a & 1,(DAT_fffeef76 & 0x40) != 0,&DAT_ffff03dd);
  FUN_0008bd80((int)DAT_fffef516,((int)DAT_ffff66b2 & 0x80U) != 0,&DAT_ffff03ed);
  FUN_0008bf1c((int)_DAT_ffff0f56,(int)_DAT_fffeeede,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)DAT_ffff03a0,DAT_ffff03d8 & 1,DAT_ffff03c6,(DAT_ffff054a & 0x20) != 0,
               (DAT_ffff076d & 8) != 0,_DAT_fffeef3c,_DAT_fffeef3a,_DAT_ffff2f98,_DAT_ffff2f94,
               _DAT_ffff2f96,_DAT_ffff2f92,&DAT_ffff0b38,&DAT_ffff0b3a,&DAT_ffff042a,&DAT_ffff0b3c,
               &DAT_ffff0b1e,&DAT_ffff03f7,abStack_64,abStack_68,abStack_6c,local_70);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e9 | 4;
  if ((abStack_64[0] & 1) == 0) {
    bVar2 = DAT_ffff03e9 & 0xfb;
  }
  bVar3 = bVar2 | 8;
  if ((abStack_68[0] & 1) == 0) {
    bVar3 = bVar2 & 0xf7;
  }
  bVar2 = bVar3 | 1;
  if ((abStack_6c[0] & 1) == 0) {
    bVar2 = bVar3 & 0xfe;
  }
  DAT_ffff03e9 = bVar2 | 2;
  if ((local_70[0] & 1) == 0) {
    DAT_ffff03e9 = bVar2 & 0xfd;
  }
  FUN_00001550(uVar1);
  FUN_0008ddc8(_DAT_ffff1534,_DAT_ffff1538,_DAT_ffff153c,_DAT_ffff1540,(int)_DAT_ffff0bc8,
               DAT_fffeed24,DAT_fffeed25,DAT_fffeed26,DAT_fffeed27,&DAT_ffff0b46);
  FUN_0008edb4((int)_v_Accelerator_Pedal_Angle_EEF8,(int)_v_Engine_Speed_2994,&DAT_ffff03fc);
  FUN_0008f6ec((int)DAT_ffff66b0,(int)v_Vehicle_Speed_byte_65A1,(int)v_Coolant_Temperature_29A5,
               (DAT_fffee710 & 0x20) != 0,((int)(char)DAT_fffee710 & 0x80U) != 0,DAT_ffff03a3 & 1,
               &DAT_ffff0b72,&DAT_ffff03f6,&DAT_ffff0b34);
  FUN_0008fb74(DAT_fffef32c & 1,(int)_v_Atmospheric_Pressure_E6AA,(int)_v_Engine_Speed_2994,
               &DAT_ffff0403);
  FUN_0008fd8c((int)DAT_ffff3691,(int)v_Coolant_Temperature_29A5,(int)v_CPC_Valve_Duty_Ratio_043B);
  FUN_00090758((int)DAT_ffff66b0,(int)_DAT_fffeeede,(int)DAT_ffff2996,0,&DAT_ffff0b88,&DAT_ffff0b58)
  ;
  FUN_000907cc();
  FUN_000909bc((int)DAT_ffff66b0);
  FUN_00090af0((int)DAT_ffff66b0,(int)DAT_ffff0489,(int)DAT_ffff2996,0,(DAT_fffef32a & 4) != 0,
               (DAT_fffef32d & 0x20) != 0,DAT_fffeef33,DAT_fffee6a5,_v_Engine_Speed_2994,
               &DAT_ffff0b90,&DAT_ffff0b5a);
  FUN_00090c48((int)DAT_ffff66b0,(int)DAT_ffff048a,(int)DAT_ffff2996,(int)_v_Engine_Speed_2994,
               &DAT_ffff0b92,&DAT_ffff0b5c);
  FUN_00090ce8((int)DAT_ffff66b0,(int)DAT_ffff048a,(int)_v_Engine_Speed_2994,&DAT_ffff0b94,
               &DAT_ffff0b5e);
  FUN_00090f24(DAT_fffeeec1 & 1,(DAT_ffff3653 & 4) != 0,(DAT_ffff3653 & 8) != 0,&DAT_ffff0423);
  FUN_00090f68((int)DAT_ffff66b0,&DAT_ffff0b96);
  abStack_60[0] = 1 - ((DAT_ffff3653 & 2) == 0);
  FUN_00093028((DAT_ffff03e5 & 0x40) != 0,(int)_DAT_ffff3872,(int)(char)abStack_60[0],abStack_60);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff3653 | 2;
  if ((abStack_60[0] & 1) == 0) {
    bVar2 = DAT_ffff3653 & 0xfd;
  }
  DAT_ffff3653 = bVar2;
  FUN_00001550();
  local_5c[0] = 1 - ((DAT_ffff3653 & 0x10) == 0);
  FUN_0009337c((DAT_ffff03e5 & 0x40) != 0,(int)_DAT_ffff0b48,_DAT_ffff1564,(int)_DAT_ffff0b4c,
               _DAT_ffff156c,_DAT_ffff0b50,_DAT_ffff1574,_DAT_ffff0b54,_DAT_ffff157c,
               _v_Engine_Speed_2994,local_5c[0],local_5c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff3653 | 0x10;
  if ((local_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff3653 & 0xef;
  }
  DAT_ffff3653 = bVar2;
  FUN_00001550(uVar1);
  FUN_00093534(DAT_fffef0d7 & 1,(DAT_ffff03e8 & 0x20) != 0,DAT_fffef0d6 & 1,
               (DAT_ffff03e8 & 0x10) != 0,DAT_ffff2fe7,DAT_ffff2fe5,DAT_ffff2fe6,abStack_58);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e4 | 8;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff03e4 & 0xf7;
  }
  DAT_ffff03e4 = bVar2;
  FUN_00001550(uVar1);
  FUN_00093864(_DAT_ffff1564,_DAT_ffff1568,(int)_DAT_ffff0bb6,(int)DAT_ffff041f,abStack_54);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e3 | 0x80;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff03e3 & 0x7f;
  }
  DAT_ffff03e3 = bVar2;
  FUN_00001550(uVar1);
  FUN_00093880(_DAT_ffff156c,_DAT_ffff1570,(int)_DAT_ffff0bb6,(int)DAT_ffff0420,abStack_50);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e3 | 0x40;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff03e3 & 0xbf;
  }
  DAT_ffff03e3 = bVar2;
  FUN_00001550(uVar1);
  FUN_0009389c(_DAT_ffff1574,_DAT_ffff1578,(int)_DAT_ffff0bb6,(int)DAT_ffff0421,abStack_4c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e3 | 0x20;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff03e3 & 0xdf;
  }
  DAT_ffff03e3 = bVar2;
  FUN_00001550(uVar1);
  FUN_000938b8(_DAT_ffff157c,_DAT_ffff1580,(int)_DAT_ffff0bb6,(int)DAT_ffff0422,abStack_48);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e3 | 0x10;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff03e3 & 0xef;
  }
  DAT_ffff03e3 = bVar2;
  FUN_00001550(uVar1);
  FUN_0008f8c0((int)_v_Engine_Speed_2994,(int)DAT_ffff03a0,0,(int)DAT_ffff3669,(int)DAT_ffff049b,
               &DAT_ffff0400);
  FUN_000935ac(((int)(char)DAT_fffee710 & 0x80U) != 0,(int)_DAT_ffff29b4,
               (int)_v_Atmospheric_Pressure_E6AA);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e0 | 2;
  if ((bStack_44 & 1) == 0) {
    bVar2 = DAT_ffff03e0 & 0xfd;
  }
  DAT_ffff03e0 = bVar2;
  FUN_00001550();
  FUN_00088540((DAT_ffff03e5 & 0x40) != 0,(int)_DAT_ffff3872,(int)_v_Engine_Speed_OBD_copy_2ADA,
               ((int)DAT_ffff2985 & 0x80U) != 0,(DAT_ffff3653 & 2) != 0,_DAT_ffff3870,&DAT_ffff3870)
  ;
  FUN_0008ccf8(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               DAT_fffef63b & 1,(int)DAT_ffff0461,_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_fffef630,
               _DAT_ffff3892,_DAT_ffff388a,_DAT_ffff3882,_DAT_ffff387a,DAT_ffff03dd,&DAT_ffff3892,
               &DAT_ffff388a,&DAT_ffff3882,&DAT_ffff387a);
  FUN_0008d124(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               DAT_fffef63b & 1,(int)DAT_ffff0462,_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_fffef632,
               _DAT_ffff3894,_DAT_ffff388c,_DAT_ffff3884,_DAT_ffff387c,DAT_ffff03dd,&DAT_ffff3894,
               &DAT_ffff388c,&DAT_ffff3884,&DAT_ffff387c);
  FUN_0008d550(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               DAT_fffef63b & 1,(int)DAT_ffff0463,_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_fffef634,
               _DAT_ffff3896,_DAT_ffff388e,_DAT_ffff3886,_DAT_ffff387e,DAT_ffff03dd,&DAT_ffff3896,
               &DAT_ffff388e,&DAT_ffff3886,&DAT_ffff387e);
  FUN_0008d97c(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               DAT_fffef63b & 1,(int)DAT_ffff0464,_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_fffef636,
               _DAT_ffff3898,_DAT_ffff3890,_DAT_ffff3888,_DAT_ffff3880,DAT_ffff03dd,&DAT_ffff3898,
               &DAT_ffff3890,&DAT_ffff3888,&DAT_ffff3880);
  FUN_0008ffac((int)DAT_ffff66b0,(int)v_Coolant_Temperature_29A5,(int)_DAT_ffff0b60,
               (DAT_ffff050f & 2) != 0,_DAT_ffff0b98,(DAT_fffee710 & 0x20) != 0,_DAT_ffff0b96,
               &DAT_ffff040d);
  FUN_0009128c();
  FUN_000938d4(((int)(char)DAT_ffff03e3 & 0x80U) != 0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e2 | 0x80;
  if ((bStack_40 & 1) == 0) {
    bVar2 = DAT_ffff03e2 & 0x7f;
  }
  DAT_ffff03e2 = bVar2;
  FUN_00001550(uVar1);
  FUN_0008c790(DAT_ffff03e0 & 1,(int)v_Coolant_Temperature_29A5,(int)DAT_ffff0585,
               ((int)(char)DAT_fffeef76 & 0x80U) != 0,DAT_ffff0557,_v_Engine_Speed_2994,
               v_Vehicle_Speed_byte_65A1,DAT_ffff03a0,DAT_fffee6a5,DAT_ffff03ad,_DAT_ffff0b2c,
               _DAT_ffff0b2a,DAT_ffff0593,DAT_ffff0560,(DAT_ffff03e0 & 2) != 0,
               ((int)(char)DAT_fffee710 & 0x80U) != 0,&DAT_ffff0b40,&DAT_ffff0b74,&DAT_ffff0b76);
  FUN_0008fc1c(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               (int)_DAT_ffff3892,_DAT_ffff388a,_DAT_ffff3882,_DAT_ffff387a,&DAT_ffff0b78);
  FUN_0008fc78(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               (int)_DAT_ffff3894,_DAT_ffff388c,_DAT_ffff3884,_DAT_ffff387c,&DAT_ffff0b7a);
  FUN_0008fcd4(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               (int)_DAT_ffff3896,_DAT_ffff388e,_DAT_ffff3886,_DAT_ffff387e,&DAT_ffff0b7c);
  FUN_0008fd30(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               (int)_DAT_ffff3898,_DAT_ffff3890,_DAT_ffff3888,_DAT_ffff3880,&DAT_ffff0b7e);
  FUN_0009106c(_DAT_ffff1530,(int)DAT_ffff0507,(int)_DAT_ffff0b80,(int)_DAT_ffff0b62,&DAT_ffff0ba2);
  FUN_000910d8(_DAT_ffff1530,(int)DAT_ffff0507,(int)_DAT_ffff0b80,(int)_DAT_ffff0b62,
               (int)_DAT_ffff0b72,DAT_ffff0407,(int)_DAT_ffff0b38,DAT_ffff03ec,&DAT_ffff0ba4);
  local_3c[0] = 1 - ((DAT_ffff3653 & 0x20) == 0);
  FUN_0009340c((DAT_ffff03e5 & 0x40) != 0,(DAT_fffeef76 & 8) != 0,(int)_DAT_ffff3870,
               (int)_DAT_fffeeede,_v_Engine_Speed_OBD_copy_2ADA,_v_Engine_Speed_2994,local_3c[0],
               local_3c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff3653 | 0x20;
  if ((local_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff3653 & 0xdf;
  }
  DAT_ffff3653 = bVar2;
  FUN_00001550(uVar1);
  FUN_0008bb84((int)_DAT_ffff0f56,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff03a0,
               DAT_ffff03d8 & 1,_DAT_ffff0b40,&DAT_ffff0b30,&DAT_ffff0b32);
  FUN_000911dc((int)_DAT_ffff0ba2,(int)_DAT_ffff0e6a,&DAT_ffff0ba6);
  FUN_0009124c((int)_DAT_ffff0ba4,(int)_DAT_ffff0e6e,&DAT_ffff0baa);
  FUN_0009126c();
  abStack_38[0] = 1 - (((int)(char)DAT_ffff3653 & 0x80U) == 0);
  FUN_000934cc((DAT_ffff3653 & 0x10) != 0,(DAT_ffff3653 & 0x20) != 0,(DAT_fffeef76 & 8) != 0,
               (DAT_ffff03e5 & 0x40) != 0,_v_Engine_Speed_2994,abStack_38[0],abStack_38);
  uStack_28 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff3653 | 0x80;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff3653 & 0x7f;
  }
  DAT_ffff3653 = bVar2;
  FUN_00001550();
  FUN_0008f9c0((int)_DAT_ffff0b30,(int)_DAT_ffff0b40,(int)_v_Engine_Speed_2994,(int)_DAT_fffeecb4,
               _DAT_fffeeede,_DAT_ffff29b4,0,0,DAT_ffff0400,&DAT_ffff0401,&DAT_ffff0417,
               &DAT_ffff03f4,&DAT_ffff03f0,&DAT_ffff03f3,&DAT_ffff0b2e,&DAT_ffff03f1,&DAT_ffff03f2);
  FUN_00093200((int)_DAT_ffff0b40);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e0 | 1;
  if ((bStack_34 & 1) == 0) {
    bVar2 = DAT_ffff03e0 & 0xfe;
  }
  DAT_ffff03e0 = bVar2;
  FUN_00001550(uVar1);
  FUN_0008b5b4((int)DAT_ffff03fc,(int)DAT_ffff66b0,(int)DAT_ffff0403,(int)v_Coolant_Temperature_29A5
               ,_v_Engine_Speed_2994,(DAT_ffff054a & 4) != 0,((int)(char)DAT_ffff3653 & 0x80U) != 0,
               DAT_ffff29a7,_DAT_ffff0e90,_DAT_fffeeede,DAT_ffff0423,&DAT_ffff0b24,&DAT_ffff040a,
               &DAT_ffff0b28,&DAT_ffff040c);
  FUN_0008b178((int)DAT_ffff03fc,(int)DAT_ffff66b0,(int)DAT_ffff0403,(int)v_Coolant_Temperature_29A5
               ,_v_Engine_Speed_2994,(DAT_ffff054a & 4) != 0,((int)(char)DAT_ffff3653 & 0x80U) != 0,
               DAT_ffff29a7,_DAT_ffff0e90,_DAT_fffeeede,DAT_ffff0423,(DAT_ffff0534 & 0x40) != 0,
               &DAT_ffff0b22,&DAT_ffff0409,&DAT_ffff0b26,&DAT_ffff040b,&DAT_ffff03ea);
  FUN_0008cb08(DAT_fffeeec6 & 1,(int)_DAT_fffeecae,(int)_DAT_fffeef94,(int)DAT_ffff0401,
               _DAT_fffeeede,_DAT_ffff0b42,_DAT_fffef0da,DAT_ffff04ff,(DAT_fffee710 & 0x20) != 0,
               &DAT_ffff03f5);
  FUN_000938f8((int)DAT_ffff0401,abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e0 | 4;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff03e0 & 0xfb;
  }
  DAT_ffff03e0 = bVar2;
  FUN_00001550(uVar1);
  FUN_00093950((int)DAT_ffff0401);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03df | 1;
  if ((bStack_2c & 1) == 0) {
    bVar2 = DAT_ffff03df & 0xfe;
  }
  DAT_ffff03df = bVar2;
  FUN_00001550(uVar1);
  FUN_00088588((int)DAT_ffff0507,(int)_DAT_ffff0b72,(int)DAT_ffff0407,(int)_DAT_ffff0b84,
               _DAT_ffff0b60,DAT_ffff0401,DAT_ffff0404,DAT_ffff66b0,DAT_ffff03df & 1,DAT_ffff3691,
               DAT_ffff03c6,DAT_ffff03da,DAT_ffff03cf,_v_Engine_Speed_2994,DAT_ffff03a0,0,
               _DAT_ffff0b42,(int)_DAT_ffff0b36,DAT_ffff03f5,DAT_ffff03e7 & 1,
               (DAT_fffef498 & 4) != 0,DAT_ffff03ec,(DAT_ffff03e7 & 2) != 0,(int)_DAT_ffff0b38,
               DAT_ffff03eb,&DAT_ffff0b1c,&DAT_ffff03de,&DAT_ffff03fd,&DAT_ffff03fe,&DAT_ffff0406,
               &DAT_ffff03ee,&DAT_ffff0402);
  FUN_00090094((int)_DAT_ffff0b1c,(int)DAT_ffff0507,&DAT_ffff040e);
  FUN_00091180(_DAT_ffff1530,(int)DAT_ffff040d,(int)_DAT_ffff0b1c,&DAT_ffff0ba0);
  FUN_000911fc((int)_DAT_ffff0ba0,(int)_DAT_ffff0e6c,(int)DAT_ffff0508,&DAT_ffff0ba8);
  return;
}

