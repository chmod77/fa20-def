
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c7828(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_3c [4];
  byte bStack_38;
  byte bStack_34;
  byte abStack_30 [4];
  byte local_2c [4];
  uint uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff3653;
  uStack_28 = (uint)((DAT_fffef32d & 2) != 0);
  FUN_000c9f58(0,(int)DAT_fffef2fd,(int)DAT_fffef2fc,(DAT_fffeeec2 & 4) != 0,uStack_28,
               (DAT_fffef32d & 0x20) != 0,((int)DAT_fffef06c & 0x80U) != 0,
               (DAT_ffff0001 & 0x10) != 0,DAT_fffeeec6 & 1,(DAT_fffeef76 & 8) != 0,_DAT_fffef328,
               DAT_ffff3697 & 1,(DAT_ffff3653 & 0x10) != 0,_v_Engine_Speed_OBD_copy_2ADA,
               &DAT_ffff0594,&DAT_ffff0eb0,&DAT_ffff0ef6);
  FUN_000cad70((DAT_fffef32d & 0x20) != 0,(int)DAT_fffeef33,&DAT_ffff05a4);
  FUN_000caff8(_DAT_ffff1544,_DAT_ffff1548,_DAT_ffff154c,_DAT_ffff1550,_DAT_ffff1554,_DAT_ffff1558,
               _DAT_ffff155c,_DAT_ffff1560,DAT_fffeeec6 & 1,&DAT_ffff1678);
  FUN_000ce22c(0,DAT_ffff6570 & 1,(int)_DAT_ffff0d44,local_3c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff057b | 1;
  if ((local_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff057b & 0xfe;
  }
  DAT_ffff057b = bVar2;
  FUN_00001550();
  FUN_000ce24c(0,(DAT_ffff6570 & 0x10) != 0,(int)_DAT_ffff0d44);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff057b | 2;
  if ((bStack_38 & 1) == 0) {
    bVar2 = DAT_ffff057b & 0xfd;
  }
  DAT_ffff057b = bVar2;
  FUN_00001550();
  FUN_000c3a1c(0,(DAT_ffff056e & 0x20) != 0,DAT_ffff3698 & 1,(DAT_fffeeec2 & 4) != 0,DAT_ffff0594,
               (DAT_ffff0012 & 0x20) != 0,_DAT_ffff390e,&DAT_ffff390e);
  FUN_000c3af8(0,(DAT_ffff056e & 0x20) != 0,DAT_ffff3698 & 1,(DAT_fffeeec2 & 4) != 0,DAT_ffff0594,
               (DAT_ffff0012 & 0x20) != 0,_DAT_ffff3910,&DAT_ffff3910);
  FUN_000c4738(_DAT_ffff1678,(int)_v_Engine_Speed_2994,DAT_fffeeec6 & 1,&DAT_ffff0edc);
  FUN_000cded0(0,(int)DAT_ffff0594,(int)_DAT_ffff390e);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff056e | 0x20;
  if ((bStack_34 & 1) == 0) {
    bVar2 = DAT_ffff056e & 0xdf;
  }
  DAT_ffff056e = bVar2;
  FUN_00001550();
  abStack_30[0] = DAT_ffff3697 & 1;
  FUN_000cde84(0,DAT_ffff3698 & 1,(DAT_fffeeec2 & 4) != 0,(DAT_ffff056e & 0x20) != 0,abStack_30[0],
               abStack_30);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff3697 | 1;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff3697 & 0xfe;
  }
  DAT_ffff3697 = bVar2;
  FUN_00001550();
  local_2c[0] = DAT_ffff3698 & 1;
  FUN_000cdf1c(0,(int)_DAT_ffff3910,(int)_DAT_ffff390e,(DAT_ffff056e & 0x20) != 0,
               (DAT_fffeeec2 & 4) != 0,local_2c[0],local_2c,&DAT_ffff0f12);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff3698 | 1;
  if ((local_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff3698 & 0xfe;
  }
  DAT_ffff3698 = bVar2;
  FUN_00001550(uVar1);
  return;
}

