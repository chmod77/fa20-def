
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d2944(ushort param_1,short param_2,int param_3,undefined2 *param_4)

{
  bool bVar1;
  
  if ((param_1 < 0x2801) &&
     (bVar1 = param_2 != _DAT_fffecdc0, _DAT_fffecdbc = _DAT_fffecdbe, _DAT_fffecdc0 = param_2,
     bVar1)) {
    _DAT_fffecdbc = *(undefined2 *)(param_3 + 2);
    _DAT_fffecdbe = _DAT_fffecdbc;
  }
  *param_4 = _DAT_fffecdbc;
  return;
}

