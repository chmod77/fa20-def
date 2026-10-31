
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000afa48(ushort param_1,short *param_2)

{
  short sVar1;
  
  if (((_DAT_fffec5e6 == 0) || (sVar1 = 0, (param_1 & 0xff) != 0)) &&
     (sVar1 = _DAT_fffec5e4 + 1, sVar1 == 0)) {
    sVar1 = -1;
  }
  *param_2 = sVar1;
  _DAT_fffec5e6 = param_1 & 0xff;
  _DAT_fffec5e4 = sVar1;
  return;
}

