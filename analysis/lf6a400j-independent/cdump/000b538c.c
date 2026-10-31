
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b538c(ushort param_1,char param_2,ushort param_3,ushort *param_4)

{
  if (param_2 != '\0') {
    _DAT_fffec72c = param_1;
    if (param_1 < param_3) {
      _DAT_fffec72c = param_3;
    }
    if (0xaccc < _DAT_fffec72c) {
      _DAT_fffec72c = 0xaccd;
    }
  }
  if (param_2 != '\0') {
    *param_4 = _DAT_fffec72c;
    return;
  }
  *param_4 = 0x8000;
  return;
}

