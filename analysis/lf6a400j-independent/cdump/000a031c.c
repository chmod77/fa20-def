
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a031c(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte local_14c [4];
  byte abStack_148 [4];
  byte abStack_144 [4];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  byte bStack_138;
  byte abStack_134 [4];
  byte abStack_130 [4];
  byte abStack_12c [4];
  byte bStack_128;
  byte abStack_124 [4];
  byte bStack_120;
  byte bStack_11c;
  byte bStack_118;
  byte bStack_114;
  byte bStack_110;
  byte bStack_10c;
  byte bStack_108;
  byte abStack_104 [4];
  byte abStack_100 [4];
  byte abStack_fc [4];
  byte bStack_f8;
  byte abStack_f4 [4];
  byte abStack_f0 [4];
  byte abStack_ec [4];
  byte abStack_e8 [4];
  undefined2 local_e4 [36];
  byte abStack_9c [4];
  byte abStack_98 [4];
  undefined1 local_94 [36];
  byte bStack_70;
  byte abStack_6c [4];
  byte local_68;
  byte local_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  char cStack_58;
  char cStack_54;
  byte bStack_50;
  byte bStack_4c;
  char cStack_48;
  byte bStack_44;
  byte bStack_40;
  byte bStack_3c;
  undefined1 *puStack_38;
  char cStack_34;
  char cStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff03e0;
  puStack_60 = &DAT_ffff03e0;
  FUN_0009ec30((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff09b4,&DAT_ffff04a3);
  puStack_5c = &DAT_ffff0c1a;
  FUN_0009ef18((int)DAT_ffff2a04,&DAT_ffff0c1c);
  FUN_0009ef60((int)DAT_ffff2a04,(int)v_Ignition_Total_Timing_046C,&DAT_ffff0c1e,&DAT_ffff0c22);
  FUN_0009f210((int)DAT_ffff29d3,&DAT_ffff04ab);
  FUN_0009f66c((int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff04ad,&DAT_ffff04ae);
  FUN_000a2f20((int)_v_Engine_Speed_2994,DAT_fffeeec6 & 1,(int)_DAT_ffff0e90,(int)_DAT_ffff09b4);
  FUN_000a3118((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff09b4,&DAT_ffff04bd,&DAT_ffff04bc);
  FUN_000a3b20((int)_v_Engine_Speed_OBD_copy_2ADA,local_14c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b5 | 4;
  if ((local_14c[0] & 1) == 0) {
    bVar3 = DAT_ffff04b5 & 0xfb;
  }
  DAT_ffff04b5 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a4ce4((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff09b4,abStack_148);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b7 | 8;
  if ((abStack_148[0] & 1) == 0) {
    bVar3 = DAT_ffff04b7 & 0xf7;
  }
  DAT_ffff04b7 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a5004((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff09b4,abStack_144);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b7 | 1;
  if ((abStack_144[0] & 1) == 0) {
    bVar3 = DAT_ffff04b7 & 0xfe;
  }
  DAT_ffff04b7 = bVar3;
  FUN_00001550(uVar2);
  FUN_0009fc80((int)DAT_ffff04ab,(int)_DAT_fffeecf0,(int)_DAT_fffeecf2,(int)_DAT_fffeecf4);
  for (uVar4 = 0; (uVar4 & 0xff) < 4; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xea78) = local_140[uVar4];
  }
  FUN_000a2fc0((int)DAT_ffff04ab,(int)DAT_ffff2a04,local_13c);
  puVar1 = puStack_5c;
  for (uVar4 = 0; (uVar4 & 0xff) < 4; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xe9d8) = local_13c[uVar4];
  }
  FUN_000a36b0((int)_DAT_ffff0c1c,(int)_DAT_ffff2986,puStack_5c + 0x18);
  FUN_000a36c0((int)_DAT_ffff2986,(int)_DAT_ffff0c1e,puVar1 + 0x1a);
  FUN_000a3738((int)_DAT_ffff0c1e,(int)_DAT_ffff0c1c,puStack_60 + 0xdf);
  cStack_58 = '\x01' - ((DAT_fffef32c & 2) == 0);
  cStack_54 = '\x01' - ((DAT_fffef32b & 4) == 0);
  bStack_50 = DAT_ffff064c & 1;
  bStack_4c = DAT_ffff03e0 & 1;
  cStack_48 = '\x01' - ((DAT_ffff03e0 & 4) == 0);
  bStack_44 = DAT_ffff04b4 & 1;
  bStack_40 = DAT_ffff06da & 1;
  bStack_3c = DAT_fffeef77 & 1;
  puStack_38 = &DAT_ffff3667;
  FUN_000a3b64(DAT_fffeeec6 & 1,(int)cStack_58,(int)cStack_54);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b5 | 2;
  if ((bStack_138 & 1) == 0) {
    bVar3 = DAT_ffff04b5 & 0xfd;
  }
  uStack_28 = 0xffff1628;
  DAT_ffff04b5 = bVar3;
  FUN_00001550();
  cStack_34 = '\x01' - ((DAT_ffff04b5 & 4) == 0);
  cStack_30 = '\x01' - ((DAT_ffff04b6 & 0x20) == 0);
  uStack_2c = 0;
  FUN_0009f6c4((int)cStack_34,(int)cStack_30,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff09b4);
  FUN_000a432c((int)DAT_ffff04ab,(int)DAT_ffff04bf,0xffff1588,abStack_134);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b8 | 1;
  if ((abStack_134[0] & 1) == 0) {
    bVar3 = DAT_ffff04b8 & 0xfe;
  }
  DAT_ffff04b8 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a4350((int)DAT_ffff04ab,(int)DAT_ffff04bf,0xffff1588,abStack_130);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b8 | 2;
  if ((abStack_130[0] & 1) == 0) {
    bVar3 = DAT_ffff04b8 & 0xfd;
  }
  DAT_ffff04b8 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a4374((int)DAT_ffff04ab,(int)DAT_ffff04bf,0xffff1588,abStack_12c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b8 | 4;
  if ((abStack_12c[0] & 1) == 0) {
    bVar3 = DAT_ffff04b8 & 0xfb;
  }
  DAT_ffff04b8 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a4398((int)DAT_ffff04ab);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b8 | 8;
  if ((bStack_128 & 1) == 0) {
    bVar3 = DAT_ffff04b8 & 0xf7;
  }
  DAT_ffff04b8 = bVar3;
  FUN_00001550(uVar2);
  FUN_0009f368((int)DAT_ffff04ae,(int)DAT_ffff04af,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (DAT_ffff04b5 & 2) != 0);
  FUN_000a3e4c((int)DAT_ffff04af,abStack_124);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b5 | 8;
  if ((abStack_124[0] & 1) == 0) {
    bVar3 = DAT_ffff04b5 & 0xf7;
  }
  DAT_ffff04b5 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a3eb0((int)DAT_ffff04af);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b5 | 1;
  if ((bStack_120 & 1) == 0) {
    bVar3 = DAT_ffff04b5 & 0xfe;
  }
  DAT_ffff04b5 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a5178((int)DAT_ffff04af,(DAT_ffff04b5 & 0x10) != 0,(DAT_ffff04b5 & 2) != 0,
               (int)_v_Engine_Speed_OBD_copy_2ADA);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b5 | 0x20;
  if ((bStack_11c & 1) == 0) {
    bVar3 = DAT_ffff04b5 & 0xdf;
  }
  DAT_ffff04b5 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a524c((int)DAT_ffff04ab,DAT_ffff04b8 & 1,(int)DAT_ffff04bf,0xffff1588);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b8 | 0x10;
  if ((bStack_118 & 1) == 0) {
    bVar3 = DAT_ffff04b8 & 0xef;
  }
  DAT_ffff04b8 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a5298((int)DAT_ffff04ab,(DAT_ffff04b8 & 2) != 0,(int)DAT_ffff04bf,0xffff1588);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b8 | 0x20;
  if ((bStack_114 & 1) == 0) {
    bVar3 = DAT_ffff04b8 & 0xdf;
  }
  DAT_ffff04b8 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a52e8((int)DAT_ffff04ab,(DAT_ffff04b8 & 4) != 0,(int)DAT_ffff04bf,0xffff1588);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b8 | 0x40;
  if ((bStack_110 & 1) == 0) {
    bVar3 = DAT_ffff04b8 & 0xbf;
  }
  DAT_ffff04b8 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a5338((int)DAT_ffff04ab,(DAT_ffff04b8 & 8) != 0,(int)DAT_ffff04bf,0xffff1588);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b8 | 0x80;
  if ((bStack_10c & 1) == 0) {
    bVar3 = DAT_ffff04b8 & 0x7f;
  }
  DAT_ffff04b8 = bVar3;
  FUN_00001550(uVar2);
  FUN_0009f014((int)DAT_ffff04ad,(int)DAT_ffff04af,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)_DAT_ffff09b4);
  FUN_000a4fd8((int)DAT_ffff04ba,DAT_ffff04b7 & 1,puStack_38[1] & 1);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b6 | 0x20;
  if ((bStack_108 & 1) == 0) {
    bVar3 = DAT_ffff04b6 & 0xdf;
  }
  DAT_ffff04b6 = bVar3;
  FUN_00001550();
  FUN_0009fff8((DAT_ffff04b6 & 0x20) != 0,DAT_fffef32d & 1,(DAT_fffeeec2 & 2) != 0);
  FUN_000a35c8((DAT_ffff04b6 & 0x20) != 0,(DAT_fffef32b & 8) != 0,DAT_ffff04b4 & 1,
               ((int)DAT_ffff2a03 & 0x80U) != 0);
  FUN_0009f9d8((int)DAT_ffff04b1,(int)DAT_ffff04be,DAT_fffeeec6 & 1,(int)DAT_ffff3667);
  FUN_000a3f78((int)DAT_ffff04be,(int)DAT_ffff04b1,abStack_104);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b7 | 0x20;
  if ((abStack_104[0] & 1) == 0) {
    bVar3 = DAT_ffff04b7 & 0xdf;
  }
  DAT_ffff04b7 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a4e44((int)DAT_ffff04b1,abStack_100);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b6 | 1;
  if ((abStack_100[0] & 1) == 0) {
    bVar3 = DAT_ffff04b6 & 0xfe;
  }
  DAT_ffff04b6 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a4f94((int)DAT_ffff04be,abStack_fc);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b6 | 0x40;
  if ((abStack_fc[0] & 1) == 0) {
    bVar3 = DAT_ffff04b6 & 0xbf;
  }
  DAT_ffff04b6 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a5388((int)DAT_ffff04be);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b7 | 0x40;
  if ((bStack_f8 & 1) == 0) {
    bVar3 = DAT_ffff04b7 & 0xbf;
  }
  DAT_ffff04b7 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a4e60(DAT_ffff04b6 & 1,(DAT_ffff04b6 & 0x10) != 0,abStack_f4,puStack_5c + 0xc);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b6 | 8;
  if ((abStack_f4[0] & 1) == 0) {
    bVar3 = DAT_ffff04b6 & 0xf7;
  }
  DAT_ffff04b6 = bVar3;
  FUN_00001550(uVar2);
  FUN_0009ea38(DAT_ffff04b5 & 1,(DAT_ffff04b6 & 8) != 0,(DAT_fffef32b & 8) != 0,DAT_ffff04b4 & 1);
  FUN_0009f15c((int)DAT_ffff04be,(int)DAT_ffff04b1,(int)DAT_ffff04af,(int)DAT_ffff04a2);
  puStack_60 = puStack_60 + 0xcc;
  FUN_0009f25c((int)DAT_ffff04a2);
  FUN_000a3f0c((int)DAT_ffff04af,(int)DAT_ffff04a2,abStack_f0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b7 | 0x80;
  if ((abStack_f0[0] & 1) == 0) {
    bVar3 = DAT_ffff04b7 & 0x7f;
  }
  DAT_ffff04b7 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a50f0((int)DAT_ffff04be,(int)DAT_ffff04a2,abStack_ec);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b6 | 0x10;
  if ((abStack_ec[0] & 1) == 0) {
    bVar3 = DAT_ffff04b6 & 0xef;
  }
  DAT_ffff04b6 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a5128((int)DAT_ffff04a2,(DAT_ffff04b5 & 0x40) != 0,(int)DAT_ffff04bd,abStack_e8);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b5 | 0x80;
  if ((abStack_e8[0] & 1) == 0) {
    bVar3 = DAT_ffff04b5 & 0x7f;
  }
  DAT_ffff04b5 = bVar3;
  FUN_00001550(uVar2);
  puStack_5c = puStack_5c + 0x16;
  FUN_000a343c((int)DAT_ffff3667,DAT_fffeeec6 & 1,(int)DAT_ffff04ac,(int)DAT_ffff04b1);
  puStack_38 = puStack_38 + 2;
  FUN_000a35a8((int)_DAT_ffff0c30);
  FUN_0009e6ce((int)DAT_ffff04a3,(int)DAT_ffff04b1,(int)DAT_ffff04a2,(int)DAT_ffff04ba);
  iVar5 = 0;
  for (bVar3 = 0; bVar3 < 0x23; bVar3 = bVar3 + 1) {
    *(undefined2 *)(iVar5 + -0xc764) = *(undefined2 *)((int)local_e4 + iVar5);
    iVar5 = iVar5 + 2;
  }
  FUN_0009eee0((int)DAT_ffff04ba,(int)DAT_ffff3669,(DAT_fffef32b & 8) != 0,&DAT_ffff04a4);
  FUN_0009f0f8((int)DAT_ffff3669,(int)DAT_ffff04b1,(int)DAT_ffff04be,&DAT_ffff04aa);
  FUN_000a4dd4((int)DAT_ffff04a9,(int)DAT_ffff3669,abStack_98,abStack_9c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b6 | 2;
  if ((abStack_98[0] & 1) == 0) {
    bVar3 = DAT_ffff04b6 & 0xfd;
  }
  DAT_ffff04b6 = bVar3 | 4;
  if ((abStack_9c[0] & 1) == 0) {
    DAT_ffff04b6 = bVar3 & 0xfb;
  }
  FUN_00001550(uVar2);
  FUN_0009eea8((int)DAT_ffff04a3,0xffff389c,&DAT_ffff0c1a);
  FUN_000a43bc(0xffff389c,(int)DAT_ffff04a2,(int)DAT_ffff04a3,(int)DAT_ffff04ba);
  for (uVar4 = 0; (uVar4 & 0xff) < 0x23; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xc996) = local_94[uVar4];
  }
  FUN_000a304c((int)_DAT_ffff0c1a,(DAT_ffff06da & 2) != 0,((int)DAT_ffff2a03 & 0x80U) != 0,
               (int)DAT_ffff04ba);
  FUN_000a3780(DAT_ffff04b7 & 1,(DAT_ffff04b7 & 2) != 0,(int)DAT_ffff04ba,(int)DAT_ffff04bb);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b7 | 4;
  if ((bStack_70 & 1) == 0) {
    bVar3 = DAT_ffff04b7 & 0xfb;
  }
  DAT_ffff04b7 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a4c94((int)DAT_ffff04a2,(DAT_ffff04b7 & 4) != 0,abStack_6c);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b7 | 0x10;
  if ((abStack_6c[0] & 1) == 0) {
    bVar3 = DAT_ffff04b7 & 0xef;
  }
  DAT_ffff04b7 = bVar3;
  FUN_00001550();
  local_68 = 1 - ((DAT_ffff3668 & 4) == 0);
  FUN_000a4ec8((DAT_ffff04b7 & 4) != 0,(int)DAT_ffff04b1,(int)DAT_ffff04af,DAT_fffeeec6 & 1);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff3668 | 4;
  if ((local_68 & 1) == 0) {
    bVar3 = DAT_ffff3668 & 0xfb;
  }
  DAT_ffff3668 = bVar3;
  FUN_00001550(uVar2);
  local_64 = DAT_ffff3668 & 1;
  FUN_000a4ef8((int)DAT_ffff04aa,(int)DAT_ffff3667,(DAT_ffff04b7 & 4) != 0,(int)DAT_ffff04b1);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff3668 | 1;
  if ((local_64 & 1) == 0) {
    bVar3 = DAT_ffff3668 & 0xfe;
  }
  DAT_ffff3668 = bVar3;
  FUN_00001550(uVar2);
  return;
}

