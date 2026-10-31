
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011ee38(char param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (param_1 != '\0') {
    uVar1 = _DAT_fffee128;
  }
  *param_2 = uVar1;
  if (param_1 != '\0') {
    if (0xfffe < uVar1) {
      _DAT_fffee128 = 0xffff;
      return;
    }
    _DAT_fffee128 = uVar1 + 1;
    return;
  }
  _DAT_fffee128 = 0;
  return;
}

