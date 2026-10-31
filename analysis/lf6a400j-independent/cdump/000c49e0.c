
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c49e0(void)

{
  byte *pbVar1;
  byte bVar3;
  undefined4 uVar2;
  byte bVar4;
  byte local_b4;
  byte bStack_b0;
  byte bStack_ac;
  byte bStack_a8;
  byte bStack_a4;
  byte abStack_a0 [4];
  byte bStack_9c;
  byte bStack_98;
  byte bStack_94;
  byte bStack_90;
  byte bStack_8c;
  byte bStack_88;
  byte bStack_84;
  byte abStack_80 [4];
  byte abStack_7c [4];
  byte bStack_78;
  byte bStack_74;
  byte bStack_70;
  byte abStack_6c [4];
  byte abStack_68 [4];
  byte bStack_64;
  byte bStack_60;
  byte abStack_5c [4];
  byte bStack_58;
  byte bStack_54;
  byte bStack_50;
  byte bStack_4c;
  byte bStack_48;
  byte bStack_44;
  byte bStack_40;
  byte bStack_3c;
  byte bStack_38;
  byte abStack_34 [4];
  undefined1 *puStack_30;
  undefined2 uStack_2c;
  byte *pbStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0541;
  puStack_30 = &DAT_ffff0541;
  FUN_000c33f4(DAT_fffef058 & 1,(DAT_fffef058 & 2) != 0,&DAT_ffff0555);
  FUN_000c33fc();
  FUN_000c342c((DAT_fffef060 & 0x10) != 0,(DAT_fffef060 & 0x20) != 0,(DAT_fffef060 & 0x40) != 0,
               &DAT_ffff0557);
  FUN_000c3858();
  FUN_000c88ac();
  FUN_000ca278();
  FUN_000ca848((DAT_fffef05f & 0x10) != 0,(DAT_fffef05f & 0x20) != 0,(DAT_fffef05f & 0x40) != 0,
               ((int)(char)DAT_fffef05f & 0x80U) != 0);
  FUN_000caa88();
  FUN_000cad88((DAT_fffef059 & 0x10) != 0,(DAT_fffef059 & 0x20) != 0,(DAT_fffef059 & 0x40) != 0,
               ((int)(char)DAT_fffef059 & 0x80U) != 0);
  FUN_000cb1e0();
  FUN_000cb474((DAT_ffff056f & 0x10) != 0,(DAT_ffff056f & 4) != 0,(int)DAT_fffef088);
  FUN_000cb77c(DAT_fffef07b & 1,(int)DAT_fffef07e,&DAT_ffff05af);
  FUN_000cbe50((DAT_fffeed35 & 4) != 0,DAT_fffef06e & 1,(DAT_fffef06b & 4) != 0);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0567 | 2;
  if ((local_b4 & 1) == 0) {
    bVar3 = DAT_ffff0567 & 0xfd;
  }
  pbStack_28 = &DAT_fffef06b;
  DAT_ffff0567 = bVar3;
  FUN_00001550();
  FUN_000cbe7c((DAT_ffff056f & 0x10) != 0,(DAT_fffef08a & 4) != 0,(DAT_fffef316 & 2) != 0);
  FUN_00001550(0xf0);
  pbVar1 = pbStack_28;
  bVar3 = DAT_ffff056c | 8;
  if ((bStack_b0 & 1) == 0) {
    bVar3 = DAT_ffff056c & 0xf7;
  }
  DAT_ffff056c = bVar3;
  FUN_00001550();
  FUN_000cc364((DAT_ffff056f & 0x10) != 0,(DAT_ffff056f & 4) != 0,(int)DAT_fffef088);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff056c | 2;
  if ((bStack_ac & 1) == 0) {
    bVar3 = DAT_ffff056c & 0xfd;
  }
  DAT_ffff056c = bVar3;
  FUN_00001550();
  FUN_000cc2ac((DAT_ffff056f & 0x10) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff056c | 4;
  if ((bStack_a8 & 1) == 0) {
    bVar3 = DAT_ffff056c & 0xfb;
  }
  DAT_ffff056c = bVar3;
  FUN_00001550(uVar2);
  FUN_000cc460(DAT_fffef05e & 1,(DAT_fffef05e & 2) != 0,(DAT_fffef05e & 4) != 0,
               (DAT_fffef05e & 8) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff0569 | 0x40;
  if ((bStack_a4 & 1) == 0) {
    bVar3 = DAT_ffff0569 & 0xbf;
  }
  DAT_ffff0569 = bVar3;
  FUN_00001550(uVar2);
  FUN_000cc8f8(DAT_fffef085 & 1,(DAT_ffff0789 & 4) != 0,abStack_a0);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff056c | 1;
  if ((abStack_a0[0] & 1) == 0) {
    bVar3 = DAT_ffff056c & 0xfe;
  }
  DAT_ffff056c = bVar3;
  FUN_00001550();
  FUN_000cc9fc((DAT_fffef085 & 0x20) != 0,(DAT_fffef316 & 2) != 0,(DAT_fffef3e1 & 0x20) != 0);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff056c | 0x20;
  if ((bStack_9c & 1) == 0) {
    bVar3 = DAT_ffff056c & 0xdf;
  }
  DAT_ffff056c = bVar3;
  FUN_00001550();
  FUN_000cc908((DAT_ffff0789 & 4) != 0,(DAT_fffef085 & 0x20) != 0,(DAT_fffef316 & 2) != 0,
               (DAT_fffef3e1 & 0x20) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff056c | 0x10;
  if ((bStack_98 & 1) == 0) {
    bVar3 = DAT_ffff056c & 0xef;
  }
  DAT_ffff056c = bVar3;
  FUN_00001550(uVar2);
  FUN_000ccc0c((int)DAT_ffff0564,((int)(char)DAT_ffff0570 & 0x80U) != 0,(DAT_ffff0570 & 0x40) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff0569 | 8;
  if ((bStack_94 & 1) == 0) {
    bVar3 = DAT_ffff0569 & 0xf7;
  }
  DAT_ffff0569 = bVar3;
  FUN_00001550(uVar2);
  FUN_000ccc6c(DAT_fffef059 & 1,(DAT_fffef058 & 4) != 0,DAT_fffef312 & 1,(pbVar1[3] & 2) != 0);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff056a | 0x80;
  if ((bStack_90 & 1) == 0) {
    bVar3 = DAT_ffff056a & 0x7f;
  }
  DAT_ffff056a = bVar3;
  FUN_00001550();
  FUN_000cd548((DAT_ffff0568 & 0x10) != 0,(DAT_ffff0568 & 8) != 0,1);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff0568 | 0x20;
  if ((bStack_8c & 1) == 0) {
    bVar3 = DAT_ffff0568 & 0xdf;
  }
  DAT_ffff0568 = bVar3;
  FUN_00001550(uVar2);
  FUN_000cdaa8(DAT_fffef312 & 1);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0567 | 8;
  if ((bStack_88 & 1) == 0) {
    bVar3 = DAT_ffff0567 & 0xf7;
  }
  DAT_ffff0567 = bVar3;
  FUN_00001550();
  FUN_000cdd08((*pbVar1 & 2) != 0,(int)_DAT_fffeed4a,(int)DAT_fffef2e8,(DAT_fffee710 & 0x20) != 0);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0567 | 4;
  if ((bStack_84 & 1) == 0) {
    bVar3 = DAT_ffff0567 & 0xfb;
  }
  DAT_ffff0567 = bVar3;
  FUN_00001550();
  FUN_000cdfd0((pbVar1[2] & 2) != 0,pbVar1[2] & 1,abStack_80,puStack_30 + 0x1e);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0569 | 0x80;
  if ((abStack_80[0] & 1) == 0) {
    bVar3 = DAT_ffff0569 & 0x7f;
  }
  DAT_ffff0569 = bVar3;
  FUN_00001550();
  FUN_000ce138(((int)(char)pbVar1[4] & 0x80U) != 0,(DAT_ffff0000 & 2) != 0,abStack_7c);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0567 | 1;
  if ((abStack_7c[0] & 1) == 0) {
    bVar3 = DAT_ffff0567 & 0xfe;
  }
  DAT_ffff0567 = bVar3;
  FUN_00001550();
  FUN_000ce2e8((DAT_fffef152 & 0x20) != 0);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0567 | 0x80;
  if ((bStack_78 & 1) == 0) {
    bVar3 = DAT_ffff0567 & 0x7f;
  }
  DAT_ffff0567 = bVar3;
  FUN_00001550();
  FUN_000ce654((DAT_fffef310 & 0x10) != 0,(DAT_fffef310 & 8) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff0569 | 4;
  if ((bStack_70 & 1) == 0) {
    bVar3 = DAT_ffff0569 & 0xfb;
  }
  bVar4 = DAT_ffff056b | 0x20;
  if ((bStack_74 & 1) == 0) {
    bVar4 = DAT_ffff056b & 0xdf;
  }
  DAT_ffff0569 = bVar3;
  DAT_ffff056b = bVar4;
  FUN_00001550(uVar2);
  FUN_000c3dac((int)DAT_ffff0598);
  FUN_000c9eac((int)_DAT_fffeed4a,(int)DAT_fffef2e8,(int)_DAT_ffff0ada,(DAT_ffff0567 & 4) != 0);
  FUN_000c9f54();
  puStack_30 = puStack_30 + 0x6c;
  FUN_000cb430((DAT_ffff057a & 0x10) != 0,(DAT_ffff056c & 4) != 0,(int)_DAT_ffff0f24);
  FUN_000cb9e8((int)_DAT_fffef070,(DAT_ffff0569 & 4) != 0,&DAT_ffff0f40);
  FUN_000cba28((DAT_ffff0569 & 4) != 0,(int)_DAT_fffef31c,&DAT_ffff0f42);
  FUN_000cba68((DAT_ffff0569 & 4) != 0,(int)_DAT_fffef072,&DAT_ffff0f44);
  FUN_000cbaa8((DAT_ffff0569 & 4) != 0,(int)_DAT_fffef074,&DAT_ffff0f46);
  FUN_000cbae8((DAT_ffff0569 & 4) != 0,(int)_DAT_fffef076,&DAT_ffff0f48);
  FUN_000cddec((int)DAT_ffff059f,abStack_6c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff0567 | 0x20;
  if ((abStack_6c[0] & 1) == 0) {
    bVar3 = DAT_ffff0567 & 0xdf;
  }
  DAT_ffff0567 = bVar3;
  FUN_00001550(uVar2);
  FUN_000ce094((int)DAT_ffff059f,abStack_68);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0567 | 0x10;
  if ((abStack_68[0] & 1) == 0) {
    bVar3 = DAT_ffff0567 & 0xef;
  }
  DAT_ffff0567 = bVar3;
  FUN_00001550();
  FUN_000ce318((DAT_ffff0567 & 8) != 0,DAT_fffef312 & 1,DAT_fffef059 & 1,(DAT_fffef058 & 4) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff056a | 0x40;
  if ((bStack_64 & 1) == 0) {
    bVar3 = DAT_ffff056a & 0xbf;
  }
  DAT_ffff056a = bVar3;
  FUN_00001550(uVar2);
  FUN_000cb2dc((int)DAT_ffff05ad,(int)DAT_ffff05ae,((int)(char)DAT_fffef152 & 0x80U) != 0);
  FUN_000cc17c((DAT_fffef152 & 0x20) != 0,DAT_fffeeec6 & 1,(DAT_fffeef76 & 0x40) != 0,
               (DAT_ffff056a & 0x40) != 0);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff056d | 1;
  if ((bStack_60 & 1) == 0) {
    bVar3 = DAT_ffff056d & 0xfe;
  }
  DAT_ffff056d = bVar3;
  FUN_00001550();
  FUN_000ccf1c((DAT_ffff0567 & 0x20) != 0,(DAT_ffff0567 & 0x10) != 0,abStack_5c);
  uStack_2c = 0xf0;
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_fffee715 | 0x40;
  if ((abStack_5c[0] & 1) == 0) {
    bVar3 = DAT_fffee715 & 0xbf;
  }
  DAT_fffee715 = bVar3;
  FUN_00001550(uVar2);
  FUN_000c3654(DAT_ffff056d & 1,(int)_DAT_fffef14a,(int)_v_Accelerator_Pedal_Angle_EEF8,
               &DAT_ffff0eb8);
  FUN_000cc1a0(DAT_ffff056d & 1,(int)_DAT_ffff0eb8,(int)_v_Accelerator_Pedal_Angle_EEF8,
               (int)_DAT_fffeeed0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff056d | 4;
  if ((bStack_54 & 1) == 0) {
    bVar3 = DAT_ffff056d & 0xfb;
  }
  DAT_ffff056d = bVar3 | 2;
  if ((bStack_58 & 1) == 0) {
    DAT_ffff056d = bVar3 & 0xfd;
  }
  FUN_00001550(uVar2);
  FUN_000cc0d0(DAT_ffff056d & 1,(int)_DAT_ffff0eb8,(int)_v_Accelerator_Pedal_Angle_EEF8,
               (int)_DAT_fffeeed0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff056b | 1;
  if ((bStack_4c & 1) == 0) {
    bVar3 = DAT_ffff056b & 0xfe;
  }
  DAT_ffff056b = bVar3 | 4;
  if ((bStack_50 & 1) == 0) {
    DAT_ffff056b = bVar3 & 0xfb;
  }
  FUN_00001550(uVar2);
  FUN_000ce3b8((int)_v_Accelerator_Pedal_Angle_EEF8,(int)_DAT_ffff0eb6,DAT_ffff056b & 1,
               (int)_DAT_fffeeed0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff056c | 0x40;
  if ((bStack_48 & 1) == 0) {
    bVar3 = DAT_ffff056c & 0xbf;
  }
  DAT_ffff056c = bVar3;
  FUN_00001550(uVar2);
  FUN_000ce450((int)_v_Accelerator_Pedal_Angle_EEF8,(int)_DAT_ffff0eba,(DAT_ffff056d & 4) != 0,
               (int)_DAT_fffeeed0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff056c | 0x80;
  if ((bStack_44 & 1) == 0) {
    bVar3 = DAT_ffff056c & 0x7f;
  }
  DAT_ffff056c = bVar3;
  FUN_00001550(uVar2);
  FUN_000ce4e8(DAT_ffff056b & 1,(int)_v_Accelerator_Pedal_Angle_EEF8,(int)DAT_ffff0588);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff056a | 1;
  if ((bStack_40 & 1) == 0) {
    bVar3 = DAT_ffff056a & 0xfe;
  }
  DAT_ffff056a = bVar3;
  FUN_00001550(uVar2);
  FUN_000c92e4((int)DAT_ffff0588,DAT_fffef317 & 1,(int)DAT_ffff0585);
  FUN_000ce33c((int)DAT_ffff0541,(int)_DAT_fffeeede,(int)DAT_ffff3669,(DAT_ffff056c & 0x40) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff056b | 0x40;
  if ((bStack_3c & 1) == 0) {
    bVar3 = DAT_ffff056b & 0xbf;
  }
  DAT_ffff056b = bVar3;
  FUN_00001550(uVar2);
  FUN_000c9a10((int)DAT_ffff0584,(int)DAT_ffff0586,(int)DAT_ffff0588,&DAT_ffff0585);
  FUN_000cd034(0,(DAT_fffef319 & 2) != 0,0,(int)DAT_ffff0585);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff056a | 0x20;
  if ((bStack_38 & 1) == 0) {
    bVar3 = DAT_ffff056a & 0xdf;
  }
  DAT_ffff056a = bVar3;
  FUN_00001550();
  FUN_000cd0e8((DAT_ffff056a & 0x20) != 0,(int)_DAT_fffeeede,abStack_34);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff056a | 0x10;
  if ((abStack_34[0] & 1) == 0) {
    bVar3 = DAT_ffff056a & 0xef;
  }
  DAT_ffff056a = bVar3;
  FUN_00001550(uVar2);
  return;
}

