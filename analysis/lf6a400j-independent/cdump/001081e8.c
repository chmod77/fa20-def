
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001081e8(char param_1,undefined4 param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = 1;
  if (param_1 != '\0') {
    if (_DAT_fffedb40 == -1) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = _DAT_fffedb40 + 1;
    }
  }
  *param_3 = uVar1;
  *(bool *)param_2 = 29999 < uVar1;
  _DAT_fffedb40 = uVar1;
  return;
}

