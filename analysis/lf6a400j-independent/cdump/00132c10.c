
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00132c10(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [4];
  undefined1 *local_18;
  
  local_18 = &DAT_ffff0919;
  FUN_00132e90();
  FUN_00132eb8((DAT_fffef376 & 8) != 0,(DAT_fffef371 & 4) != 0,(int)DAT_ffff0919,(int)DAT_ffff66b0,
               local_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff09ae | 1;
  if ((local_24[0] & 1) == 0) {
    bVar2 = DAT_ffff09ae & 0xfe;
  }
  DAT_ffff09ae = bVar2;
  FUN_00001550(uVar1);
  FUN_00132dcc((int)_DAT_ffff1520);
  FUN_00132e64((int)_DAT_ffff1520,(DAT_fffef152 & 0x20) != 0,(int)_DAT_fffef0da,&DAT_ffff1980);
  FUN_00132d64((int)DAT_ffff66b0,DAT_ffff03d8 & 1,_DAT_ffff1980,&DAT_ffff1978);
  FUN_00132edc(DAT_ffff09ae & 1,_DAT_ffff197c,_DAT_ffff1978,DAT_fffef050 & 1,
               _v_Coolant_Temperature_OBD_F322,abStack_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff09ae | 2;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff09ae & 0xfd;
  }
  DAT_ffff09ae = bVar2;
  FUN_00001550(uVar1);
  FUN_00132f30(DAT_ffff09ae & 1,_DAT_ffff197c,_DAT_ffff1978,(int)_v_Coolant_Temperature_OBD_F322,
               DAT_fffef050 & 1,abStack_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff09af | 4;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff09af & 0xfb;
  }
  DAT_ffff09af = bVar2;
  FUN_00001550(uVar1);
  FUN_00132bd4((DAT_ffff09ae & 2) != 0,&DAT_ffff09ad);
  return;
}

