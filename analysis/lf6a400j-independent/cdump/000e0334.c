
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e0334(ushort param_1,char param_2,undefined4 param_3,ushort *param_4)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (_DAT_fffed1ac < 100) {
    uVar1 = _DAT_fffed1ac;
  }
  _DAT_fffed1ac = 0;
  if ((param_2 == '\0') &&
     (_DAT_fffed1ac = (param_1 & 0xff) + uVar1, _DAT_fffed1ac < (param_1 & 0xff))) {
    _DAT_fffed1ac = 0xffff;
  }
  *param_4 = _DAT_fffed1ac;
  *(bool *)param_3 = _DAT_fffed1ac == 100;
  return;
}

