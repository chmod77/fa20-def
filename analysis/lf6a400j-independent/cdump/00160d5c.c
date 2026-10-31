
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00160d5c(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0x70);
  DAT_fffff00a = DAT_fffff00a & 0x7f;
  if ((param_2 & 0xffff) != 0) {
    _DAT_ffffecfc = _DAT_ffffecfc | 1;
    DAT_fffff00a = DAT_fffff00a | 0x80;
    _DAT_ffffecf8 = param_2 & 0xffff;
  }
  _DAT_ffffecf0 = param_1;
  FUN_00001550(uVar1);
  return;
}

