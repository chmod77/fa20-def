
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000940e8(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  byte local_70 [4];
  byte bStack_6c;
  byte abStack_68 [4];
  byte bStack_64;
  byte abStack_60 [4];
  byte abStack_5c [4];
  byte abStack_58 [4];
  byte abStack_54 [4];
  byte abStack_50 [4];
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte bStack_44;
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  undefined1 *puStack_30;
  uint uStack_2c;
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff03a0;
  uStack_2c = (uint)((DAT_fffef72d & 0x20) != 0);
  puStack_30 = &DAT_ffff0bce;
  FUN_0009523c((DAT_fffef72e & 4) != 0,((int)(char)DAT_fffef73b & 0x80U) != 0,DAT_fffefd6b & 1,
               uStack_2c,(DAT_fffef72d & 0x40) != 0,(DAT_fffef82e & 4) != 0,
               ((int)DAT_fffefd66 & 0x80U) != 0,(DAT_fffef73b & 4) != 0,(DAT_fffef73b & 2) != 0,
               _DAT_ffff0f56,DAT_ffff299c,_DAT_ffff2a3c,DAT_fffee6a5,_v_Atmospheric_Pressure_E6AA,
               DAT_ffff03a0,&DAT_ffff0442,&DAT_ffff0be2,&DAT_ffff042c);
  FUN_000966c0((DAT_ffff0433 & 2) != 0,local_70);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0432 | 8;
  if ((local_70[0] & 1) == 0) {
    bVar4 = DAT_ffff0432 & 0xf7;
  }
  DAT_ffff0432 = bVar4;
  FUN_00001550(uVar3);
  FUN_00096934(DAT_ffff0433 & 1);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0431 | 2;
  if ((bStack_6c & 1) == 0) {
    bVar4 = DAT_ffff0431 & 0xfd;
  }
  DAT_ffff0431 = bVar4;
  FUN_00001550(uVar3);
  FUN_000963f0(1,((int)DAT_ffff0920 & 0x80U) != 0,(DAT_fffeeec2 & 4) != 0,DAT_ffff0439 & 1,
               (DAT_fffef32a & 8) != 0,DAT_fffef32c & 1,DAT_fffeeec6 & 1,(DAT_fffef055 & 0x20) != 0,
               abStack_68,&DAT_ffff0bee);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0438 | 1;
  if ((abStack_68[0] & 1) == 0) {
    bVar4 = DAT_ffff0438 & 0xfe;
  }
  DAT_ffff0438 = bVar4;
  FUN_00001550(uVar3);
  FUN_000953e0((DAT_fffef72e & 4) != 0,((int)(char)DAT_fffef73b & 0x80U) != 0,DAT_fffefd6b & 1,
               (int)DAT_ffffab41,_DAT_ffff2a3c,1,((int)DAT_fffefd66 & 0x80U) != 0,
               (DAT_fffef73b & 4) != 0,(DAT_fffef73b & 2) != 0,&DAT_ffff0446);
  FUN_00095874((DAT_fffee710 & 0x20) != 0,&DAT_ffff044e);
  FUN_0009588c((DAT_fffee710 & 0x20) != 0,&DAT_ffff044f);
  FUN_000964bc((int)DAT_ffff0401,(int)DAT_ffff29a7,(int)v_Coolant_Temperature_29A5);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff0436 | 0x80;
  if ((bStack_64 & 1) == 0) {
    bVar4 = DAT_ffff0436 & 0x7f;
  }
  DAT_ffff0436 = bVar4;
  FUN_00001550();
  FUN_00096210((int)DAT_ffff66b0,((int)DAT_ffff0515 & 0x80U) != 0,(int)v_Coolant_Temperature_29A5,
               (DAT_ffff0006 & 2) != 0,DAT_ffff29a7,DAT_ffff3693 & 1,(DAT_fffee772 & 0x10) != 0,0,
               (DAT_ffff0964 & 2) != 0,(DAT_fffef3b8 & 8) != 0,abStack_60,&DAT_ffff0bf0);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0434 | 8;
  if ((abStack_60[0] & 1) == 0) {
    bVar4 = DAT_ffff0434 & 0xf7;
  }
  puStack_28 = &DAT_ffff03a0;
  DAT_ffff0434 = bVar4;
  FUN_00001550(uVar3);
  FUN_00095c28(1,(DAT_fffeeec2 & 4) != 0,DAT_ffff043a & 1,DAT_ffff0439 & 1,
               ((int)DAT_ffff0920 & 0x80U) != 0,DAT_ffff0438 & 1,(int)_DAT_fffeeed2,
               (DAT_fffef32a & 8) != 0,DAT_fffef32c & 1,DAT_fffeeec6 & 1,(DAT_fffef055 & 0x20) != 0,
               abStack_5c,puStack_30 + 0x1e);
  uVar3 = FUN_00001550(0xf0);
  puVar2 = puStack_28;
  bVar4 = DAT_ffff0438 | 0x80;
  if ((abStack_5c[0] & 1) == 0) {
    bVar4 = DAT_ffff0438 & 0x7f;
  }
  DAT_ffff0438 = bVar4;
  FUN_00001550(uVar3);
  FUN_00095da0((DAT_ffff0434 & 8) != 0,(int)_DAT_fffef0da,(DAT_ffff0435 & 8) != 0,(int)_DAT_ffff389a
               ,DAT_ffff043e,DAT_fffef32a & 1,DAT_ffff299c,DAT_ffff04ff,(int)_DAT_fffeeed2,
               (DAT_ffff0431 & 2) != 0,abStack_58,puStack_30 + 6,puStack_30 + 8);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff0435 | 0x20;
  if ((abStack_58[0] & 1) == 0) {
    bVar4 = DAT_ffff0435 & 0xdf;
  }
  DAT_ffff0435 = bVar4;
  FUN_00001550();
  FUN_0009695c((DAT_ffff0434 & 8) != 0,(DAT_ffff0435 & 0x20) != 0,(DAT_fffef32a & 0x10) != 0,
               (int)DAT_ffff0401,(DAT_ffffab40 & 0x20) != 0,(DAT_ffff050e & 0x20) != 0,
               (DAT_ffff050f & 2) != 0,(DAT_fffee710 & 0x20) != 0,0,DAT_fffef3fc & 1,
               (DAT_fffef3fc & 8) != 0,DAT_ffff0541,_DAT_ffff2a3c,_DAT_ffff0fac,abStack_54,
               puVar2 + 0x8f);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff0434 | 0x20;
  if ((abStack_54[0] & 1) == 0) {
    bVar4 = DAT_ffff0434 & 0xdf;
  }
  DAT_ffff0434 = bVar4;
  FUN_00001550();
  FUN_00096bb4((DAT_ffff0434 & 0x20) != 0,(DAT_ffff0433 & 2) != 0,(int)DAT_ffff0440,
               (int)DAT_ffff040e,0xffff1654,v_CPC_Valve_Duty_Ratio_043B,abStack_50);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff0432 | 4;
  if ((abStack_50[0] & 1) == 0) {
    bVar4 = DAT_ffff0432 & 0xfb;
  }
  DAT_ffff0432 = bVar4;
  FUN_00001550();
  FUN_00095474((DAT_ffff0432 & 4) != 0,(int)_DAT_ffff0bce,(int)DAT_ffff0440,(int)DAT_ffff042e,0,
               _DAT_ffff0bea,puStack_30 + 0x12,puVar2 + 0x8d,puVar2 + 0xaa,puVar2 + 0xab,
               &DAT_ffff0bcc,puVar2 + 0xac);
  FUN_00096cc8((DAT_ffff0432 & 4) != 0,(int)_DAT_ffff0be0,(int)DAT_ffff03a0,(int)DAT_ffff0451,
               ((int)DAT_fffef51c & 0x80U) != 0,abStack_4c,puVar2 + 0xb0);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff0432 | 0x10;
  if ((abStack_4c[0] & 1) == 0) {
    bVar4 = DAT_ffff0432 & 0xef;
  }
  DAT_ffff0432 = bVar4;
  FUN_00001550();
  FUN_00095a1c((int)DAT_ffff66b0,(int)DAT_ffff29a7,DAT_ffff070c & 1,(DAT_ffff0432 & 0x10) != 0,
               DAT_ffff0440,DAT_ffff0664 & 1,((int)(char)DAT_ffff0436 & 0x80U) != 0,DAT_fffef9b4 & 1
               ,(DAT_fffef9b4 & 2) != 0,0,(DAT_ffff0434 & 8) != 0,puVar2 + 0xb1);
  FUN_000958a4((int)DAT_ffff0451,(int)_DAT_ffff0be0,(int)DAT_ffff044d,(int)DAT_ffff044f,DAT_ffff044e
               ,_DAT_ffff389a,DAT_fffef9b4 & 1,(DAT_fffef9b4 & 2) != 0,&DAT_ffff389a);
  FUN_00096ba8((int)DAT_ffff0451,abStack_48);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0435 | 4;
  if ((abStack_48[0] & 1) == 0) {
    bVar4 = DAT_ffff0435 & 0xfb;
  }
  DAT_ffff0435 = bVar4;
  FUN_00001550(uVar3);
  FUN_00096ca8((int)DAT_ffff0451);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff0437 | 8;
  if ((bStack_44 & 1) == 0) {
    bVar4 = DAT_ffff0437 & 0xf7;
  }
  DAT_ffff0437 = bVar4;
  FUN_00001550();
  abStack_40[0] = 1 - ((DAT_ffff3654 & 0x20) == 0);
  FUN_00096688((DAT_fffeeec2 & 4) != 0,(DAT_ffff0437 & 8) != 0,(int)(char)abStack_40[0],abStack_40);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff3654 | 0x20;
  if ((abStack_40[0] & 1) == 0) {
    bVar4 = DAT_ffff3654 & 0xdf;
  }
  DAT_ffff3654 = bVar4;
  FUN_00001550(uVar3);
  FUN_00095740((int)_DAT_ffff389a,(int)DAT_ffff0440,(int)DAT_ffff044f,(int)DAT_ffff044e,DAT_ffff042e
               ,((int)DAT_fffef51c & 0x80U) != 0,puVar2 + 0xad,puVar2 + 0xa1);
  puVar1 = puStack_30;
  FUN_00095a10((int)_DAT_ffff389a,puStack_30 + 0x16);
  FUN_00095a14((int)_DAT_ffff389a,puVar1 + 0x18);
  FUN_00095a18((int)_DAT_ffff389a,puVar1 + 0x1a);
  FUN_00096580((DAT_ffff0434 & 0x20) != 0,(int)DAT_ffff0440,(DAT_ffff0435 & 4) != 0,
               (DAT_ffff0437 & 8) != 0,DAT_ffff0664 & 1,((int)(char)DAT_ffff0436 & 0x80U) != 0,
               DAT_ffff042e,abStack_3c,puVar2 + 0xa7,puVar2 + 0xa8);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0435 | 8;
  if ((abStack_3c[0] & 1) == 0) {
    bVar4 = DAT_ffff0435 & 0xf7;
  }
  DAT_ffff0435 = bVar4;
  FUN_00001550(uVar3);
  FUN_00095b54((int)_DAT_ffff0da4,(int)_DAT_ffff0dae,0xffff2b4e,(int)v_Coolant_Temperature_29A5,
               DAT_ffff043e,_DAT_ffff0be8,_DAT_ffff0bb6,_DAT_fffeed18,abStack_38,puVar2 + 0xb2);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff0434 | 0x40;
  if ((abStack_38[0] & 1) == 0) {
    bVar4 = DAT_ffff0434 & 0xbf;
  }
  DAT_ffff0434 = bVar4;
  FUN_00001550();
  FUN_00093e1c((DAT_fffee772 & 0x10) != 0,(int)_DAT_ffff0be8,(DAT_fffee710 & 0x20) != 0,
               (DAT_ffff0000 & 4) != 0,_DAT_fffeeede,puVar2 + 0x90,puVar2 + 0xa5,puVar2 + 0xa4,
               puVar2 + 0xa3);
  FUN_00095038((DAT_ffff0435 & 8) != 0);
  FUN_00094e20((int)v_Coolant_Temperature_29A5,(DAT_ffff0435 & 4) != 0,(DAT_ffff0434 & 0x40) != 0,
               (DAT_ffff0437 & 8) != 0,(DAT_fffee710 & 0x20) != 0,_DAT_ffff0da4,_DAT_ffff0dae,
               DAT_ffff042e,puStack_30 + 4,puStack_30 + 2,puStack_30 + 10,puStack_30 + 0xe,
               puStack_30 + 0xc);
  FUN_00095080((DAT_ffff0434 & 0x20) != 0,(int)_DAT_ffff0bd2,(int)DAT_ffff0430,
               (DAT_ffff0435 & 2) != 0,DAT_ffff043c,(DAT_ffff0437 & 8) != 0,DAT_fffef9b4 & 1,
               (DAT_fffef9b4 & 2) != 0,puVar2 + 0x9d);
  FUN_00095188((int)DAT_ffff043d,(int)_DAT_ffff0bd2,(int)DAT_ffff0442,(int)DAT_ffff03a0,
               ((int)(char)DAT_ffff0436 & 0x80U) != 0,DAT_fffef9b4 & 1,(DAT_fffef9b4 & 2) != 0,
               puVar2 + 0xa0,puVar2 + 0xb3);
  FUN_00096d6c((int)DAT_ffff0430,(DAT_ffff0434 & 0x20) != 0,(int)DAT_ffff043d,DAT_fffef9b4 & 1,
               (DAT_fffef9b4 & 2) != 0,abStack_34);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0435 | 2;
  if ((abStack_34[0] & 1) == 0) {
    bVar4 = DAT_ffff0435 & 0xfd;
  }
  DAT_ffff0435 = bVar4;
  FUN_00001550(uVar3);
  FUN_00095450((int)DAT_ffff0440,puVar2 + 0xa9);
  puStack_30 = puStack_30 + 0x1c;
  FUN_00095b30((int)DAT_ffff0440,(int)_DAT_ffff0f56);
  FUN_00095118((int)_DAT_ffff0bea,(int)_DAT_ffff2a3c,puVar2 + 0x9e);
  FUN_00093c34((DAT_fffeeec2 & 4) != 0,(int)_DAT_ffff0bea,_DAT_ffff3afc,&DAT_ffff3afc);
  FUN_00093cd4(DAT_fffee717 & 1,(DAT_fffee717 & 2) != 0,(int)_DAT_ffff0bea,_DAT_ffff3b00,
               &DAT_ffff3b00);
  FUN_00093d84((int)_DAT_ffff0bea,(int)DAT_ffff042e,&DAT_ffff1584);
  FUN_0009513c((int)DAT_ffff043e,(int)DAT_ffff0446,puVar2 + 0x9f);
  FUN_00094f48((int)DAT_fffef714,(DAT_fffef710 & 0x10) != 0,(DAT_fffeff7e & 2) != 0,
               (int)DAT_ffff0960,(DAT_ffff0964 & 2) != 0,DAT_ffff043f,(DAT_ffff0434 & 8) != 0,
               DAT_fffeff7d,DAT_fffeeec6 & 1,(DAT_fffef054 & 0x40) != 0,puVar2 + 0x9b);
  FUN_000953b4((int)v_CPC_Valve_Duty_Ratio_043B,&DAT_ffff0bde);
  return;
}

