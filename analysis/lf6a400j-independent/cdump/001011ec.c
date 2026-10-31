
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001011ec(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte bVar3;
  byte local_74;
  byte abStack_70 [4];
  byte abStack_6c [4];
  byte abStack_68 [4];
  byte abStack_64 [4];
  byte abStack_60 [4];
  byte abStack_5c [4];
  byte abStack_58 [4];
  byte bStack_54;
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
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_fffef315;
  FUN_0010659c(((int)DAT_fffeef76 & 0x80U) != 0,(int)DAT_ffff03ad,(int)DAT_ffff0598,
               (int)DAT_fffef05a,1,&DAT_ffff12b6,&DAT_ffff129a);
  FUN_00107f94((DAT_ffff056c & 0x10) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0789 | 8;
  if ((local_74 & 1) == 0) {
    bVar2 = DAT_ffff0789 & 0xf7;
  }
  DAT_ffff0789 = bVar2;
  FUN_00001550();
  FUN_0010755c((DAT_ffff0003 & 8) != 0,(DAT_ffff0003 & 4) != 0,(int)_DAT_fffef0da,
               (DAT_fffef371 & 4) != 0,(DAT_ffff2fe1 & 2) != 0,abStack_60,abStack_64,&DAT_ffff079e,
               &DAT_ffff079a,&DAT_ffff079b,&DAT_ffff079c,&DAT_ffff079d,abStack_68,abStack_6c,
               abStack_70);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff078d | 0x80;
  if ((abStack_60[0] & 1) == 0) {
    bVar2 = DAT_ffff078d & 0x7f;
  }
  bVar3 = bVar2 | 0x40;
  if ((abStack_64[0] & 1) == 0) {
    bVar3 = bVar2 & 0xbf;
  }
  bVar2 = bVar3 | 0x20;
  if ((abStack_68[0] & 1) == 0) {
    bVar2 = bVar3 & 0xdf;
  }
  bVar3 = bVar2 | 0x10;
  if ((abStack_6c[0] & 1) == 0) {
    bVar3 = bVar2 & 0xef;
  }
  DAT_ffff078d = bVar3 | 8;
  if ((abStack_70[0] & 1) == 0) {
    DAT_ffff078d = bVar3 & 0xf7;
  }
  FUN_00001550(uVar1);
  FUN_001080d8((int)_DAT_ffff0f42,(int)_DAT_ffff0f40,(int)_DAT_ffff0f44,DAT_fffef0eb & 1,
               (DAT_fffef06c & 4) != 0,abStack_5c,&DAT_ffff12c4);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff078c | 0x20;
  if ((abStack_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff078c & 0xdf;
  }
  DAT_ffff078c = bVar2;
  FUN_00001550();
  FUN_00108238((DAT_fffef3ea & 0x40) != 0,(DAT_ffff6559 & 8) != 0,(DAT_fffef37e & 2) != 0,abStack_58
              );
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff078c | 0x80;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff078c & 0x7f;
  }
  DAT_ffff078c = bVar2;
  FUN_00001550(uVar1);
  puStack_28 = &DAT_ffff079f;
  FUN_001086c8((int)_DAT_ffff1294);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff078c | 0x10;
  if ((bStack_54 & 1) == 0) {
    bVar2 = DAT_ffff078c & 0xef;
  }
  DAT_ffff078c = bVar2;
  FUN_00001550(uVar1);
  FUN_001088b8(DAT_fffef39a & 1,(DAT_fffef39a & 2) != 0,((int)(char)DAT_fffef39a & 0x80U) != 0,
               (DAT_fffef39a & 8) != 0,(DAT_fffef39a & 4) != 0,(DAT_ffff2fe1 & 2) != 0,
               (DAT_fffef371 & 4) != 0,abStack_48,abStack_4c,abStack_50);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff078c | 4;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff078c & 0xfb;
  }
  bVar3 = bVar2 | 2;
  if ((abStack_4c[0] & 1) == 0) {
    bVar3 = bVar2 & 0xfd;
  }
  DAT_ffff078c = bVar3 | 1;
  if ((abStack_50[0] & 1) == 0) {
    DAT_ffff078c = bVar3 & 0xfe;
  }
  FUN_00001550();
  FUN_00104454((DAT_fffef3ea & 2) != 0,(DAT_ffff0789 & 0x10) != 0,&DAT_ffff1288);
  FUN_001044a8(DAT_fffef3ea & 1,(DAT_ffff0789 & 0x10) != 0,&DAT_ffff128c);
  FUN_00104a6c((DAT_ffff056f & 0x10) != 0,&DAT_ffff129e);
  FUN_00104a84((DAT_ffff056f & 0x10) != 0,&DAT_ffff12a2);
  FUN_00104a9c();
  FUN_00103c4c((DAT_ffff0789 & 4) != 0,(DAT_ffff056f & 0x10) != 0,&DAT_ffff1280);
  FUN_00103c00((DAT_ffff0789 & 4) != 0,(DAT_ffff056f & 0x10) != 0,(int)DAT_ffff0554,&DAT_ffff127e);
  FUN_00103c74((DAT_ffff0789 & 4) != 0,(DAT_ffff056f & 0x10) != 0,(int)DAT_ffff0554,puStack_28);
  FUN_00103bb4((DAT_ffff0789 & 4) != 0,(DAT_ffff056f & 0x10) != 0,(int)DAT_ffff0554,&DAT_ffff127c);
  FUN_00104698((DAT_ffff0789 & 4) != 0,(DAT_ffff056f & 0x10) != 0,(int)DAT_ffff0554,&DAT_ffff1298);
  FUN_001066e8((DAT_ffff056f & 0x10) != 0,(DAT_ffff0789 & 4) != 0,(int)DAT_ffff0554,&DAT_ffff12b8);
  FUN_00106738((DAT_ffff056f & 0x10) != 0,(DAT_ffff0789 & 4) != 0,(DAT_fffef085 & 2) != 0,
               (int)DAT_ffff0554,&DAT_ffff12ba);
  FUN_001067b4((DAT_ffff056f & 0x10) != 0,(DAT_ffff0789 & 4) != 0,(DAT_fffef085 & 2) != 0,
               (int)DAT_ffff0554,&DAT_ffff12bc);
  FUN_00106830((DAT_ffff056f & 0x10) != 0,(DAT_ffff0789 & 4) != 0,(int)DAT_ffff0554,&DAT_ffff12be);
  FUN_00106880((DAT_ffff056f & 0x10) != 0,(DAT_ffff0789 & 4) != 0,(int)DAT_ffff0554,&DAT_ffff12c0);
  FUN_001068d0();
  FUN_0010800c((DAT_fffef3ea & 0x40) != 0,(DAT_fffef3e1 & 0x20) != 0,(DAT_ffff078c & 0x20) != 0,
               (DAT_fffef317 & 0x10) != 0,(DAT_ffff056f & 0x10) != 0,(DAT_fffef2d0 & 4) != 0,
               (DAT_fffef06f & 8) != 0,DAT_fffef080 & 1,DAT_ffff0556,DAT_fffef08a & 1,abStack_44);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff078c | 0x40;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff078c & 0xbf;
  }
  DAT_ffff078c = bVar2;
  FUN_00001550(uVar1);
  puStack_28 = puStack_28 + 3;
  FUN_001085f4(DAT_fffef32a & 1,(DAT_fffef316 & 2) != 0,(DAT_fffef316 & 0x20) != 0,DAT_fffeeec0 & 1,
               _v_Manifold_Absolute_Pressure_EECE,_DAT_ffff12c2,(DAT_ffff056f & 0x10) != 0,
               (DAT_ffff0789 & 4) != 0,(int)_DAT_ffff1294,abStack_40,puStack_28);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff078c | 8;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff078c & 0xf7;
  }
  DAT_ffff078c = bVar2;
  FUN_00001550();
  FUN_001072f0(((int)(char)DAT_ffff0789 & 0x80U) != 0,(int)_DAT_ffff1288,(int)_DAT_ffff12a2,
               (DAT_fffef3ea & 2) != 0,DAT_ffff056c & 1,_DAT_ffff12c2,_DAT_ffff12be,DAT_ffff079f,
               abStack_3c);
  FUN_00001550(0xf0);
  bVar2 = DAT_fffef315 | 0x10;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_fffef315 & 0xef;
  }
  DAT_fffef315 = bVar2;
  FUN_00001550();
  FUN_00108a5c(((int)(char)DAT_ffff0789 & 0x80U) != 0,(int)_DAT_ffff128c,(int)_DAT_ffff12a4,
               DAT_fffef3ea & 1,(DAT_fffef08a & 2) != 0,DAT_ffff079f,abStack_38);
  FUN_00001550(0xf0);
  bVar2 = DAT_fffef315 | 0x40;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_fffef315 & 0xbf;
  }
  DAT_fffef315 = bVar2;
  FUN_00001550();
  FUN_001091c8(((int)(char)DAT_ffff0789 & 0x80U) != 0,DAT_fffef3ea & 1,(DAT_fffef315 & 0x20) != 0,
               ((int)(char)DAT_fffef315 & 0x80U) != 0,_DAT_ffff12c2,_DAT_ffff12aa,_DAT_ffff12c6,
               _DAT_ffff1298,DAT_ffff079f,_DAT_ffff128c,_DAT_ffff12a4,
               _v_Accelerator_Pedal_Angle_EEF8,(DAT_ffff056f & 0x10) != 0,abStack_34);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0787 | 0x20;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff0787 & 0xdf;
  }
  DAT_ffff0787 = bVar2;
  FUN_00001550();
  FUN_001097ac(((int)(char)DAT_ffff0789 & 0x80U) != 0,(int)_DAT_ffff1288,(int)_DAT_ffff12a2,
               (int)_DAT_ffff12c2,_DAT_ffff12be,(DAT_fffef3ea & 2) != 0,DAT_ffff056c & 1,
               DAT_ffff079f,abStack_30);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0787 | 0x10;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff0787 & 0xef;
  }
  DAT_ffff0787 = bVar2;
  FUN_00001550();
  FUN_00109988(((int)(char)DAT_ffff0789 & 0x80U) != 0,(int)_DAT_ffff1288,(int)_DAT_ffff12a2,
               (int)_DAT_ffff12c2,_DAT_ffff12be,(DAT_fffef3ea & 2) != 0,DAT_ffff056c & 1,
               DAT_ffff079f,abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0787 | 8;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0787 & 0xf7;
  }
  DAT_ffff0787 = bVar2;
  FUN_00001550(uVar1);
  return;
}

