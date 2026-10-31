
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119610(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_1c [4];
  byte abStack_18 [4];
  undefined1 *local_14;
  
  local_14 = &DAT_fffeeec2;
  FUN_00119860(DAT_fffeeec2 & 1,(int)DAT_ffff091d,(int)_v_Control_Module_Voltage_EF18,
               (int)_v_Engine_Speed_OBD_copy_2ADA,_DAT_fffeef10,local_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff091f | 1;
  if ((local_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff091f & 0xfe;
  }
  DAT_ffff091f = bVar2;
  FUN_00001550(uVar1);
  FUN_001198a4(DAT_fffeeec2 & 1,(int)DAT_ffff091d,(int)_v_Control_Module_Voltage_EF18,
               (int)_v_Engine_Speed_OBD_copy_2ADA,_DAT_fffeef10,abStack_18);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0920 | 0x80;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff0920 & 0x7f;
  }
  DAT_ffff0920 = bVar2;
  FUN_00001550(uVar1);
  return;
}

