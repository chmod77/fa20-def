
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d2c48(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_14 [4];
  byte abStack_10 [8];
  
  local_14[0] = 1 - ((DAT_ffff064b & 8) == 0);
  FUN_000d3ca4((int)DAT_ffff03a0,(int)v_Coolant_Temperature_29A5,(int)(char)local_14[0],local_14);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff064b | 8;
  if ((local_14[0] & 1) == 0) {
    bVar2 = DAT_ffff064b & 0xf7;
  }
  DAT_ffff064b = bVar2;
  FUN_00001550();
  abStack_10[0] = 1 - ((DAT_ffff064b & 0x40) == 0);
  FUN_000d3ec8((DAT_ffff064b & 0x10) != 0,((int)DAT_ffff064a & 0x80U) != 0,(int)_DAT_ffff0f78,
               (int)(char)abStack_10[0],abStack_10);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff064b | 0x40;
  if ((abStack_10[0] & 1) == 0) {
    bVar2 = DAT_ffff064b & 0xbf;
  }
  DAT_ffff064b = bVar2;
  FUN_00001550(uVar1);
  return;
}

