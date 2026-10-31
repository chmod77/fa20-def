
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e3814(ushort param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = _DAT_fffed288;
  if ((param_1 < 0x29a) && (sVar1 = -1, _DAT_fffed288 != -1)) {
    sVar1 = _DAT_fffed288 + 1;
  }
  *param_2 = sVar1;
  _DAT_fffed288 = sVar1;
  return;
}

