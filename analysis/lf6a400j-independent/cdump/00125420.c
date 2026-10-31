
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00125420(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [4];
  byte abStack_14 [4];
  byte abStack_10 [4];
  undefined1 *local_c;
  
  local_c = &DAT_ffff0958;
  FUN_00123e0c((int)DAT_ffff0585,&DAT_ffff0955);
  FUN_001242d0((int)_DAT_ffff0a48,&DAT_ffff143e);
  FUN_00124354((int)_DAT_ffff0a4c,&DAT_ffff1442);
  FUN_001243d8((int)_DAT_ffff0a50,&DAT_ffff1446);
  FUN_0012442c((int)_DAT_ffff0a56,&DAT_ffff144a);
  FUN_00124e24((int)_DAT_ffff0a5e,&DAT_ffff1452);
  FUN_0012541c((int)_DAT_ffff0a8c,&DAT_ffff146e);
  FUN_00125f38((int)_DAT_ffff0a9c,&DAT_ffff1474);
  FUN_00125f3c((int)_DAT_ffff0a9e,&DAT_ffff1478);
  FUN_00125f40((int)_DAT_ffff0a9a,&DAT_ffff147a);
  FUN_00125f54((DAT_ffff03cb & 2) != 0,local_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0958 | 0x40;
  if ((local_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0958 & 0xbf;
  }
  DAT_ffff0958 = bVar2;
  FUN_00001550(uVar1);
  FUN_00125f58((int)_v_Engine_Speed_2994,abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0958 | 2;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff0958 & 0xfd;
  }
  DAT_ffff0958 = bVar2;
  FUN_00001550(uVar1);
  FUN_00125f80((int)_DAT_fffef540,abStack_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0958 | 4;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff0958 & 0xfb;
  }
  DAT_ffff0958 = bVar2;
  FUN_00001550(uVar1);
  FUN_00125fa8((int)_v_Engine_Speed_2994,abStack_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0958 | 8;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff0958 & 0xf7;
  }
  DAT_ffff0958 = bVar2;
  FUN_00001550(uVar1);
  FUN_00125fd8((int)_DAT_fffef540,abStack_18);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0958 | 0x10;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff0958 & 0xef;
  }
  DAT_ffff0958 = bVar2;
  FUN_00001550(uVar1);
  FUN_00126008((int)_DAT_fffef0da,abStack_14);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0958 | 0x20;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff0958 & 0xdf;
  }
  DAT_ffff0958 = bVar2;
  FUN_00001550(uVar1);
  FUN_0012604c(DAT_ffff03cb & 1,abStack_10);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0958 | 1;
  if ((abStack_10[0] & 1) == 0) {
    bVar2 = DAT_ffff0958 & 0xfe;
  }
  DAT_ffff0958 = bVar2;
  FUN_00001550(uVar1);
  return;
}

