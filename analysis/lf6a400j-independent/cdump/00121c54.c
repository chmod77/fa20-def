
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00121c54(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [4];
  byte abStack_14 [4];
  undefined1 *local_10;
  
  local_10 = &DAT_ffff0944;
  FUN_00121968((int)_DAT_ffff0adc,(int)_DAT_ffff1402,(int)_DAT_ffff0a70,(int)_DAT_ffff1458,
               _DAT_ffff0b1a,_DAT_ffff141e,DAT_ffff095b & 1,DAT_ffff0953,_DAT_ffff0ada,_DAT_ffff1400
               ,&DAT_ffff0947);
  FUN_00121e00((int)_DAT_ffff1408,&DAT_ffff13e4);
  FUN_00121e04((int)_DAT_ffff140c,&DAT_ffff13e6);
  FUN_00121e08(DAT_fffef050 & 1,local_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0948 | 4;
  if ((local_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0948 & 0xfb;
  }
  DAT_ffff0948 = bVar2;
  FUN_00001550(uVar1);
  FUN_00121e14((int)DAT_ffff0947,(int)DAT_ffffab41,abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0949 | 1;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff0949 & 0xfe;
  }
  DAT_ffff0949 = bVar2;
  FUN_00001550(uVar1);
  FUN_00121e40((int)DAT_ffff0947,(int)DAT_ffffab41,abStack_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0949 | 2;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff0949 & 0xfd;
  }
  DAT_ffff0949 = bVar2;
  FUN_00001550(uVar1);
  FUN_00121ef8((int)DAT_ffff0947,(DAT_ffff0948 & 4) != 0,(int)DAT_ffffab41,abStack_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0950 | 4;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff0950 & 0xfb;
  }
  DAT_ffff0950 = bVar2;
  FUN_00001550(uVar1);
  FUN_00121e6c(DAT_ffff0949 & 1,(DAT_ffff0948 & 4) != 0,abStack_18);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0948 | 1;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff0948 & 0xfe;
  }
  DAT_ffff0948 = bVar2;
  FUN_00001550();
  FUN_00121e80((DAT_ffff0949 & 2) != 0,(DAT_ffff0948 & 4) != 0,abStack_14,&DAT_ffff13e8);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0948 | 2;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff0948 & 0xfd;
  }
  DAT_ffff0948 = bVar2;
  FUN_00001550(uVar1);
  return;
}

