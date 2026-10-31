
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e59bc(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_2c [4];
  byte abStack_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [4];
  undefined1 *local_18;
  
  local_18 = &DAT_fffeef14;
  FUN_000e5bc8((DAT_ffff054a & 0x20) != 0,(int)v_Coolant_Temperature_29A5,(int)_DAT_fffeef14,
               (DAT_fffef371 & 4) != 0,DAT_ffff0913,DAT_fffef050 & 1,local_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06df | 1;
  if ((local_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff06df & 0xfe;
  }
  DAT_ffff06df = bVar2;
  FUN_00001550(uVar1);
  FUN_000e56cc(DAT_ffff06df & 1,(int)_DAT_ffff0e86,(int)_DAT_fffeef4a,DAT_fffef050 & 1,&DAT_ffff06db
              );
  FUN_000e577c(DAT_ffff06df & 1,(int)_DAT_ffff0e86,(int)_DAT_fffeef4c,DAT_fffef050 & 1,&DAT_ffff06dc
              );
  FUN_000e582c(DAT_ffff06df & 1,(int)_DAT_ffff0e84,(int)_DAT_fffeef4a,DAT_fffef050 & 1,&DAT_ffff06dd
              );
  FUN_000e58d8(DAT_ffff06df & 1,(int)_DAT_ffff0e84,(int)_DAT_fffeef4c,DAT_fffef050 & 1,&DAT_ffff06de
              );
  FUN_000e5c1c(DAT_ffff06df & 1,(int)_DAT_ffff0e86,(int)_DAT_fffeef4a,DAT_fffef050 & 1,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e1 | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff06e1 & 0xfe;
  }
  DAT_ffff06e1 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e5cc8(DAT_ffff06df & 1,(int)_DAT_ffff0e86,(int)_DAT_fffeef4c,DAT_fffef050 & 1,abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e0 | 1;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff06e0 & 0xfe;
  }
  DAT_ffff06e0 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e5d74(DAT_ffff06df & 1,(int)_DAT_ffff0e84,(int)_DAT_fffeef4a,DAT_fffef050 & 1,abStack_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e1 | 2;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff06e1 & 0xfd;
  }
  DAT_ffff06e1 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e5e18(DAT_ffff06df & 1,(int)_DAT_ffff0e84,(int)_DAT_fffeef4c,DAT_fffef050 & 1,abStack_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e0 | 2;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff06e0 & 0xfd;
  }
  DAT_ffff06e0 = bVar2;
  FUN_00001550(uVar1);
  return;
}

