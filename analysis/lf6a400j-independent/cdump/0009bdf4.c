
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009bdf4(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_38;
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0456;
  FUN_00096f28((int)DAT_ffff0456);
  FUN_00099c1c(DAT_fffeeec6 & 1,(int)_DAT_fffeeede,(DAT_ffff091c & 8) != 0,
               (DAT_fffef152 & 0x20) != 0,((int)(char)DAT_fffeef76 & 0x80U) != 0,DAT_ffff0557,
               &DAT_ffff0bf4,&DAT_ffff0c14);
  FUN_0009ac80((int)DAT_ffff0499,&DAT_ffff0483);
  FUN_0009ae78((int)_v_Engine_Speed_2994,(int)DAT_ffffab41,&DAT_ffff0485);
  FUN_0009d664((int)_v_Engine_Speed_2994,(int)_DAT_ffff09b4,&DAT_ffff0497);
  FUN_0009d68c((int)DAT_fffee6af,(DAT_fffee710 & 0x20) != 0,(int)_v_Atmospheric_Pressure_E6AA,
               (int)v_Vehicle_Speed_byte_65A1,DAT_ffff299c,DAT_ffff04c1,_DAT_fffeeede,_DAT_ffff166c,
               _DAT_fffeeee0,DAT_ffff0530,_DAT_ffff0d06,&DAT_ffff0c06);
  FUN_0009d7e4(0,(int)v_Coolant_Temperature_29A5,(int)v_Vehicle_Speed_byte_65A1,
               (DAT_fffee710 & 0x20) != 0,((int)(char)DAT_fffee710 & 0x80U) != 0,DAT_ffff03a3 & 1,
               &DAT_ffff049a);
  FUN_0009e41c(DAT_ffff06da & 1);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06da | 0x10;
  if ((local_38 & 1) == 0) {
    bVar2 = DAT_ffff06da & 0xef;
  }
  DAT_ffff06da = bVar2;
  FUN_00001550(uVar1);
  FUN_000972fc(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               DAT_fffef63b & 1,(int)_DAT_fffef630,_v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff0b78,
               (int)DAT_ffff3662,(int)DAT_ffff365e,(int)DAT_ffff365a,(int)DAT_ffff3656,&DAT_ffff3662
               ,&DAT_ffff365e,&DAT_ffff365a,&DAT_ffff3656);
  FUN_000978c8(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               DAT_fffef63b & 1,(int)_DAT_fffef632,_v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff0b7a,
               (int)DAT_ffff3663,(int)DAT_ffff365f,(int)DAT_ffff365b,(int)DAT_ffff3657,&DAT_ffff3663
               ,&DAT_ffff365f,&DAT_ffff365b,&DAT_ffff3657);
  FUN_00097e94(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               DAT_fffef63b & 1,(int)_DAT_fffef634,_v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff0b7c,
               (int)DAT_ffff3664,(int)DAT_ffff3660,(int)DAT_ffff365c,(int)DAT_ffff3658,&DAT_ffff3664
               ,&DAT_ffff3660,&DAT_ffff365c,&DAT_ffff3658);
  FUN_00098460(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               DAT_fffef63b & 1,(int)_DAT_fffef636,_v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff0b7e,
               (int)DAT_ffff3665,(int)DAT_ffff3661,(int)DAT_ffff365d,(int)DAT_ffff3659,&DAT_ffff3665
               ,&DAT_ffff3661,&DAT_ffff365d,&DAT_ffff3659);
  FUN_0009acd4((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_fffeeed4,&DAT_ffff0bfe);
  FUN_0009e150((int)_DAT_fffeeed4);
  FUN_0009e194((int)_DAT_fffef146,((int)(char)DAT_fffef152 & 0x80U) != 0,
               ((int)(char)DAT_fffeef76 & 0x80U) != 0,(DAT_fffeef76 & 0x40) != 0,
               _v_Engine_Speed_OBD_copy_2ADA,_DAT_fffef0da,_DAT_fffeeede,_DAT_ffff09de,abStack_34,
               &DAT_ffff0bfa);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff04b4 | 8;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff04b4 & 0xf7;
  }
  DAT_ffff04b4 = bVar2;
  FUN_00001550(uVar1);
  FUN_000972c0((int)DAT_ffff04c1,(int)DAT_ffff299c,&DAT_ffff045c);
  FUN_0009b058(((int)DAT_ffff04f4 & 0x80U) != 0,(int)_v_Engine_Speed_2994,(int)_DAT_ffff09b4,
               (int)_DAT_ffff0d5e,_DAT_fffeeede,_DAT_ffff0e90,&DAT_ffff0487);
  FUN_0009ae9c(((int)DAT_ffff04f4 & 0x80U) != 0,(int)_v_Engine_Speed_2994,(int)_DAT_ffff09b4,
               (int)_DAT_ffff0d5e,_DAT_ffff0e90,&DAT_ffff0486);
  FUN_0009d9f0((int)DAT_fffee6af,(int)_v_Engine_Speed_2994,(int)DAT_ffff299c,(int)_DAT_ffff09b4,
               _DAT_fffeeee2,&DAT_ffff049b);
  FUN_0009dfd0((int)_v_Engine_Speed_2994,(int)_DAT_ffff09b4,&DAT_ffff049f);
  FUN_0009e3a0((int)DAT_fffee6af,(DAT_fffee710 & 0x20) != 0,(int)v_Vehicle_Speed_byte_65A1,
               ((int)(char)DAT_fffee710 & 0x80U) != 0,DAT_ffff03a3 & 1,abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0491 | 1;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff0491 & 0xfe;
  }
  DAT_ffff0491 = bVar2;
  FUN_00001550(uVar1);
  FUN_00096f18((int)DAT_ffff3655,(DAT_fffee710 & 0x20) != 0,&DAT_ffff0455);
  FUN_0009ad2c((int)DAT_ffff0485,(int)DAT_fffee6af,(int)_v_Engine_Speed_2994,(int)DAT_ffff0541,
               &DAT_ffff0484);
  FUN_0009b694((int)DAT_fffee6af,(int)_DAT_ffff0c06,(DAT_fffee710 & 0x20) != 0,(int)DAT_fffeecfe,
               DAT_ffff299c,v_Vehicle_Speed_byte_65A1,DAT_ffff03a3 & 1,_DAT_ffff0d06,_DAT_ffff0c02,
               &DAT_ffff0c02);
  FUN_0009ba58((int)DAT_fffee6af,(int)v_Vehicle_Speed_byte_65A1,(DAT_fffee710 & 0x20) != 0,
               (int)DAT_ffff299c,v_Coolant_Temperature_29A5,DAT_ffff03a4,DAT_fffeed65,DAT_ffff0483,
               &DAT_ffff048f,&DAT_ffff0490,&DAT_ffff048e);
  FUN_00098a2c(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               (int)DAT_ffff3662,(int)DAT_ffff365e,(int)DAT_ffff365a,(int)DAT_ffff3656,&DAT_ffff0461
              );
  FUN_00098a80(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               (int)DAT_ffff3663,(int)DAT_ffff365f,(int)DAT_ffff365b,(int)DAT_ffff3657,&DAT_ffff0462
              );
  FUN_00098ad4(DAT_fffef63a & 1,(DAT_ffff064a & 0x40) != 0,(DAT_fffeef76 & 0x40) != 0,
               (int)DAT_ffff3664,(int)DAT_ffff3660,(int)DAT_ffff365c,(int)DAT_ffff3658,&DAT_ffff0463
              );
  FUN_00098b28();
  FUN_0009a6cc((DAT_ffff04b4 & 8) != 0,(int)_DAT_ffff0bfe,((int)(char)DAT_fffeef76 & 0x80U) != 0,
               (int)DAT_ffff0481,(DAT_ffff04b4 & 4) != 0,_DAT_ffff0c16,&DAT_ffff0bfc);
  FUN_00097178((int)_v_Engine_Speed_2994,(int)v_Vehicle_Speed_byte_65A1,(int)DAT_ffff0541,
               DAT_ffff0491 & 1,&DAT_ffff045b);
  FUN_0009dac8((int)DAT_fffee6af,(int)DAT_ffff299c,(int)DAT_ffff03a0,(int)_DAT_fffeeede,DAT_ffff0487
               ,&DAT_ffff049c);
  FUN_0009dbf8((int)DAT_fffee6af,DAT_ffff0491 & 1,(int)_DAT_fffeeede,(int)DAT_ffff29a2,DAT_ffff03a0,
               &DAT_ffff049d,&DAT_ffff045d,&DAT_ffff045e,&DAT_ffff045f);
  FUN_0009dff4((int)DAT_fffee6af,(DAT_ffff054a & 0x10) != 0,DAT_ffff0491 & 1,
               (int)_v_Engine_Speed_2994,_DAT_ffff09b4,&DAT_ffff04a1,abStack_2c,&DAT_ffff04a0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0491 | 2;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0491 & 0xfd;
  }
  DAT_ffff0491 = bVar2;
  FUN_00001550(uVar1);
  FUN_0009e468((int)_DAT_ffff0bfc,((int)(char)DAT_fffeef76 & 0x80U) != 0,
               (int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_fffef51a,abStack_28);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff04b4 | 4;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff04b4 & 0xfb;
  }
  DAT_ffff04b4 = bVar2;
  FUN_00001550();
  FUN_0009a7e4((DAT_ffff04b4 & 4) != 0,(int)_DAT_fffef19e,(int)_DAT_fffef1a0,(int)_DAT_fffef1a2,
               _DAT_fffef1a4,_DAT_fffef1a6,_DAT_fffef1a8,_DAT_fffef1aa,_DAT_fffef1ac,_DAT_fffef1ae,
               _DAT_fffef1b0,_DAT_fffef1b2,_DAT_fffef1b4,_DAT_fffef1b6,_v_Engine_Speed_OBD_copy_2ADA
               ,DAT_fffef51a,&DAT_ffff0481,&DAT_ffff0c0a,&DAT_ffff0c10,&DAT_ffff0c0e);
  FUN_00098bbc(DAT_fffeeec6 & 1,(int)DAT_ffff0773,(DAT_ffff076d & 0x20) != 0,
               (DAT_ffff0769 & 0x20) != 0,DAT_ffff0778,_v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff2ad8,
               (DAT_ffff04b4 & 4) != 0,(DAT_ffff04b4 & 8) != 0,_DAT_ffff09b4,_DAT_ffff0e90,
               DAT_ffff06da & 1,&DAT_ffff0467,&DAT_ffff046b,&DAT_ffff0c08,&DAT_ffff0466,
               &DAT_ffff0469,&DAT_ffff0468);
  FUN_0009a69c((int)DAT_ffff0481,&DAT_ffff0bf8);
  FUN_0009de28();
  FUN_0009a05c((DAT_ffff04b4 & 4) != 0,(int)_DAT_ffff0bf8,(int)DAT_ffff0481,(int)DAT_ffff047f,
               DAT_fffef51a,((int)(char)DAT_fffeef76 & 0x80U) != 0,_DAT_ffff0bfe,
               _v_Engine_Speed_OBD_copy_2ADA,(DAT_fffef152 & 0x20) != 0,DAT_ffff0541,&DAT_ffff047b,
               &DAT_ffff0c00,&DAT_ffff047d,&DAT_ffff047c,&DAT_ffff047e);
  FUN_0009dd10((int)_DAT_ffff0c12,(int)DAT_ffff03a0,(int)_v_Engine_Speed_2994,DAT_ffff03e0 & 1,
               DAT_ffff0401,DAT_ffff0400,(DAT_ffff056b & 0x40) != 0,&DAT_ffff049e,&DAT_ffff0495);
  uVar1 = FUN_00096f3c(DAT_ffff0491 & 1,(int)DAT_ffff049e,(int)DAT_ffff049a,(int)DAT_ffff048d,
                       _DAT_fffeeede,(DAT_fffee710 & 0x20) != 0,_DAT_ffff29b4,DAT_ffff04a4,
                       (int)DAT_ffff04bb,_DAT_ffff0c02,_DAT_ffff0bf4,&DAT_ffff0458);
  return uVar1;
}

