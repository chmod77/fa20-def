
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d2764(ushort param_1,char param_2,short *param_3)

{
  bool bVar1;
  
  if (param_1 < 0x2801) {
    _DAT_fffecd98 = _DAT_fffecd9a;
    if ((param_2 == '\x03') && (_DAT_fffecd98 = -1, _DAT_fffecd9a != -1)) {
      _DAT_fffecd98 = _DAT_fffecd9a + 1;
    }
    bVar1 = _DAT_fffecd9a == -1;
    _DAT_fffecd9a = _DAT_fffecd98;
    if (bVar1) {
      _DAT_fffecd98 = 0;
      _DAT_fffecd9a = _DAT_fffecd98;
    }
  }
  *param_3 = _DAT_fffecd98;
  return;
}

