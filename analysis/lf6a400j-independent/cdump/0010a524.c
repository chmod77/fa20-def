
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a524(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_48 [4];
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte bStack_30;
  byte bStack_2c;
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &v_Alternator_Duty_10D6;
  FUN_0010a3fc((int)_DAT_fffef0be,&DAT_ffff12ce);
  FUN_0010a47c((int)_DAT_fffef0be,&DAT_ffff12d0);
  local_48[0] = 1 - ((DAT_ffff07b3 & 0x40) == 0);
  FUN_0010a9cc((int)DAT_ffffab41,(int)_v_Alternator_Duty_10D6,(int)DAT_ffff29a2,(int)_DAT_ffff10e0,
               ((int)(char)DAT_ffff07b3 & 0x80U) != 0,local_48[0],local_48);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07b3 | 0x40;
  if ((local_48[0] & 1) == 0) {
    bVar2 = DAT_ffff07b3 & 0xbf;
  }
  DAT_ffff07b3 = bVar2;
  FUN_00001550(uVar1);
  FUN_0010ac38((int)DAT_ffffab41,(int)_v_Alternator_Duty_10D6,(int)DAT_ffff29a2,abStack_44);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07b3 | 0x10;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff07b3 & 0xef;
  }
  DAT_ffff07b3 = bVar2;
  FUN_00001550(uVar1);
  FUN_0010acbc((int)DAT_ffffab41,(int)_v_Alternator_Duty_10D6,(int)DAT_ffff29a2,abStack_40);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff07b3 | 0x20;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff07b3 & 0xdf;
  }
  DAT_ffff07b3 = bVar2;
  FUN_00001550();
  FUN_0010a8cc((DAT_fffeeec2 & 4) != 0,(DAT_ffff07b3 & 0x10) != 0,(int)_DAT_ffff10e0,&DAT_ffff12d2);
  FUN_0010a94c((DAT_fffeeec2 & 4) != 0,(DAT_ffff07b3 & 0x20) != 0,(int)_DAT_ffff10e0,&DAT_ffff12d4);
  abStack_3c[0] = 1 - (((int)(char)DAT_ffff07b3 & 0x80U) == 0);
  FUN_0010aa84((int)DAT_ffffab41,(int)_v_Alternator_Duty_10D6,(int)DAT_ffff29a2,(int)_DAT_ffff10e0,
               (DAT_ffff07b3 & 0x40) != 0,abStack_3c[0],abStack_3c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff07b3 | 0x80;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff07b3 & 0x7f;
  }
  DAT_ffff07b3 = bVar2;
  FUN_00001550();
  FUN_0010a0fc((DAT_fffeeec2 & 4) != 0,(DAT_ffff07b3 & 0x10) != 0,(int)_DAT_ffff10e0,
               (int)_DAT_ffff12d2,_DAT_fffef0be,DAT_ffffab41,&DAT_ffff12ca);
  FUN_0010a19c((DAT_fffeeec2 & 4) != 0,(DAT_ffff07b3 & 0x20) != 0,(int)_DAT_ffff10e0,
               (int)_DAT_ffff12d4,_DAT_fffef0be,DAT_ffffab41,&DAT_ffff12cc);
  FUN_0010abf4((DAT_ffff07b3 & 0x40) != 0,((int)(char)DAT_ffff07b3 & 0x80U) != 0,(int)_DAT_ffff10e0,
               abStack_38);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff07b3 | 8;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff07b3 & 0xf7;
  }
  DAT_ffff07b3 = bVar2;
  FUN_00001550();
  FUN_0010a090((DAT_fffeeec2 & 4) != 0,(DAT_ffff07b3 & 8) != 0,(int)_DAT_ffff12ce,(int)_DAT_ffff12d0
               ,&DAT_ffff07ad);
  FUN_0010a23c((DAT_fffeeec2 & 4) != 0,(DAT_ffff07b3 & 8) != 0,(int)_DAT_ffff12ce,(int)_DAT_ffff12d0
               ,&DAT_ffff07ae);
  FUN_0010a310((int)_DAT_ffff12d2,(int)_DAT_ffff12ca,&DAT_ffff07b0);
  FUN_0010a354((int)_DAT_ffff12d4,(int)_DAT_ffff12cc,&DAT_ffff07b1);
  FUN_0010ab6c((int)_DAT_ffff12d2,(int)_DAT_ffff12ca,abStack_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07b3 | 2;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff07b3 & 0xfd;
  }
  DAT_ffff07b3 = bVar2;
  FUN_00001550(uVar1);
  FUN_0010abb0((int)_DAT_ffff12d4,(int)_DAT_ffff12cc);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07b3 | 4;
  if ((bStack_30 & 1) == 0) {
    bVar2 = DAT_ffff07b3 & 0xfb;
  }
  DAT_ffff07b3 = bVar2;
  FUN_00001550(uVar1);
  FUN_0010ab3c((int)DAT_ffff07ad);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07b3 | 1;
  if ((bStack_2c & 1) == 0) {
    bVar2 = DAT_ffff07b3 & 0xfe;
  }
  DAT_ffff07b3 = bVar2;
  FUN_00001550(uVar1);
  FUN_0010ab50(DAT_ffff07b3 & 1,(DAT_ffff07b3 & 2) != 0,(DAT_ffff07b3 & 4) != 0,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07b2 | 8;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff07b2 & 0xf7;
  }
  DAT_ffff07b2 = bVar2;
  FUN_00001550(uVar1);
  FUN_0010a2d8((DAT_ffff07b2 & 8) != 0,(int)DAT_ffff07ae,(int)DAT_ffff07b0,(int)DAT_ffff07b1,
               &DAT_ffff07af);
  return;
}

