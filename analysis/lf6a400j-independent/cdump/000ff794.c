
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ff794(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte bStack_28;
  byte abStack_24 [4];
  undefined1 *local_20;
  
  local_20 = &DAT_fffef0da;
  FUN_000ffa20(0,0,(int)_v_Control_Module_Voltage_EF18,(int)_DAT_fffeef10,DAT_fffef32a & 1,
               (DAT_fffef32a & 8) != 0,DAT_fffef32c & 1,1,DAT_fffeeec6 & 1,(DAT_fffeeec2 & 2) != 0,
               (DAT_fffef9f3 & 4) != 0,local_34);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff077b | 8;
  if ((local_34[0] & 1) == 0) {
    bVar2 = DAT_ffff077b & 0xf7;
  }
  DAT_ffff077b = bVar2;
  FUN_00001550();
  FUN_000ffe88(0,0,(int)_DAT_fffef0da,DAT_fffeeec6 & 1,abStack_30);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff077b | 0x10;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff077b & 0xef;
  }
  DAT_ffff077b = bVar2;
  FUN_00001550();
  FUN_000ffc18(0,0,(int)_DAT_fffef0da,(int)_DAT_fffeeed2,(int)_DAT_fffef202,(DAT_ffff077b & 8) != 0,
               ((int)(char)DAT_ffff077b & 0x80U) != 0,(DAT_ffff077b & 0x10) != 0,
               ((int)DAT_fffef152 & 0x80U) != 0,((int)DAT_fffef59c & 0x80U) != 0,abStack_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff077b | 0x20;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff077b & 0xdf;
  }
  DAT_ffff077b = bVar2;
  FUN_00001550();
  FUN_000ffadc(0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff077b | 0x40;
  if ((bStack_28 & 1) == 0) {
    bVar2 = DAT_ffff077b & 0xbf;
  }
  DAT_ffff077b = bVar2;
  FUN_00001550();
  FUN_000ffd68(0,0,(DAT_ffff077b & 0x40) != 0,(DAT_ffff077b & 0x20) != 0,(int)_DAT_fffef202,
               ((int)DAT_fffef59c & 0x80U) != 0,abStack_24,&DAT_ffff1258);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff077b | 0x80;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff077b & 0x7f;
  }
  DAT_ffff077b = bVar2;
  FUN_00001550(uVar1);
  return;
}

