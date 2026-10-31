
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb2c4(byte param_1,ushort param_2,ushort *param_3)

{
  ushort uVar1;
  
  if ((param_1 == 0) || (uVar1 = param_2, param_2 <= _DAT_fffed4f0)) {
    uVar1 = _DAT_fffed4f0;
  }
  if (param_1 <= SUB_fffed4f2) {
    param_2 = uVar1;
  }
  *param_3 = param_2;
  _DAT_fffed4f0 = param_2;
  SUB_fffed4f2 = param_1;
  return;
}

