
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004d520(void)

{
  undefined4 uVar1;
  
  if ((DAT_ffff06da & 2) == 0) {
    uVar1 = FUN_0016b5d4((uint)_v_Engine_Speed_OBD_copy_2ADA + (int)_DAT_ffff2adc);
    _DAT_ffff2ad8 = (undefined2)uVar1;
  }
  else {
    uVar1 = FUN_00001540(&DAT_00004c00);
    uVar1 = FUN_0016b4d8(&DAT_ffff2ad8,(int)_DAT_ffff2af0,uVar1);
    _DAT_ffff2ad8 = (undefined2)uVar1;
  }
  return uVar1;
}

