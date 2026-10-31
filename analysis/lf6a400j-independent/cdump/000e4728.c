
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e4728(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &v_Engine_Speed_OBD_copy_2ADA;
  FUN_000e4cc4((int)_DAT_fffeeee2,(int)_DAT_fffeeede,(int)DAT_ffff03a0,
               (int)_v_Engine_Speed_OBD_copy_2ADA,_DAT_fffeeed6,(int)_DAT_fffef146,DAT_ffff03ac,
               DAT_ffff0557,((int)DAT_fffeef76 & 0x80U) != 0,0,_DAT_ffff0d70,local_38);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06da | 0x20;
  if ((local_38[0] & 1) == 0) {
    bVar2 = DAT_ffff06da & 0xdf;
  }
  DAT_ffff06da = bVar2;
  FUN_00001550();
  FUN_000e49f4((int)_DAT_fffeeee2,(int)_DAT_fffeeede,(int)DAT_ffff03a0,
               (int)_v_Engine_Speed_OBD_copy_2ADA,_DAT_fffeeed6,(int)_DAT_fffef146,DAT_ffff0400,
               DAT_ffff03ac,DAT_ffff0557,((int)DAT_fffeef76 & 0x80U) != 0,0,(DAT_ffff04b6 & 8) != 0,
               DAT_ffff04b4 & 1,_DAT_ffff0d70,0,DAT_ffff3669,abStack_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06da | 4;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff06da & 0xfb;
  }
  DAT_ffff06da = bVar2;
  FUN_00001550(uVar1);
  FUN_000e541c((int)_DAT_fffef192,(int)_DAT_ffff2b0c,(int)_DAT_ffff2b0e,(int)_DAT_fffeeee2,
               DAT_ffff03ac,_DAT_ffff0d70,abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06da | 0x40;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff06da & 0xbf;
  }
  DAT_ffff06da = bVar2;
  FUN_00001550(uVar1);
  FUN_000e4fb0((int)_DAT_fffef192,(int)_DAT_ffff2b0c,(int)_DAT_ffff2b0e,(int)DAT_ffff03ac,
               ((int)DAT_fffeef76 & 0x80U) != 0,_DAT_ffff0d70,0,abStack_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06da | 8;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff06da & 0xf7;
  }
  DAT_ffff06da = bVar2;
  FUN_00001550();
  FUN_000e4620((DAT_ffff06da & 4) != 0,(DAT_ffff06da & 8) != 0,DAT_ffff06da & 1,
               (int)_v_Engine_Speed_OBD_copy_2ADA,DAT_ffff03a0,&DAT_ffff10f4);
  FUN_000e470c();
  FUN_000e49c0((DAT_ffff06da & 4) != 0,(DAT_ffff06da & 8) != 0,(int)_DAT_ffff10f4,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06da | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff06da & 0xfe;
  }
  DAT_ffff06da = bVar2;
  FUN_00001550(uVar1);
  FUN_000e45ec((int)_DAT_ffff10f6,&DAT_ffff10f2);
  return;
}

