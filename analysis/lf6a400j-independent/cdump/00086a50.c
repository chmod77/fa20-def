
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086a50(short param_1,uint param_2,undefined2 *param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  
  if (DAT_fffebbc5 == '\0') {
    DAT_fffebbc4 = '\0';
    DAT_fffebbc5 = '\x01';
  }
  sVar1 = param_1;
  if (DAT_fffebbc4 != '\0') {
    FUN_0016b4d8(&DAT_ffff19aa,param_1,0xffffffff);
    sVar1 = _DAT_ffff19aa;
  }
  _DAT_ffff19aa = sVar1;
  DAT_fffebbc4 = 1;
  uVar2 = LK_138F64((uint)&T_02CA00,param_2,(int)_DAT_ffff19aa);
  *param_3 = (short)uVar2;
  *param_4 = _DAT_ffff19aa;
  return;
}

