
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ec280(ushort param_1,uint param_2,int *param_3)

{
  if (0x9ff < param_1) {
    param_2 = param_2 & 0xffff;
    _DAT_fffed534 = param_2 - _DAT_fffed538;
  }
  *param_3 = _DAT_fffed534;
  _DAT_fffed538 = (short)param_2;
  return;
}

