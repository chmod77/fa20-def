
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010e858(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_ffff069c;
  FUN_001100b4((DAT_fffefa3f & 2) != 0,(DAT_fffefa3d & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)_DAT_ffff39ec,DAT_ffff03a0,DAT_ffff3705,_DAT_fffeeede,_DAT_ffff39ee,local_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07e4 | 1;
  if ((local_34[0] & 1) == 0) {
    bVar2 = DAT_ffff07e4 & 0xfe;
  }
  DAT_ffff07e4 = bVar2;
  FUN_00001550(uVar1);
  FUN_00110194(DAT_fffefa3f & 1,DAT_fffefa3d & 1,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)_DAT_ffff39e8,DAT_ffff03a0,DAT_ffff3704,_DAT_fffeeede,_DAT_ffff39ea,abStack_30);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff07e5 | 1;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff07e5 & 0xfe;
  }
  DAT_ffff07e5 = bVar2;
  FUN_00001550();
  FUN_0010edd0(((int)DAT_fffef939 & 0x80U) != 0,((int)DAT_ffff06bf & 0x80U) != 0,DAT_ffff07e5 & 1,
               DAT_fffef050 & 1,&DAT_ffff1300);
  FUN_0010ef20(((int)DAT_ffff06bf & 0x80U) != 0,DAT_ffff07e4 & 1,DAT_fffef050 & 1,&DAT_ffff1302);
  FUN_0010ee20(((int)DAT_fffef939 & 0x80U) != 0,(int)_DAT_ffff1300,((int)DAT_ffff06bf & 0x80U) != 0,
               DAT_ffff07e5 & 1,_v_Engine_Speed_OBD_copy_2ADA,((int)DAT_ffff06c2 & 0x80U) != 0,
               (DAT_ffff06be & 0x40) != 0,(DAT_ffff06be & 0x20) != 0,(DAT_ffff06be & 0x10) != 0,
               (DAT_ffff06be & 8) != 0,DAT_ffff069c,DAT_fffef050 & 1,&DAT_ffff07e9);
  FUN_0010ef68((int)_DAT_ffff1302,((int)DAT_ffff06bf & 0x80U) != 0,DAT_ffff07e4 & 1,
               (int)_v_Engine_Speed_OBD_copy_2ADA,((int)DAT_ffff06c2 & 0x80U) != 0,
               (DAT_ffff06be & 0x40) != 0,(DAT_ffff06be & 0x20) != 0,(DAT_ffff06be & 0x10) != 0,
               (DAT_ffff06be & 8) != 0,_DAT_ffff102c,DAT_fffef050 & 1,&DAT_ffff07ea);
  FUN_0010fbf4();
  FUN_00110274((DAT_fffeeec2 & 4) != 0,(DAT_fffefa3f & 2) != 0,(DAT_fffefa3e & 2) != 0,
               (int)_DAT_ffff1302,DAT_ffff07ea,DAT_ffff3709,DAT_fffef050 & 1,abStack_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff07e6 | 1;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff07e6 & 0xfe;
  }
  DAT_ffff07e6 = bVar2;
  FUN_00001550();
  FUN_001102e0((DAT_fffeeec2 & 4) != 0,DAT_fffefa3f & 1,DAT_fffefa3e & 1,(int)_DAT_ffff1300,
               DAT_ffff07e9,DAT_ffff3709,DAT_fffef050 & 1,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07e7 | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff07e7 & 0xfe;
  }
  DAT_ffff07e7 = bVar2;
  FUN_00001550(uVar1);
  return;
}

