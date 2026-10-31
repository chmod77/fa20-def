
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008a330(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte bVar3;
  byte bVar4;
  byte local_48;
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte bStack_3c;
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [8];
  
  FUN_000930e0((DAT_fffeeec2 & 2) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e5 | 0x20;
  if ((local_48 & 1) == 0) {
    bVar2 = DAT_ffff03e5 & 0xdf;
  }
  DAT_ffff03e5 = bVar2;
  FUN_00001550();
  FUN_00093044((DAT_ffff03e5 & 0x20) != 0,(DAT_fffeeec2 & 2) != 0,
               (int)_v_Control_Module_Voltage_EF18,(int)_DAT_fffeeede,abStack_44);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e5 | 0x40;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff03e5 & 0xbf;
  }
  DAT_ffff03e5 = bVar2;
  FUN_00001550();
  abStack_40[0] = 1 - ((DAT_ffff3653 & 8) == 0);
  FUN_0009381c((DAT_fffeeec2 & 2) != 0,DAT_fffeeec1 & 1,(DAT_ffff03e5 & 0x40) != 0,
               (int)(char)abStack_40[0],abStack_40);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff3653 | 8;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff3653 & 0xf7;
  }
  DAT_ffff3653 = bVar2;
  FUN_00001550(uVar1);
  bStack_3c = 1 - ((DAT_ffff3653 & 4) == 0);
  FUN_00093848(DAT_fffeeec1 & 1);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff3653 | 4;
  if ((bStack_3c & 1) == 0) {
    bVar2 = DAT_ffff3653 & 0xfb;
  }
  DAT_ffff3653 = bVar2;
  FUN_00001550();
  FUN_00092f28((DAT_ffff03e5 & 0x40) != 0,(DAT_ffff3653 & 8) != 0,(DAT_ffff3653 & 4) != 0,
               (int)_DAT_ffff3870,((int)(char)DAT_ffff3653 & 0x80U) != 0,(DAT_ffff3653 & 0x20) != 0,
               (DAT_ffff3653 & 0x10) != 0,(DAT_fffeeec2 & 2) != 0,abStack_20,abStack_24,abStack_28,
               abStack_2c,abStack_30,abStack_34,abStack_38);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e5 | 0x80;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff03e5 & 0x7f;
  }
  bVar3 = DAT_ffff03e6 | 0x80;
  if ((abStack_24[0] & 1) == 0) {
    bVar3 = DAT_ffff03e6 & 0x7f;
  }
  bVar4 = bVar3 | 0x40;
  if ((abStack_28[0] & 1) == 0) {
    bVar4 = bVar3 & 0xbf;
  }
  bVar3 = bVar4 | 0x20;
  if ((abStack_2c[0] & 1) == 0) {
    bVar3 = bVar4 & 0xdf;
  }
  bVar4 = bVar3 | 0x10;
  if ((abStack_30[0] & 1) == 0) {
    bVar4 = bVar3 & 0xef;
  }
  bVar3 = bVar4 | 8;
  if ((abStack_34[0] & 1) == 0) {
    bVar3 = bVar4 & 0xf7;
  }
  DAT_ffff03e6 = bVar3 | 4;
  if ((abStack_38[0] & 1) == 0) {
    DAT_ffff03e6 = bVar3 & 0xfb;
  }
  DAT_ffff03e5 = bVar2;
  FUN_00001550(uVar1);
  return;
}

