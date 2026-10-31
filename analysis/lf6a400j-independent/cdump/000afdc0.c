
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000afdc0(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_fffef054;
  puStack_28 = &DAT_ffff0d3c;
  FUN_000af97c(0,(int)DAT_fffef067);
  FUN_000b047c(0,(int)_DAT_fffef0da,&DAT_ffff04ea);
  FUN_000b10fc((DAT_fffef152 & 0x20) != 0,(int)_DAT_fffef0da,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)_DAT_fffeeede,local_38);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff04e8 | 0x40;
  if ((local_38[0] & 1) == 0) {
    bVar2 = DAT_ffff04e8 & 0xbf;
  }
  DAT_ffff04e8 = bVar2;
  FUN_00001550();
  FUN_000b12e8((DAT_ffff064a & 0x40) != 0,(DAT_ffff6559 & 8) != 0,1,(int)_DAT_fffef0da,DAT_fffef082,
               _v_Engine_Speed_OBD_copy_2ADA,DAT_ffff03a0,_DAT_fffeeee2,DAT_ffff0585,abStack_34);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff04e8 | 0x20;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff04e8 & 0xdf;
  }
  DAT_ffff04e8 = bVar2;
  FUN_00001550();
  FUN_000afa48((DAT_ffff04e8 & 0x40) != 0,puStack_28 + 2);
  FUN_000afa74((DAT_ffff04e8 & 0x40) != 0,puStack_28 + 4);
  FUN_000b0348(0,(int)_DAT_fffeeede,(DAT_ffff04e8 & 0x20) != 0,&DAT_ffff04e9,puStack_28 + 0xe,
               puStack_28 + 0x10,puStack_28 + 0x16,puStack_28 + 0x18);
  FUN_000b0ef8(0,(int)_DAT_fffeeede,(int)DAT_fffef082,(DAT_ffff04e8 & 0x20) != 0,puStack_28 + 0xc,
               puStack_28 + 0x12,puStack_28 + 0x14,puStack_28 + 0x1a,puStack_28 + 0x1c,
               puStack_28 + 10);
  FUN_000b063c(1,DAT_fffef09e & 1,((int)(char)DAT_fffef09e & 0x80U) != 0,(int)DAT_fffef082,
               DAT_ffff04ea,DAT_ffff04e9,&DAT_ffff04ee);
  FUN_000b0c00((DAT_ffff04e8 & 0x40) != 0,(int)_DAT_ffff0d3e,(int)_DAT_ffff0d40,&DAT_ffff04ef);
  FUN_000b0c48((DAT_fffeeec2 & 4) != 0,DAT_ffff091f & 1,(DAT_fffef32a & 2) != 0,DAT_fffef32a & 1,
               (DAT_fffef054 & 0x20) != 0,((int)DAT_fffef1d4 & 0x80U) != 0,DAT_fffef09e & 1,0,
               DAT_fffef066 & 1,_DAT_fffeeede,DAT_ffff05aa,_DAT_fffeef10,DAT_ffff04ee,DAT_ffff04ef,0
               ,DAT_fffeeec6 & 1,&DAT_ffff04ed);
  FUN_000afd84(0,(int)DAT_ffff04ed,(int)DAT_ffff04ef,&DAT_ffff04e7);
  FUN_000b0234(0,(int)_DAT_fffeeee2,(int)DAT_ffff04e7,(int)_DAT_ffff0d48,_DAT_ffff0d3c,
               puStack_28 + 8);
  FUN_000b056c(0,(int)DAT_ffff05aa,(int)_DAT_ffff0d44,&DAT_ffff04ec,&DAT_ffff04eb);
  puStack_28 = puStack_28 + 6;
  FUN_000afaa0(0,DAT_ffff091f & 1,(int)_DAT_ffff0d42,(int)DAT_ffff04ed,DAT_ffff04ec,
               (DAT_fffef054 & 0x20) != 0,DAT_fffeeec6 & 1,puStack_28);
  FUN_000afc80(0,DAT_ffff091f & 1,(int)_DAT_ffff0d42,(int)DAT_ffff04ed,DAT_ffff04ec,
               (DAT_fffef054 & 0x20) != 0,DAT_fffeeec6 & 1,&DAT_ffff04e6);
  FUN_000b1200(0,(int)DAT_ffff04e6,abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff6570 | 0x10;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff6570 & 0xef;
  }
  DAT_ffff6570 = bVar2;
  FUN_00001550(uVar1);
  FUN_000b1278(0,(int)DAT_ffff04e6,abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff6570 | 1;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff6570 & 0xfe;
  }
  DAT_ffff6570 = bVar2;
  FUN_00001550(uVar1);
  return;
}

