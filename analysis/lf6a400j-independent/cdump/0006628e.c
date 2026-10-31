
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0006628e(undefined *param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = param_2 & 0xffff;
  uVar1 = ((uint)param_1 & 0xffff) - param_2;
  if ((int)uVar1 < 0) {
    if (((uint)_DAT_ffff020a < (-uVar1 & 0xffff)) &&
       (param_1 = (undefined *)(param_2 - _DAT_ffff020a), (int)param_1 < 0)) {
      return (undefined *)0x0;
    }
  }
  else if (((uint)_DAT_ffff020a < (uVar1 & 0xffff)) &&
          (param_1 = (undefined *)(param_2 + _DAT_ffff020a), &DAT_0000ffff < param_1)) {
    return &DAT_0000ffff;
  }
  return param_1;
}

