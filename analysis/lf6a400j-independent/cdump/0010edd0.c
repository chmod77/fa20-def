
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010edd0(char param_1,char param_2,char param_3,char param_4,ushort *param_5)

{
  ushort uVar1;
  
  uVar1 = _DAT_fffedce8;
  if ((((param_2 != '\0') && (param_3 != '\0')) && (_DAT_fffedce8 < 2000)) &&
     (uVar1 = 0xffff, _DAT_fffedce8 != 0xffff)) {
    uVar1 = _DAT_fffedce8 + 1;
  }
  if ((param_4 != '\0') || (param_1 != '\0')) {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  _DAT_fffedce8 = uVar1;
  return;
}

