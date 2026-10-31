
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00067a2c(ushort param_1,ushort param_2,uint param_3)

{
  bool bVar1;
  byte bVar2;
  
  _DAT_ffff0106 = param_1;
  _DAT_ffff0108 = param_2;
  bVar2 = DAT_ffff009a | 1;
  if ((param_3 & 1) == 0) {
    bVar2 = DAT_ffff009a & 0xfe;
  }
  DAT_ffff009a = bVar2 & 0xfb;
  bVar1 = param_2 != 0;
  if (!bVar1) {
    param_2 = param_1;
  }
  _DAT_ffff0358 = (ushort)((uint)param_2 * 0x20c400 >> 0x10);
  if (bVar1) {
    _DAT_ffff0358 = -(_DAT_ffff0358 >> 5);
  }
  else {
    _DAT_ffff0358 = _DAT_ffff0358 >> 5;
  }
  return;
}

