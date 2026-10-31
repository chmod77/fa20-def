
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e40b0(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_10 [4];
  byte abStack_c [8];
  
  FUN_000e43d8((DAT_fffeeec2 & 2) != 0,DAT_fffeeec6 & 1,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)_DAT_ffff10ea,&DAT_ffff10ec);
  FUN_000e4510((DAT_fffeeec2 & 2) != 0,(int)_DAT_ffff2afa,DAT_fffeeec6 & 1,local_10);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d9 | 1;
  if ((local_10[0] & 1) == 0) {
    bVar2 = DAT_ffff06d9 & 0xfe;
  }
  DAT_ffff06d9 = bVar2;
  FUN_00001550();
  FUN_000e454c((DAT_fffeef76 & 0x40) != 0,abStack_c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d9 | 2;
  if ((abStack_c[0] & 1) == 0) {
    bVar2 = DAT_ffff06d9 & 0xfd;
  }
  DAT_ffff06d9 = bVar2;
  FUN_00001550(uVar1);
  return;
}

