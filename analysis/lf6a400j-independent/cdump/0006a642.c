
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006a642(void)

{
  uint uVar1;
  char cVar3;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  uVar1 = FUN_0016bc08(&PTR_DAT_00168bb0,DAT_ffff2996);
  cVar3 = FUN_0016ba80(&PTR_DAT_00168bbc,(int)_DAT_fffeeee2);
  if (((((DAT_ffffab40 & 0x40) == 0) && ((uVar1 & 0xffff) != 0)) && (_DAT_fffeeed0 != 0)) &&
     (cVar3 != '\0')) {
    FUN_0016b31c(_v_Mass_Airflow_EEE4,0x3276f000,&uStack_1c,&local_20);
    FUN_0016b31c((uint)_DAT_fffeeed0 * (uVar1 & 0xffff),cVar3,local_14,&local_18);
    uVar2 = FUN_0016b26c(uStack_1c,local_20,local_14[0],local_18);
    v_Engine_Load_Relative_E6FE = FUN_0016bd60(uVar2,0xff);
  }
  else {
    v_Engine_Load_Relative_E6FE = 0;
  }
  return;
}

