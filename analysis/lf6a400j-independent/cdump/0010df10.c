
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010df10(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_fffefef0;
  FUN_0010f198();
  FUN_0010f1f0();
  FUN_0010f248(((int)(char)DAT_fffefa41 & 0x80U) != 0,(DAT_fffefa41 & 0x40) != 0,
               ((int)(char)DAT_fffefa40 & 0x80U) != 0,(DAT_fffefa40 & 0x40) != 0,_DAT_fffeeede,
               _DAT_ffff39e6,DAT_fffef050 & 1,DAT_ffff3708,&DAT_ffff39e6);
  FUN_0010dab4(((int)DAT_fffefef0 & 0x80U) != 0,(DAT_fffefef1 & 0x40) != 0,
               ((int)DAT_fffeff00 & 0x80U) != 0,(DAT_fffefeff & 0x40) != 0,DAT_ffff03a0,DAT_ffff07ec
               ,DAT_fffef050 & 1,DAT_ffff36ff,&DAT_ffff36ff);
  FUN_0010db10(((int)DAT_fffefef0 & 0x80U) != 0,(DAT_fffefef1 & 0x40) != 0,
               ((int)DAT_fffeff00 & 0x80U) != 0,(DAT_fffefeff & 0x40) != 0,
               _v_Engine_Speed_OBD_copy_2ADA,DAT_ffff07ec,DAT_fffef050 & 1,_DAT_ffff39e0,
               &DAT_ffff39e0);
  FUN_0010db6c();
  FUN_0010fdbc((int)_DAT_ffff39e4,(int)DAT_ffff3703,(int)_DAT_ffff39e6,
               ((int)(char)DAT_fffefa41 & 0x80U) != 0,(DAT_fffefa41 & 0x40) != 0,
               ((int)(char)DAT_fffefa40 & 0x80U) != 0,(DAT_fffefa40 & 0x40) != 0,
               _v_Engine_Speed_OBD_copy_2ADA,DAT_ffff03a0,_DAT_fffeeede,local_3c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff07e1 | 1;
  if ((local_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff07e1 & 0xfe;
  }
  DAT_ffff07e1 = bVar2;
  FUN_00001550();
  FUN_0010ff08((int)_DAT_ffff39e0,(int)DAT_ffff36ff,(int)_DAT_ffff39e2,
               ((int)DAT_fffefef0 & 0x80U) != 0,(DAT_fffefef1 & 0x40) != 0,
               ((int)DAT_fffeff00 & 0x80U) != 0,(DAT_fffefeff & 0x40) != 0,
               _v_Engine_Speed_OBD_copy_2ADA,DAT_ffff03a0,_DAT_fffeeede,DAT_ffff07ec,abStack_38);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07e2 | 1;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff07e2 & 0xfe;
  }
  DAT_ffff07e2 = bVar2;
  FUN_00001550(uVar1);
  FUN_0010fd6c(DAT_ffff07e1 & 1,(DAT_ffff066a & 2) != 0,DAT_fffef050 & 1,abStack_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07df | 1;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff07df & 0xfe;
  }
  DAT_ffff07df = bVar2;
  FUN_00001550(uVar1);
  FUN_0010fd94(DAT_ffff07e1 & 1,(DAT_ffff066a & 8) != 0,DAT_fffef050 & 1,abStack_30);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff07e0 | 1;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff07e0 & 0xfe;
  }
  DAT_ffff07e0 = bVar2;
  FUN_00001550();
  FUN_0010fea0((DAT_ffff0929 & 0x10) != 0,DAT_ffff07e2 & 1,(int)DAT_ffff07ec,DAT_fffef050 & 1,
               abStack_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff07dd | 1;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff07dd & 0xfe;
  }
  DAT_ffff07dd = bVar2;
  FUN_00001550();
  FUN_0010fed4((DAT_ffff0929 & 4) != 0,DAT_ffff07e2 & 1,(int)DAT_ffff07ec,DAT_fffef050 & 1,
               abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07de | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff07de & 0xfe;
  }
  DAT_ffff07de = bVar2;
  FUN_00001550(uVar1);
  return;
}

