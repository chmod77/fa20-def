
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d28d4(ushort param_1,short param_2,undefined2 *param_3,undefined2 *param_4)

{
  bool bVar1;
  
  if ((param_1 < 0x2801) &&
     (bVar1 = param_2 != _DAT_fffecdb0, _DAT_fffecdac = _DAT_fffecdae, _DAT_fffecdb0 = param_2,
     bVar1)) {
    _DAT_fffecdac = *param_3;
    _DAT_fffecdae = _DAT_fffecdac;
  }
  *param_4 = _DAT_fffecdac;
  return;
}

