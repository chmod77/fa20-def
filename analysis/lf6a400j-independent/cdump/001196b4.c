
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001196b4(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_18 [4];
  byte abStack_14 [8];
  
  FUN_00119828(DAT_ffff0921 & 1,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)_v_Control_Module_Voltage_EF18,(int)_DAT_fffeef10,local_18);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff091e | 1;
  if ((local_18[0] & 1) == 0) {
    bVar2 = DAT_ffff091e & 0xfe;
  }
  DAT_ffff091e = bVar2;
  FUN_00001550(uVar1);
  FUN_001194e4((int)DAT_ffff8573,(DAT_fffef364 & 4) != 0,DAT_ffff091e & 1,(int)DAT_fffef4e8,
               &DAT_ffff091d);
  FUN_0011978c(DAT_fffeeec6 & 1,(int)DAT_ffff091d,0xffff0857,(int)_v_Engine_Speed_OBD_copy_2ADA,
               &DAT_ffff130a);
  FUN_00119880((int)DAT_ffff091d,(int)_DAT_ffff130a,abStack_14);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff091e | 2;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff091e & 0xfd;
  }
  DAT_ffff091e = bVar2;
  FUN_00001550(uVar1);
  return;
}

