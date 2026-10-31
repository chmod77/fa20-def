
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d290c(ushort param_1,short param_2,int param_3,undefined2 *param_4)

{
  bool bVar1;
  
  if ((param_1 < 0x2801) &&
     (bVar1 = param_2 != _DAT_fffecdb8, _DAT_fffecdb4 = _DAT_fffecdb6, _DAT_fffecdb8 = param_2,
     bVar1)) {
    _DAT_fffecdb4 = *(undefined2 *)(param_3 + 4);
    _DAT_fffecdb6 = _DAT_fffecdb4;
  }
  *param_4 = _DAT_fffecdb4;
  return;
}

