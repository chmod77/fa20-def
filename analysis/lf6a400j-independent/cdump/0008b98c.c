
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008b98c(uint param_1,uint param_2,undefined2 param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = LK_13869C((uint)&T_02CC44,param_1,param_2);
  if (DAT_fffebc4d == '\0') {
    DAT_fffebc4c = '\0';
    DAT_fffebc4d = '\x01';
  }
  uVar1 = param_3;
  if (DAT_fffebc4c != '\0') {
    FUN_0016b4d8(&DAT_ffff19b2,param_3,(uVar2 & 0xff) << 8);
    uVar1 = _DAT_ffff19b2;
  }
  _DAT_ffff19b2 = uVar1;
  DAT_fffebc4c = 1;
  *param_4 = _DAT_ffff19b2;
  return;
}

