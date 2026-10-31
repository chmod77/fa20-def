
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004dd16(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)DAT_fffeeec6;
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_0016bc08(&PTR_DAT_00163a78,(int)_v_Engine_Speed_OBD_copy_2ADA);
    uVar1 = FUN_0016b4d8(&DAT_ffff2af0,(int)_v_Engine_Speed_OBD_copy_2ADA,uVar2);
    _DAT_ffff2af0 = (undefined2)uVar1;
  }
  else {
    _DAT_ffff2af0 = 0;
  }
  return uVar1;
}

