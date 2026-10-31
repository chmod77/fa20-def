
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00133170(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte bStack_2c;
  byte abStack_28 [4];
  byte abStack_24 [8];
  
  FUN_001330bc(0,(int)_DAT_fffef202,&DAT_ffff1522);
  FUN_001334b0(0,(int)DAT_fffef59d,(DAT_fffef371 & 2) != 0,(int)_v_Control_Module_Voltage_EF18,
               _DAT_fffeef10,DAT_fffef32a & 1,(DAT_fffef32a & 8) != 0,DAT_fffef32c & 1,local_3c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff09b2 | 1;
  if ((local_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff09b2 & 0xfe;
  }
  DAT_ffff09b2 = bVar2;
  FUN_00001550();
  FUN_00133048(0,(int)_DAT_ffff1522,((int)(char)DAT_ffff077b & 0x80U) != 0,
               (DAT_fffef330 & 0x20) != 0,&DAT_ffff09b1);
  FUN_00133528(0,(int)DAT_fffef59d,DAT_ffff09b2 & 1,(int)_DAT_fffeeed2,(int)_DAT_fffef202,abStack_38
               ,&DAT_ffff1524);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff09b2 | 4;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff09b2 & 0xfb;
  }
  DAT_ffff09b2 = bVar2;
  FUN_00001550();
  FUN_001336f0(((int)(char)DAT_ffff077b & 0x80U) != 0,0,(int)DAT_fffef59d,(DAT_fffef330 & 0x20) != 0
               ,DAT_ffff09b2 & 1,abStack_34,&DAT_ffff1526);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff09b2 | 0x10;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff09b2 & 0xef;
  }
  DAT_ffff09b2 = bVar2;
  FUN_00001550();
  FUN_001337c8(((int)(char)DAT_ffff077b & 0x80U) != 0,0,(int)DAT_fffef59d,DAT_ffff09b2 & 1,
               (DAT_fffef330 & 0x20) != 0,abStack_30,&DAT_ffff1528);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff09b2 | 8;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff09b2 & 0xf7;
  }
  DAT_ffff09b2 = bVar2;
  FUN_00001550();
  FUN_001338a0(0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff09b2 | 0x20;
  if ((bStack_2c & 1) == 0) {
    bVar2 = DAT_ffff09b2 & 0xdf;
  }
  DAT_ffff09b2 = bVar2;
  FUN_00001550();
  FUN_00133628(0,(int)DAT_fffef59d,((int)(char)DAT_ffff077b & 0x80U) != 0,(int)DAT_ffff09b1,
               DAT_ffff09b2 & 1,(DAT_ffff077b & 0x40) != 0,(DAT_ffff077b & 0x20) != 0,
               (DAT_fffef330 & 0x20) != 0,(int)_DAT_fffef202,abStack_28);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff09b2 | 2;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff09b2 & 0xfd;
  }
  DAT_ffff09b2 = bVar2;
  FUN_00001550();
  FUN_00132f88((DAT_ffff09b2 & 2) != 0,(DAT_ffff09b2 & 4) != 0,(DAT_fffef9f3 & 4) != 0,
               (DAT_ffff09b2 & 0x20) != 0,(DAT_ffff09b2 & 0x10) != 0,(DAT_ffff09b2 & 8) != 0,0,
               &DAT_ffff09b0);
  FUN_0013300c(0,(int)DAT_fffef59d,(int)DAT_ffff09b0,(int)DAT_ffff386e,&DAT_ffff386e);
  FUN_00133970(0,(int)DAT_ffff09b0,abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff09b2 | 0x40;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff09b2 & 0xbf;
  }
  DAT_ffff09b2 = bVar2;
  FUN_00001550(uVar1);
  return;
}

