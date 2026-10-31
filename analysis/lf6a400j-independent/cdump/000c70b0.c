
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c70b0(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_fffef2fc;
  FUN_000c2764();
  FUN_000c2900((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee671,
               (int)DAT_fffee66b,(DAT_fffef065 & 0x20) != 0,(DAT_fffef065 & 0x40) != 0,
               ((int)(char)DAT_fffef065 & 0x80U) != 0,&DAT_ffff0551);
  FUN_000c3ca8(_DAT_fffef55c,(int)_DAT_fffef302,_DAT_fffef304,&DAT_ffff1674,&DAT_ffff05a9);
  FUN_000c46c4((DAT_fffef310 & 8) != 0,(int)DAT_fffee672,DAT_fffef083 & 1,(DAT_fffef083 & 2) != 0,
               (DAT_fffef083 & 4) != 0,&DAT_ffff0564);
  FUN_000c8cb8((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee671,
               (int)DAT_fffee66b,(DAT_fffef063 & 2) != 0,(DAT_fffef063 & 4) != 0,
               (DAT_fffef063 & 8) != 0,&DAT_ffff0583);
  FUN_000c9bd8((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee671,
               (int)DAT_fffee66b,DAT_fffef066 & 1,DAT_fffef069,&DAT_ffff0589);
  FUN_000ca510((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee671,
               (int)DAT_fffee66b,DAT_fffef068,&DAT_ffff059c);
  FUN_000cb0b0((int)_DAT_fffef302,_DAT_fffef304,(int)DAT_fffee668,&DAT_ffff369b);
  FUN_000cc254((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee671,
               (int)DAT_fffee66b,DAT_fffef31b & 1,(DAT_ffff0006 & 4) != 0,local_44);
  FUN_00001550(0xf0);
  bVar2 = DAT_fffef063 | 1;
  if ((local_44[0] & 1) == 0) {
    bVar2 = DAT_fffef063 & 0xfe;
  }
  DAT_fffef063 = bVar2;
  FUN_00001550();
  FUN_000cd418((DAT_fffef319 & 4) != 0,(int)_v_Control_Module_Voltage_EF18,(int)DAT_ffff055e,
               (DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,DAT_fffee665,DAT_fffee667,
               abStack_40);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0568 | 0x10;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff0568 & 0xef;
  }
  DAT_ffff0568 = bVar2;
  FUN_00001550(uVar1);
  FUN_000cd4b0((int)DAT_ffff055e,(int)_v_Control_Module_Voltage_EF18,(DAT_fffef319 & 8) != 0,
               (DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,DAT_fffee665,DAT_fffee667,
               abStack_3c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0568 | 8;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff0568 & 0xf7;
  }
  DAT_ffff0568 = bVar2;
  FUN_00001550();
  FUN_000cd740((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee671,
               (int)DAT_fffee66b,(DAT_fffef063 & 2) != 0,(DAT_fffef063 & 4) != 0,
               (DAT_fffef063 & 8) != 0,abStack_38);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0568 | 1;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff0568 & 0xfe;
  }
  DAT_ffff0568 = bVar2;
  FUN_00001550();
  FUN_000cd7c0((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee665,
               (int)DAT_fffee667,(DAT_ffff2fdb & 2) != 0,abStack_34);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0568 | 4;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff0568 & 0xfb;
  }
  DAT_ffff0568 = bVar2;
  FUN_00001550();
  FUN_000ce15c((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee665,
               (int)DAT_fffee667,DAT_fffef2ff,abStack_30);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff056b | 0x10;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff056b & 0xef;
  }
  DAT_ffff056b = bVar2;
  FUN_00001550();
  FUN_000ce1a8((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee665,
               (int)DAT_fffee667,(DAT_fffef30d & 0x20) != 0,abStack_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff056b | 8;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff056b & 0xf7;
  }
  DAT_ffff056b = bVar2;
  FUN_00001550();
  FUN_000ce290((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee665,
               (int)DAT_fffee667,(DAT_ffff2fdb & 2) != 0,DAT_ffff2fdb & 1,abStack_28);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0568 | 2;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0568 & 0xfd;
  }
  DAT_ffff0568 = bVar2;
  FUN_00001550();
  FUN_000c29dc();
  FUN_000c8dd0((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee665,
               (int)DAT_fffee667,(DAT_ffff0568 & 4) != 0,(DAT_fffef403 & 0x20) != 0,DAT_ffff3699,
               &DAT_ffff3699);
  FUN_000c9c7c();
  FUN_000ca960((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee665,
               (int)DAT_fffee667,(DAT_fffef403 & 0x20) != 0,(DAT_fffef403 & 8) != 0,
               (DAT_ffff0568 & 2) != 0,DAT_ffff369a,&DAT_ffff369a);
  FUN_000c2a3c((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee671,
               (int)DAT_fffee66b,DAT_ffff0552,DAT_ffff064b & 1,&DAT_ffff0ea4);
  FUN_000c2b0c((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee671,
               (int)DAT_fffee66b,_DAT_ffff0ea4,DAT_fffef066 & 1,((int)DAT_ffff0569 & 0x80U) != 0,
               DAT_ffff04ca & 1,DAT_ffff059c,&DAT_ffff0ea6,&DAT_ffff0ea8,&DAT_ffff0eaa,&DAT_ffff0eac
              );
  return;
}

