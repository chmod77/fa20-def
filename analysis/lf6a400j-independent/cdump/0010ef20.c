
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010ef20(char param_1,char param_2,char param_3,ushort *param_4)

{
  ushort uVar1;
  
  uVar1 = _DAT_fffedcf0;
  if ((((param_1 != '\0') && (param_2 != '\0')) && (_DAT_fffedcf0 < 400)) &&
     (uVar1 = 0xffff, _DAT_fffedcf0 != 0xffff)) {
    uVar1 = _DAT_fffedcf0 + 1;
  }
  if (param_3 != '\0') {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  _DAT_fffedcf0 = uVar1;
  return;
}

