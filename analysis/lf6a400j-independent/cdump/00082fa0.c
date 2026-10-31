
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00082fa0(void)

{
  undefined1 *puVar1;
  byte bVar3;
  undefined4 uVar2;
  byte bVar4;
  byte local_98;
  byte abStack_94 [4];
  byte bStack_90;
  byte bStack_8c;
  byte bStack_88;
  byte bStack_84;
  byte abStack_80 [4];
  byte bStack_7c;
  byte bStack_78;
  byte bStack_74;
  byte bStack_70;
  byte bStack_6c;
  byte bStack_68;
  byte bStack_64;
  byte bStack_60;
  byte bStack_5c;
  byte bStack_58;
  undefined1 *puStack_54;
  char cStack_50;
  char cStack_4c;
  char cStack_48;
  char cStack_44;
  byte bStack_40;
  char cStack_3c;
  char cStack_38;
  char cStack_34;
  char cStack_30;
  char cStack_2c;
  uint uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff09d4;
  FUN_0008227c((int)DAT_fffee718,(int)DAT_fffee719,(DAT_fffee71a & 4) != 0,&DAT_ffff03c1);
  puStack_54 = &DAT_ffff09d4;
  FUN_000804b4((int)_DAT_ffff0ab6,&DAT_ffff0a0a);
  FUN_00080968((int)_DAT_ffff0d06,(int)_DAT_fffef33c,(int)_DAT_ffff0abc,(int)_DAT_ffff0ada);
  FUN_00080d54((int)_DAT_ffff0adc,(int)_DAT_ffff0ada,&DAT_ffff0a1e);
  FUN_00080d84((int)_v_Engine_Speed_2994,(int)_DAT_ffff0ab6,(int)_DAT_ffff0ada,(int)_DAT_fffef540);
  FUN_000848e8((int)v_Vehicle_Speed_byte_65A1,(int)_DAT_ffff0ab6,(int)_DAT_ffff0ada,
               (int)_DAT_fffef540);
  FUN_0007faa0((int)_DAT_ffff0cd8,(int)_DAT_fffeeede,&DAT_ffff09d4);
  FUN_0007fadc((int)DAT_ffff0557,&DAT_ffff09de);
  FUN_00080fec((int)_DAT_fffeeed0,(int)_DAT_fffeeee2);
  FUN_00081448((int)_v_Engine_Speed_2994,(int)_v_Accelerator_Pedal_Angle_EEF8,
               ((int)(char)DAT_fffeef76 & 0x80U) != 0,(int)DAT_ffff0557);
  FUN_00081498((int)_v_Engine_Speed_2994,(int)_v_Accelerator_Pedal_Angle_EEF8,
               ((int)(char)DAT_fffeef76 & 0x80U) != 0,(int)DAT_ffff0557);
  FUN_0008151c((int)_v_Engine_Speed_2994,(int)_v_Accelerator_Pedal_Angle_EEF8,
               ((int)(char)DAT_fffeef76 & 0x80U) != 0,(int)DAT_ffff0557);
  FUN_000815a0((int)_v_Engine_Speed_2994,(int)_v_Accelerator_Pedal_Angle_EEF8,
               ((int)(char)DAT_fffeef76 & 0x80U) != 0);
  FUN_000822dc();
  FUN_00080594((DAT_fffeef76 & 0x40) != 0,((int)(char)DAT_fffeef76 & 0x80U) != 0,
               ((int)DAT_fffef060 & 0x80U) != 0,(DAT_ffff064a & 0x40) != 0);
  FUN_00080fd4();
  FUN_00084b1c((DAT_fffeef76 & 0x40) != 0,((int)(char)DAT_fffeef76 & 0x80U) != 0,
               (DAT_fffef32d & 4) != 0,(int)DAT_ffff059f);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff03c8 | 2;
  if ((local_98 & 1) == 0) {
    bVar3 = DAT_ffff03c8 & 0xfd;
  }
  DAT_ffff03c8 = bVar3;
  FUN_00001550();
  FUN_000850bc((DAT_fffef06c & 4) != 0,(int)_DAT_ffff0f48,(int)_DAT_ffff0f46,abStack_94);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff03c8 | 8;
  if ((abStack_94[0] & 1) == 0) {
    bVar3 = DAT_ffff03c8 & 0xf7;
  }
  DAT_ffff03c8 = bVar3;
  FUN_00001550();
  FUN_000850dc((DAT_fffef06c & 4) != 0,(int)_DAT_ffff0f48,(int)_DAT_ffff0f46);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03c8 | 0x10;
  if ((bStack_90 & 1) == 0) {
    bVar3 = DAT_ffff03c8 & 0xef;
  }
  DAT_ffff03c8 = bVar3;
  FUN_00001550(uVar2);
  cStack_50 = '\x01' - ((DAT_fffefa38 & 2) == 0);
  cStack_4c = '\x01' - ((DAT_fffefa38 & 4) == 0);
  cStack_48 = '\x01' - ((DAT_fffefa38 & 8) == 0);
  cStack_44 = '\x01' - ((DAT_fffefa38 & 0x10) == 0);
  bStack_40 = DAT_fffefe9c & 1;
  cStack_3c = '\x01' - ((DAT_fffefe9c & 2) == 0);
  cStack_38 = '\x01' - ((DAT_fffefe9c & 4) == 0);
  cStack_34 = '\x01' - ((DAT_fffefe9c & 8) == 0);
  cStack_30 = '\x01' - ((DAT_fffefe9c & 0x10) == 0);
  FUN_00085148(DAT_fffefa38 & 1,(int)cStack_50,(int)cStack_4c,(int)cStack_48);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03cb | 8;
  if ((bStack_8c & 1) == 0) {
    bVar3 = DAT_ffff03cb & 0xf7;
  }
  DAT_ffff03cb = bVar3;
  FUN_00001550(uVar2);
  puVar1 = puStack_54;
  FUN_0007fb10((int)_DAT_ffff0ab6);
  FUN_000847a8((int)_DAT_fffef0da,(int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_fffef152 & 0x20) != 0,
               (DAT_fffef3fc & 2) != 0);
  FUN_00081048((DAT_fffef32a & 4) != 0,DAT_fffef32c & 1,(int)_DAT_ffff0a3a,puVar1 + 0x68);
  FUN_00081074((DAT_fffef32a & 4) != 0,DAT_fffef32c & 1,(int)_DAT_ffff0a3a,puVar1 + 0x6a);
  FUN_000820d8((int)_DAT_ffff0a1e,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff0e56);
  FUN_00082758((int)_v_Accelerator_Pedal_Angle_EEF8,(int)_DAT_fffef0da,(int)_DAT_ffff0a52);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03cb | 1;
  if ((bStack_88 & 1) == 0) {
    bVar3 = DAT_ffff03cb & 0xfe;
  }
  DAT_ffff03cb = bVar3;
  FUN_00001550(uVar2);
  uStack_28 = (uint)((DAT_ffff04ca & 4) != 0);
  FUN_000805f8((int)DAT_ffff03bf,(int)DAT_ffff03b6,(int)_DAT_fffeeede,(int)_DAT_fffef0da,
               (DAT_fffef09e & 2) != 0,DAT_ffff0589,(DAT_ffff064a & 0x40) != 0,0,
               (DAT_ffff056a & 0x20) != 0);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff03c8 | 4;
  if ((bStack_84 & 1) == 0) {
    bVar3 = DAT_ffff03c8 & 0xfb;
  }
  DAT_ffff03c8 = bVar3;
  FUN_00001550();
  FUN_00084acc((DAT_ffff03c8 & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,abStack_80);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03c8 | 1;
  if ((abStack_80[0] & 1) == 0) {
    bVar3 = DAT_ffff03c8 & 0xfe;
  }
  DAT_ffff03c8 = bVar3;
  FUN_00001550(uVar2);
  FUN_00082154((int)DAT_ffff03ba,(int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_ffff064a & 0x40) != 0,
               (DAT_fffef152 & 0x20) != 0);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff03ca | 8;
  if ((bStack_7c & 1) == 0) {
    bVar3 = DAT_ffff03ca & 0xf7;
  }
  DAT_ffff03ca = bVar3;
  FUN_00001550();
  FUN_000849b4((DAT_fffef152 & 0x20) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff03ba);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03ca | 4;
  if ((bStack_78 & 1) == 0) {
    bVar3 = DAT_ffff03ca & 0xfb;
  }
  DAT_ffff03ca = bVar3;
  FUN_00001550(uVar2);
  FUN_0008221c((int)DAT_ffff03ba,(int)_DAT_ffff0a66,puStack_54 + 0x98);
  FUN_00084a68(DAT_ffff03ca & 1,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff0a6c);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff03ca | 2;
  if ((bStack_74 & 1) == 0) {
    bVar3 = DAT_ffff03ca & 0xfd;
  }
  DAT_ffff03ca = bVar3;
  FUN_00001550();
  FUN_00085134((DAT_ffff03ca & 2) != 0,(DAT_ffff03ca & 4) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03ca | 1;
  if ((bStack_70 & 1) == 0) {
    bVar3 = DAT_ffff03ca & 0xfe;
  }
  DAT_ffff03ca = bVar3;
  FUN_00001550(uVar2);
  FUN_0007fb7c(DAT_ffff03ca & 1,(int)DAT_ffff03b1,(DAT_fffef316 & 2) != 0,(DAT_fffef315 & 0x40) != 0
              );
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03c9 | 8;
  if ((bStack_64 & 1) == 0) {
    bVar3 = DAT_ffff03c9 & 0xf7;
  }
  bVar4 = bVar3 | 4;
  if ((bStack_68 & 1) == 0) {
    bVar4 = bVar3 & 0xfb;
  }
  DAT_ffff03c9 = bVar4 | 2;
  if ((bStack_6c & 1) == 0) {
    DAT_ffff03c9 = bVar4 & 0xfd;
  }
  FUN_00001550(uVar2);
  FUN_000822e4((int)DAT_ffff66b0,(int)v_Vehicle_Speed_byte_65A1,(int)_DAT_ffff0a08,
               (int)_DAT_ffff0ab6);
  puVar1 = puStack_54;
  FUN_000804b8();
  FUN_00082c50((int)DAT_ffff03c5,(int)DAT_ffff66b0,(int)_v_Engine_Speed_2994,
               (int)v_Vehicle_Speed_byte_65A1);
  FUN_000822a8((int)DAT_ffff03c6,&DAT_ffff03c2);
  FUN_000822bc((int)DAT_ffff03c6,&DAT_ffff03c3);
  FUN_000803a8((int)DAT_ffff03c5,(int)DAT_ffff03c6,(int)_DAT_ffff0a0c,(int)_DAT_ffff0a0a);
  FUN_00081430((int)_DAT_ffff12b0,(int)_DAT_ffff0a8c,(int)DAT_ffff03c6,puVar1 + 0x72);
  puStack_54 = puVar1 + 0xba;
  FUN_00082c34((int)_v_Accelerator_Pedal_Angle_EEF8,(int)DAT_ffff03c6,(int)_DAT_ffff1282,puStack_54)
  ;
  cStack_2c = '\x01' - (((int)(char)DAT_fffeef76 & 0x80U) == 0);
  FUN_000810a0((int)_DAT_ffff0a46,(int)DAT_ffff03ac,(int)cStack_2c,DAT_fffef32a & 1);
  FUN_00082028((int)_DAT_ffff0a40,(int)_DAT_fffeeee2,(int)DAT_ffff03c4);
  FUN_00084b4c((int)_DAT_fffef0da);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03ca | 0x10;
  if ((bStack_60 & 1) == 0) {
    bVar3 = DAT_ffff03ca & 0xef;
  }
  DAT_ffff03ca = bVar3;
  FUN_00001550(uVar2);
  FUN_000815f0((int)_DAT_ffff0a5c,(int)_DAT_ffff0a5e,(int)_DAT_fffef0da);
  FUN_0008117c((int)_DAT_ffff0a5e,(DAT_fffeef76 & 0x40) != 0,DAT_fffef364 & 1,(int)_DAT_ffff0a58);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03cb | 2;
  if ((bStack_5c & 1) == 0) {
    bVar3 = DAT_ffff03cb & 0xfd;
  }
  DAT_ffff03cb = bVar3;
  FUN_00001550(uVar2);
  FUN_0008208c((int)_DAT_ffff0a42,(int)_DAT_ffff0a58,&DAT_ffff0a5e);
  FUN_00081394((int)_DAT_ffff0a5e,(int)_DAT_ffff12b0,(int)_DAT_ffff0f24,(int)DAT_ffff05ad);
  FUN_000849a4((int)_DAT_ffff0a58,(int)_DAT_ffff0a5e);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff03cb | 4;
  if ((bStack_58 & 1) == 0) {
    bVar3 = DAT_ffff03cb & 0xfb;
  }
  DAT_ffff03cb = bVar3;
  FUN_00001550(uVar2);
  FUN_000820a0((int)_DAT_ffff0f1a,(int)_DAT_ffff0a44,(DAT_ffff056a & 0x40) != 0,&DAT_ffff0a62);
  FUN_0008267c();
  FUN_00084484((int)_v_Engine_Speed_2994,(int)_DAT_ffff0a62,(int)_DAT_ffff0e90,(int)_DAT_ffff0d5e);
  FUN_0008223c((int)_DAT_ffff09d4,(int)_DAT_ffff0a9a,&DAT_ffff0a6e,&DAT_ffff09d2);
  FUN_000826d4((int)_v_Engine_Speed_2994,(int)_DAT_ffff0a6e,(int)_DAT_ffff0adc,&DAT_ffff0a7a);
  FUN_0008034c((int)_DAT_ffff0a7a,(int)_DAT_ffff0ada,(int)_DAT_ffff0a78,(int)_DAT_ffff0a64);
  FUN_00080ef4((int)_v_Engine_Speed_2994,(int)_DAT_ffff0a04,(int)_DAT_fffef540,&DAT_ffff0a30);
  FUN_00082664((int)DAT_ffff03c6,(int)_DAT_ffff0a04,1,(int)_DAT_ffff0a30);
  FUN_00080960((int)_DAT_ffff0a76,&DAT_ffff0a0e);
  FUN_000822e0((int)_DAT_ffff0a76,&DAT_ffff0a74);
  FUN_00084480((int)_DAT_ffff0a76,&DAT_ffff0a98);
  FUN_00082278((int)_DAT_ffff0a76,&DAT_ffff0a70);
  return;
}

