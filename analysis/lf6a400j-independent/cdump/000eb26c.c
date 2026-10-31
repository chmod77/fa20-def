
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb26c(byte param_1,ushort param_2,ushort *param_3)

{
  ushort uVar1;
  
  if ((param_1 != 0) || (uVar1 = param_2, _DAT_fffed4e8 <= param_2)) {
    uVar1 = _DAT_fffed4e8;
  }
  if (DAT_fffed4ea <= param_1) {
    param_2 = uVar1;
  }
  *param_3 = param_2;
  _DAT_fffed4e8 = param_2;
  DAT_fffed4ea = param_1;
  return;
}

