
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d118(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  if ((param_3 & 0x2000) == 0) {
    if ((param_3 & 0x4000) == 0) {
      if ((param_3 & (uint)&DAT_00008000) == 0) {
        if ((param_3 & (uint)&DAT_00020000) == 0) {
          if ((param_3 & (uint)&DAT_00010000) == 0) {
            if (((param_3 & 0xf) == 0) && ((param_4 & 0xf0) == 0)) {
              uVar1 = 2;
            }
            else {
              uVar1 = 3;
            }
          }
          else {
            uVar1 = 8;
          }
        }
        else {
          uVar1 = 7;
        }
      }
      else {
        uVar1 = 6;
      }
    }
    else {
      uVar1 = 5;
    }
    _DAT_ffff2634 = _DAT_ffff2634 | 0x2000;
    FUN_00150930(param_1,param_2,uVar1);
    _DAT_ffff2634 = _DAT_ffff2634 & 0xffffdfff;
  }
  return;
}

