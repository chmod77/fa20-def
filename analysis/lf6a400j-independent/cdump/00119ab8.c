
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119ab8(char param_1,ushort param_2,ushort param_3,byte param_4,undefined2 param_5,
                 undefined2 param_6,ushort *param_7)

{
  bool bVar1;
  ushort uVar2;
  
  uVar2 = param_3 + 0x20;
  if (uVar2 < param_3) {
    uVar2 = 0xffff;
  }
  bVar1 = false;
  if ((param_4 < 2) && (_DAT_fffedfe6 <= uVar2)) {
    bVar1 = true;
  }
  if (bVar1) {
    DAT_fffedfe8 = '\0';
  }
  else {
    if (DAT_fffedfe8 == '\0') {
      DAT_fffedfe9 = '\0';
      DAT_fffedfe8 = '\x01';
    }
    if (DAT_fffedfe9 == '\0') {
      _DAT_ffff19ea = _DAT_fffedfe6;
    }
    else {
      FUN_0016b4d8(&DAT_ffff19ea,param_5,param_6);
    }
    _DAT_fffedfe4 = _DAT_ffff19ea;
    DAT_fffedfe9 = '\x01';
  }
  if ((bVar1) || (_DAT_fffedfe6 = _DAT_fffedfe4, _DAT_fffedfe4 < param_3)) {
    _DAT_fffedfe6 = param_3;
  }
  if (param_1 == '\0') {
    _DAT_fffedfe6 = param_2;
  }
  *param_7 = _DAT_fffedfe6;
  return;
}

