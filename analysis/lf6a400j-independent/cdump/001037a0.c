
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001037a0(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_58 [4];
  byte abStack_54 [4];
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
  byte abStack_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [4];
  undefined1 *local_14;
  
  local_14 = &DAT_ffff0782;
  FUN_001044fc((int)_DAT_ffff2ae4,&DAT_ffff1290);
  FUN_00104838((int)DAT_ffff07a3,&DAT_ffff07a4);
  FUN_00104a68((int)DAT_ffff0585,&DAT_ffff07a5);
  FUN_00105674((int)_v_Engine_Speed_OBD_copy_2ADA,&DAT_ffff12a8);
  FUN_00106594((int)_DAT_ffff12b0,&DAT_ffff12b2);
  FUN_00106598((int)_DAT_ffff147c,&DAT_ffff12b4);
  FUN_00107550(DAT_ffff095a & 1,local_58);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0792 | 1;
  if ((local_58[0] & 1) == 0) {
    bVar2 = DAT_ffff0792 & 0xfe;
  }
  DAT_ffff0792 = bVar2;
  FUN_00001550(uVar1);
  FUN_0010754c(DAT_fffef3e9 & 1,abStack_54);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0791 | 1;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff0791 & 0xfe;
  }
  DAT_ffff0791 = bVar2;
  FUN_00001550();
  FUN_00107558((DAT_ffff095a & 2) != 0,abStack_50);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0792 | 2;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff0792 & 0xfd;
  }
  DAT_ffff0792 = bVar2;
  FUN_00001550();
  FUN_00107554((DAT_fffef3e9 & 2) != 0,abStack_4c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0791 | 2;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff0791 & 0xfd;
  }
  DAT_ffff0791 = bVar2;
  FUN_00001550();
  FUN_00107cb4((DAT_fffef3ea & 4) != 0,abStack_48);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0790 | 4;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff0790 & 0xfb;
  }
  DAT_ffff0790 = bVar2;
  FUN_00001550();
  FUN_00107f8c((DAT_ffff056f & 0x10) != 0,abStack_44);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0786 | 0x10;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff0786 & 0xef;
  }
  DAT_ffff0786 = bVar2;
  FUN_00001550(uVar1);
  FUN_00107f90(DAT_ffff056c & 1,abStack_40);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0783 | 1;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff0783 & 0xfe;
  }
  DAT_ffff0783 = bVar2;
  FUN_00001550();
  FUN_00108008((DAT_ffff056f & 0x40) != 0,abStack_3c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0786 | 0x40;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff0786 & 0xbf;
  }
  DAT_ffff0786 = bVar2;
  FUN_00001550();
  FUN_001081e4((DAT_fffef085 & 8) != 0,abStack_38);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0799 | 8;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff0799 & 0xf7;
  }
  DAT_ffff0799 = bVar2;
  FUN_00001550();
  FUN_001084dc((DAT_ffff0789 & 4) != 0,abStack_34);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff078a | 4;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff078a & 0xfb;
  }
  DAT_ffff078a = bVar2;
  FUN_00001550();
  FUN_001084e0((DAT_fffef3e9 & 4) != 0,abStack_30);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0791 | 4;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff0791 & 0xfb;
  }
  DAT_ffff0791 = bVar2;
  FUN_00001550();
  FUN_001084e4((DAT_ffff0569 & 8) != 0,abStack_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0784 | 8;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0784 & 0xf7;
  }
  DAT_ffff0784 = bVar2;
  FUN_00001550();
  FUN_001084e8(((int)DAT_ffff056a & 0x80U) != 0,abStack_28);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0785 | 0x80;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0785 & 0x7f;
  }
  DAT_ffff0785 = bVar2;
  FUN_00001550();
  FUN_001088b4((DAT_fffef3ea & 0x40) != 0,abStack_24);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0790 | 0x40;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff0790 & 0xbf;
  }
  DAT_ffff0790 = bVar2;
  FUN_00001550();
  FUN_00108a58((DAT_fffef3e9 & 8) != 0,abStack_20);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0791 | 8;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff0791 & 0xf7;
  }
  DAT_ffff0791 = bVar2;
  FUN_00001550();
  FUN_0010911c(((int)DAT_fffeef76 & 0x80U) != 0,abStack_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0798 | 0x80;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff0798 & 0x7f;
  }
  DAT_ffff0798 = bVar2;
  FUN_00001550(uVar1);
  FUN_00109d00(DAT_ffff0934 & 1,abStack_18);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0782 | 1;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff0782 & 0xfe;
  }
  DAT_ffff0782 = bVar2;
  FUN_00001550(uVar1);
  return;
}

