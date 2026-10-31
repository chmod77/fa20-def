
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d87bc(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_5c [4];
  byte abStack_58 [4];
  byte bStack_54;
  byte abStack_50 [4];
  byte local_4c [4];
  byte abStack_48 [4];
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte bStack_3c;
  byte abStack_38 [4];
  byte bStack_34;
  byte abStack_30 [4];
  byte abStack_2c [4];
  uint uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_fffeeede;
  FUN_000d9b08((DAT_fffeef76 & 0x20) != 0,(DAT_ffff056b & 0x10) != 0,(DAT_ffff056b & 8) != 0,
               (int)_DAT_fffef0da,DAT_fffeeec6 & 1,local_5c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff067c | 0x40;
  if ((local_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff067c & 0xbf;
  }
  DAT_ffff067c = bVar2;
  FUN_00001550();
  FUN_000d85a0(((int)DAT_ffff2fdc & 0x80U) != 0,(int)_DAT_ffff3926,&DAT_ffff3928);
  FUN_000d85c8(((int)DAT_ffff2fdc & 0x80U) != 0,(int)DAT_ffff369f,&DAT_ffff369f);
  FUN_000d8694(((int)DAT_ffff2fdc & 0x80U) != 0,(int)_DAT_fffeeede,(int)_DAT_ffff392a);
  FUN_000d965c(0,((int)DAT_fffee710 & 0x80U) != 0,(DAT_fffef3e1 & 0x20) != 0,(DAT_ffff067d & 4) != 0
               ,(DAT_fffeffe7 & 0x40) != 0,((int)(char)DAT_fffeffe7 & 0x80U) != 0,abStack_58);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff067e | 0x80;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff067e & 0x7f;
  }
  DAT_ffff067e = bVar2;
  FUN_00001550();
  FUN_000d9500(0,(DAT_fffeef76 & 0x40) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff067d | 0x40;
  if ((bStack_54 & 1) == 0) {
    bVar2 = DAT_ffff067d & 0xbf;
  }
  DAT_ffff067d = bVar2;
  FUN_00001550();
  FUN_000d9814((DAT_fffeef76 & 8) != 0,(int)DAT_ffff2adf,((int)(char)DAT_fffef092 & 0x80U) != 0,
               (DAT_fffef092 & 0x40) != 0,abStack_50);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff067d | 8;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff067d & 0xf7;
  }
  DAT_ffff067d = bVar2;
  FUN_00001550();
  FUN_000d8754(((int)DAT_ffff2fdc & 0x80U) != 0,(int)DAT_ffff369f,(DAT_fffeef76 & 0x10) != 0,
               (int)DAT_ffff0679,&DAT_ffff067a);
  FUN_000d9130(((int)DAT_ffff2fdc & 0x80U) != 0,(int)DAT_ffff369f,(DAT_fffeef76 & 0x10) != 0,
               (int)DAT_ffff36a0,&DAT_ffff36a1);
  local_4c[0] = 1 - ((DAT_ffff067d & 0x20) == 0);
  FUN_000d9570(0,((int)(char)DAT_ffff067e & 0x80U) != 0,(DAT_ffff0567 & 0x20) != 0,
               (DAT_ffff0567 & 0x10) != 0,(DAT_fffeef76 & 0x40) != 0,local_4c[0],local_4c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff067d | 0x20;
  if ((local_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff067d & 0xdf;
  }
  DAT_ffff067d = bVar2;
  FUN_00001550();
  FUN_000d96d0((DAT_ffff067c & 0x40) != 0,abStack_48);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff067e | 0x40;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff067e & 0xbf;
  }
  DAT_ffff067e = bVar2;
  FUN_00001550();
  FUN_000d84fc(((int)(char)DAT_ffff067c & 0x80U) != 0,(int)_DAT_ffff3928,(int)_DAT_ffff3926,
               &DAT_ffff3926);
  FUN_000d8638((int)_DAT_ffff392c,(int)_DAT_fffeeede,(int)_DAT_ffff392a,&DAT_ffff392a);
  FUN_000d9378(DAT_fffeeec6 & 1,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_fffeeede,
               (int)_v_Control_Module_Voltage_EF18,(DAT_ffff067e & 0x40) != 0,abStack_44);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff067d | 0x80;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff067d & 0x7f;
  }
  DAT_ffff067d = bVar2;
  FUN_00001550();
  FUN_000d86d0((DAT_fffeef76 & 0x10) != 0,(int)DAT_ffff067a,&DAT_ffff0679);
  FUN_000d98e8(0,((int)DAT_fffee710 & 0x80U) != 0,(DAT_ffff067d & 0x40) != 0,
               (DAT_ffff067d & 0x20) != 0,(DAT_fffeef76 & 0x40) != 0,
               ((int)DAT_fffef32d & 0x80U) != 0,(DAT_ffff067d & 4) != 0,(DAT_fffeef76 & 0x10) != 0,
               abStack_40);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff067e | 0x10;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff067e & 0xef;
  }
  DAT_ffff067e = bVar2;
  FUN_00001550();
  FUN_000d988c(((int)(char)DAT_ffff067d & 0x80U) != 0,(DAT_ffff067d & 4) != 0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff067e | 0x20;
  if ((bStack_3c & 1) == 0) {
    bVar2 = DAT_ffff067e & 0xdf;
  }
  DAT_ffff067e = bVar2;
  FUN_00001550(uVar1);
  FUN_000d971c((int)DAT_ffff067a,(int)DAT_ffff0679,(DAT_ffff03e4 & 8) != 0,
               (DAT_ffff067e & 0x20) != 0,(DAT_ffff0568 & 0x20) != 0,(DAT_fffeeec2 & 4) != 0,
               DAT_fffef0d6 & 1,DAT_fffef0d7 & 1,(DAT_ffff067e & 0x10) != 0,_DAT_ffff3926,
               _DAT_ffff392a,((int)(char)DAT_ffff067c & 0x80U) != 0,(DAT_ffff067c & 0x40) != 0,
               abStack_38);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff067d | 0x10;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff067d & 0xef;
  }
  DAT_ffff067d = bVar2;
  FUN_00001550();
  FUN_000d8fe4((int)DAT_ffff067a,(int)DAT_ffff0679,(DAT_fffeef76 & 0x10) != 0,
               (DAT_ffff03e4 & 8) != 0,(DAT_ffff067e & 0x20) != 0,(DAT_ffff0568 & 0x20) != 0,
               (DAT_fffeeec2 & 4) != 0,DAT_fffef0d6 & 1,DAT_fffef0d7 & 1,(DAT_ffff067e & 0x10) != 0,
               DAT_ffff36a1,DAT_ffff36a0,_DAT_ffff3926,_DAT_ffff392a,
               ((int)(char)DAT_ffff067c & 0x80U) != 0,(DAT_ffff067d & 0x10) != 0,&DAT_ffff36a0);
  FUN_000d97f0(DAT_fffef0d6 & 1,DAT_fffef0d7 & 1,(int)DAT_ffff36a0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff067b | 0x80;
  if ((bStack_34 & 1) == 0) {
    bVar2 = DAT_ffff067b & 0x7f;
  }
  DAT_ffff067b = bVar2;
  FUN_00001550(uVar1);
  uStack_28 = (uint)((DAT_ffff067d & 0x20) != 0);
  FUN_000d99a4(DAT_fffef0d7 & 1,DAT_fffef0d6 & 1,(DAT_ffff0568 & 0x20) != 0,(DAT_fffeeec2 & 4) != 0,
               _DAT_ffff392a,((int)(char)DAT_ffff067d & 0x80U) != 0,DAT_ffff36a0,DAT_ffff0679,
               ((int)DAT_fffee710 & 0x80U) != 0,(DAT_fffeef76 & 0x40) != 0,0,uStack_28,
               ((int)DAT_fffef32d & 0x80U) != 0,(DAT_ffff0567 & 0x20) != 0,
               (DAT_ffff0567 & 0x10) != 0,abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff067d | 4;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff067d & 0xfb;
  }
  DAT_ffff067d = bVar2;
  FUN_00001550(uVar1);
  FUN_000d917c(DAT_fffef0d6 & 1,DAT_fffef0d7 & 1,((int)(char)DAT_ffff067d & 0x80U) != 0,
               (DAT_ffff067d & 4) != 0,(DAT_fffeeec2 & 4) != 0,(DAT_ffff067d & 0x10) != 0,
               (DAT_ffff067c & 0x40) != 0,((int)DAT_fffee710 & 0x80U) != 0,
               (DAT_fffeef76 & 0x40) != 0,DAT_ffff36a1,DAT_ffff36a0,DAT_ffff067a,DAT_ffff0679,
               DAT_ffff66b0,abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff067c | 0x80;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff067c & 0x7f;
  }
  DAT_ffff067c = bVar2;
  FUN_00001550(uVar1);
  return;
}

