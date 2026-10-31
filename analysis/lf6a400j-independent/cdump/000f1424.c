
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f1424(ushort param_1,char param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = 0;
  if ((param_2 == '\x01') && (uVar1 = param_1, param_1 < _DAT_fffed638)) {
    uVar1 = _DAT_fffed638;
  }
  *param_3 = uVar1;
  _DAT_fffed638 = uVar1;
  return;
}

