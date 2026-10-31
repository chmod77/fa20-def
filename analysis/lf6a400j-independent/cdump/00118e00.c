
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00118e00(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte local_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [4];
  undefined1 *local_18;
  
  local_18 = &DAT_fffeeede;
  FUN_00118ffc(DAT_fffeeec6 & 1,(int)_DAT_fffeeede,(DAT_fffef330 & 0x40) != 0,(int)_DAT_fffef0da,
               DAT_ffff29a7,abStack_2c,abStack_30,local_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff091c | 1;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff091c & 0xfe;
  }
  bVar3 = bVar2 | 0x10;
  if ((abStack_30[0] & 1) == 0) {
    bVar3 = bVar2 & 0xef;
  }
  DAT_ffff091c = bVar3 | 0x20;
  if ((local_34[0] & 1) == 0) {
    DAT_ffff091c = bVar3 & 0xdf;
  }
  FUN_00001550(uVar1);
  FUN_001192fc(DAT_ffff091c & 1,(int)DAT_ffff29a7,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff091c | 4;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff091c & 0xfb;
  }
  DAT_ffff091c = bVar2;
  FUN_00001550(uVar1);
  FUN_001194c4(DAT_ffff091c & 1,(int)DAT_ffff29a7,abStack_24);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff091c | 2;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff091c & 0xfd;
  }
  DAT_ffff091c = bVar2;
  FUN_00001550();
  FUN_0011911c((DAT_ffff091c & 4) != 0,(int)_DAT_fffeef10,(int)DAT_ffff3669,(DAT_fffef316 & 2) != 0,
               _DAT_fffef0da,DAT_ffff03a0,_v_Accelerator_Pedal_Angle_EEF8,
               _v_Engine_Speed_OBD_copy_2ADA,abStack_20);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff091c | 8;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff091c & 0xf7;
  }
  DAT_ffff091c = bVar2;
  FUN_00001550();
  FUN_0011931c((DAT_ffff091c & 2) != 0,(int)_DAT_fffeef10,(DAT_fffef316 & 2) != 0,(int)_DAT_fffef0da
               ,DAT_ffff03a0,_v_Accelerator_Pedal_Angle_EEF8,_v_Engine_Speed_OBD_copy_2ADA,
               abStack_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0770 | 0x40;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff0770 & 0xbf;
  }
  DAT_ffff0770 = bVar2;
  FUN_00001550(uVar1);
  return;
}

