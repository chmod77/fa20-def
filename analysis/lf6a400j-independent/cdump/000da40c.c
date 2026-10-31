
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000da40c(ushort param_1,char param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (_DAT_fffecfe4 < 400) {
    uVar1 = _DAT_fffecfe4;
  }
  _DAT_fffecfe4 = 0;
  if ((param_2 == '\0') &&
     (_DAT_fffecfe4 = (param_1 & 0xff) + uVar1, _DAT_fffecfe4 < (param_1 & 0xff))) {
    _DAT_fffecfe4 = 0xffff;
  }
  *param_3 = _DAT_fffecfe4;
  return;
}

