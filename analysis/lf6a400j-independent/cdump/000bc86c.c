
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bc86c(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte local_50 [4];
  byte bStack_4c;
  byte bStack_48;
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte bStack_34;
  undefined1 *puStack_30;
  byte bStack_2c;
  uint uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0e2e;
  FUN_000bce38(((int)(char)DAT_ffff051c & 0x80U) != 0,(DAT_ffff051c & 0x40) != 0,&DAT_ffff051e);
  puStack_30 = &DAT_ffff0e2e;
  FUN_000bcf30((int)_v_Engine_Speed_2994,(int)_DAT_ffff0a62,&DAT_ffff0e32);
  FUN_000bd170((DAT_ffff06da & 4) != 0,(DAT_ffff06da & 8) != 0,DAT_ffff051c & 1,&DAT_ffff0523);
  FUN_000bd720((int)DAT_ffff03ad,(int)v_Vehicle_Speed_byte_65A1,&DAT_ffff0528);
  FUN_000bd7a0((int)_v_Engine_Speed_2994,(int)_v_Atmospheric_Pressure_E6AA,&DAT_ffff052a);
  FUN_000bda58((int)_v_Engine_Speed_2994,(int)_v_Atmospheric_Pressure_E6AA,&DAT_ffff0e5a);
  FUN_000bdbb8((int)_DAT_fffef540,(int)DAT_ffff03a0,(int)_v_Engine_Speed_2994,
               (DAT_ffff03d8 & 2) != 0,local_50);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff051c | 4;
  if ((local_50[0] & 1) == 0) {
    bVar3 = DAT_ffff051c & 0xfb;
  }
  DAT_ffff051c = bVar3;
  FUN_00001550(uVar2);
  FUN_000bdc00((int)DAT_ffff0520);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff051c | 8;
  if ((bStack_4c & 1) == 0) {
    bVar3 = DAT_ffff051c & 0xf7;
  }
  DAT_ffff051c = bVar3;
  FUN_00001550();
  FUN_000bdc2c(((int)(char)DAT_ffff051c & 0x80U) != 0,(DAT_ffff051c & 0x40) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff051c | 0x10;
  if ((bStack_48 & 1) == 0) {
    bVar3 = DAT_ffff051c & 0xef;
  }
  DAT_ffff051c = bVar3;
  FUN_00001550(uVar2);
  FUN_000bce84(0xffff389c,(int)DAT_ffff051e,((int)(char)DAT_ffff051c & 0x80U) != 0,
               (DAT_ffff051c & 0x40) != 0,&DAT_ffff051f);
  FUN_000bd78c(0,(int)DAT_ffff0528,&DAT_ffff0529);
  FUN_000bda04((int)DAT_fffee6a6,(int)_DAT_ffff0e5a,puStack_30 + 0x2e,&DAT_ffff0526);
  FUN_000bdb8c((int)DAT_ffff051e,DAT_ffff3668 & 1,abStack_44);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff051c | 0x40;
  if ((abStack_44[0] & 1) == 0) {
    bVar3 = DAT_ffff051c & 0xbf;
  }
  DAT_ffff051c = bVar3;
  FUN_00001550(uVar2);
  FUN_000bdc50((int)DAT_ffff3669,(DAT_ffff051c & 0x10) != 0,abStack_40);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff051c | 0x20;
  if ((abStack_40[0] & 1) == 0) {
    bVar3 = DAT_ffff051c & 0xdf;
  }
  DAT_ffff051c = bVar3;
  FUN_00001550(uVar2);
  puVar1 = puStack_30;
  FUN_000bd11c((int)_v_Engine_Speed_2994,(int)_DAT_ffff0a62,(int)_DAT_ffff0e5c,puStack_30 + 0x14,
               puStack_30 + 0x16);
  FUN_000bd8f4((int)DAT_fffee6a6,(int)DAT_ffff052a,(int)DAT_ffff0529,puVar1 + 0x2a,&DAT_ffff052b);
  FUN_000bdba4((int)DAT_ffff051f,abStack_3c);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff051c | 0x80;
  if ((abStack_3c[0] & 1) == 0) {
    bVar3 = DAT_ffff051c & 0x7f;
  }
  DAT_ffff051c = bVar3;
  FUN_00001550();
  FUN_000bdcb4((DAT_ffff051c & 0x20) != 0,abStack_38);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff051c | 2;
  if ((abStack_38[0] & 1) == 0) {
    bVar3 = DAT_ffff051c & 0xfd;
  }
  DAT_ffff051c = bVar3;
  FUN_00001550();
  bStack_2c = DAT_fffeeec6 & 1;
  uStack_28 = (uint)((DAT_ffff03e0 & 2) != 0);
  FUN_000bcf54((DAT_fffee710 & 0x20) != 0,bStack_2c,(DAT_ffff051c & 2) != 0,
               (DAT_fffef32c & 0x40) != 0,((int)(char)DAT_fffef32c & 0x80U) != 0,
               (DAT_fffef32a & 8) != 0,(DAT_ffff051c & 4) != 0,DAT_fffef32f & 1,DAT_fffef32c & 1,
               DAT_ffff03e0 & 1,uStack_28,(DAT_ffff051c & 8) != 0,_DAT_ffff0e46,_DAT_ffff0e4e,
               &DAT_ffff0520);
  puVar1 = puStack_30;
  FUN_000bd7c4((int)_v_Engine_Speed_2994,(int)_DAT_ffff0a62,(int)_DAT_ffff0e58,puStack_30 + 0x28,
               puStack_30 + 0x24);
  FUN_000bd968((int)_v_Engine_Speed_2994,(int)_DAT_ffff0e58,&DAT_ffff052f,&DAT_ffff052e);
  FUN_000bd858((int)_v_Engine_Speed_2994,(int)_DAT_ffff0e58,&DAT_ffff052c,&DAT_ffff052d);
  FUN_000bd300((int)DAT_ffff0520,(int)_DAT_ffff0e56,(int)_v_Atmospheric_Pressure_E6AA,
               (int)_v_Engine_Speed_2994,_DAT_ffff09ba,_v_Primary_Wastegate_Duty_0E5E,_DAT_ffff0e42,
               DAT_fffee6a6,puVar1 + 0x22,puVar1 + 0x1c,puVar1 + 10,puVar1 + 0x1e,&DAT_ffff0525,
               puVar1 + 0xc,puVar1 + 0x10,puVar1 + 0xe,&DAT_ffff0521,puVar1 + 0x12,&DAT_ffff0522,
               puVar1 + 0x26,&DAT_ffff0e2c);
  FUN_000bd2ac((int)_DAT_ffff0e32,(int)_DAT_ffff0e5c,(int)_DAT_ffff0e50,(int)_DAT_ffff0e42,
               puVar1 + 0x20);
  FUN_000bd1bc((int)DAT_ffff0520,((int)(char)DAT_fffee710 & 0x80U) != 0,(int)DAT_ffff0557,
               (int)DAT_fffee6a6,_DAT_ffff0e5a,_DAT_ffff0e4e,puVar1 + 0x18,puVar1 + 0x1a,
               &DAT_ffff0527);
  FUN_000bcf10((int)DAT_ffff0520,(int)_DAT_ffff0e4e,(int)_DAT_ffff0e46,puVar1 + 2);
  FUN_000bd070((int)DAT_ffff0523,(int)_DAT_ffff0e30,puVar1 + 6,puVar1 + 8);
  FUN_000bcefc((int)_DAT_ffff0e34,(int)_DAT_ffff0e30,puVar1);
  FUN_000bdc8c((int)DAT_ffff0523,(int)_DAT_ffff0e34,(int)_DAT_ffff0e30);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff051c | 1;
  if ((bStack_34 & 1) == 0) {
    bVar3 = DAT_ffff051c & 0xfe;
  }
  DAT_ffff051c = bVar3;
  FUN_00001550();
  puStack_30 = puStack_30 + 0x30;
  FUN_000bda84((int)DAT_ffff091d,(int)v_Vehicle_Speed_byte_65A1,DAT_fffeeec6 & 1,
               (DAT_ffff051d & 4) != 0,_DAT_ffff0e2e,(DAT_fffef32e & 0x10) != 0,
               (DAT_fffef32e & 4) != 0,(DAT_fffef498 & 8) != 0,(DAT_ffff0001 & 0x10) != 0,puStack_30
              );
  return;
}

