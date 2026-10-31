
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00089e04(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_ffff04c1;
  FUN_0008bd0c((int)_DAT_ffff0dd0,(int)DAT_ffff0541,(DAT_ffff056c & 0x40) != 0,(int)DAT_ffff04ff,
               DAT_fffeeec6 & 1,&DAT_ffff03ec);
  FUN_0008fdc0((int)DAT_ffff04c1,(int)v_Coolant_Temperature_29A5,(int)v_Vehicle_Speed_byte_65A1,
               (int)_v_Engine_Speed_2994,DAT_ffff04ca & 1,&DAT_ffff0407,&DAT_ffff0408,&DAT_ffff042b)
  ;
  FUN_000902cc(((int)DAT_ffff0535 & 0x80U) != 0,(int)DAT_ffff03a0,(int)_DAT_fffeeede,
               (int)_v_Engine_Speed_2994,_DAT_ffff0e90,&DAT_ffff0b82);
  FUN_00090fb8((int)DAT_ffff66b0,&DAT_ffff0b98);
  FUN_00091008((int)_v_Engine_Speed_2994,(int)DAT_ffff03a0,(int)DAT_ffff3669,&DAT_ffff0b9a);
  FUN_00093108((int)DAT_ffff0541,(DAT_ffff056c & 0x40) != 0,(int)DAT_ffff04ff,DAT_fffeeec6 & 1,
               local_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e7 | 2;
  if ((local_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff03e7 & 0xfd;
  }
  DAT_ffff03e7 = bVar2;
  FUN_00001550();
  FUN_0009394c((DAT_ffff056b & 0x40) != 0,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e7 | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff03e7 & 0xfe;
  }
  DAT_ffff03e7 = bVar2;
  FUN_00001550(uVar1);
  FUN_0008bcac((int)DAT_ffff0541,(int)DAT_ffff04ff,(int)DAT_ffff03a0,(int)_v_Engine_Speed_2994,
               _DAT_ffff0b9a,&DAT_ffff03eb);
  FUN_0008bde8((int)_DAT_ffff0e68,(int)DAT_ffff04ff,(int)_DAT_ffff0dc2,(int)_DAT_ffff10f2,
               DAT_ffff06da & 1,(DAT_ffff06ce & 8) != 0,_DAT_ffff0dca,_DAT_ffff0dd0,DAT_ffff03e7 & 1
               ,&DAT_ffff0b36,&DAT_ffff0b9e,&DAT_ffff0b9c);
  FUN_0008edf0((int)DAT_ffff66b0,(int)v_Coolant_Temperature_29A5,(int)_DAT_ffff0b98,
               (int)DAT_ffff03a0,_v_Engine_Speed_2994,((int)DAT_ffff3653 & 0x80U) != 0,_DAT_fffeeede
               ,DAT_ffff0423,&DAT_ffff0b62,&DAT_ffff0b66,&DAT_ffff0b6a,&DAT_ffff0b6e,&DAT_ffff0425,
               &DAT_ffff0427,&DAT_ffff0429,&DAT_ffff0414);
  FUN_0008f250((int)DAT_ffff66b0,(int)v_Coolant_Temperature_29A5,(int)_DAT_ffff0b98,
               (int)DAT_ffff03a0,_v_Engine_Speed_2994,((int)DAT_ffff3653 & 0x80U) != 0,_DAT_fffeeede
               ,DAT_ffff0423,(DAT_ffff0534 & 0x40) != 0,_v_Fuel_Rail_Pressure_gauge_ED16,
               _DAT_ffff1276,&DAT_ffff0b60,&DAT_ffff0b68,&DAT_ffff0b6c,&DAT_ffff0b70,&DAT_ffff0424,
               &DAT_ffff0426,&DAT_ffff0428,&DAT_ffff0413,&DAT_ffff0b64,&DAT_ffff0b86);
  FUN_0008fbc0((int)DAT_ffff66b0,(DAT_fffee710 & 0x20) != 0,(int)DAT_ffff29a7,(int)_DAT_ffff0b98,
               DAT_fffee69c,&DAT_ffff0404);
  FUN_000900c8((int)DAT_ffff66b0,(int)_DAT_ffff0b98,(DAT_fffee710 & 0x20) != 0,(int)DAT_ffff29a7,
               _DAT_fffeeede,DAT_ffff03a0,_v_Engine_Speed_2994,_DAT_ffff0e90,
               ((int)DAT_ffff0535 & 0x80U) != 0,_DAT_ffff0b82,&DAT_ffff0b80);
  FUN_00090390((int)DAT_ffff66b0,(int)_DAT_ffff0b98,(DAT_fffee710 & 0x20) != 0,(int)DAT_ffff29a7,
               _DAT_fffeeede,DAT_ffff03a0,_v_Engine_Speed_2994,_DAT_ffff0e90,&DAT_ffff0b84);
  FUN_0009058c((DAT_fffee710 & 0x20) != 0,(int)DAT_ffff29a7,(int)DAT_ffff03a0,(int)_DAT_ffff0d06,
               DAT_ffff29a2,_DAT_ffff0b98,_v_Engine_Speed_2994,&DAT_ffff0415,0xffff03ff,
               &DAT_ffff0419,&DAT_ffff0416);
  return;
}

