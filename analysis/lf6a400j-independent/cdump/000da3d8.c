
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000da3d8(ushort param_1,char param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (_DAT_fffecfe0 < 2000) {
    uVar1 = _DAT_fffecfe0;
  }
  _DAT_fffecfe0 = 0;
  if ((param_2 == '\0') &&
     (_DAT_fffecfe0 = (param_1 & 0xff) + uVar1, _DAT_fffecfe0 < (param_1 & 0xff))) {
    _DAT_fffecfe0 = 0xffff;
  }
  *param_3 = _DAT_fffecfe0;
  return;
}

