
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001199cc(char param_1,ushort param_2,ushort param_3,undefined2 param_4,ushort *param_5)

{
  ushort uVar1;
  
  if (param_1 == '\0') {
    DAT_fffedfe1 = '\0';
  }
  else {
    if (DAT_fffedfe1 == '\0') {
      DAT_fffedfe0 = '\0';
      DAT_fffedfe1 = '\x01';
    }
    uVar1 = _DAT_fffedfde << 5;
    if (DAT_fffedfe0 != '\0') {
      FUN_0016b4d8(&DAT_ffff19e8,param_3,param_4);
      uVar1 = _DAT_ffff19e8;
    }
    _DAT_ffff19e8 = uVar1;
    _DAT_fffedfdc = _DAT_ffff19e8;
    DAT_fffedfe0 = '\x01';
  }
  if ((param_1 != '\0') && (param_2 = param_3, param_1 != '\0')) {
    param_2 = _DAT_fffedfdc;
  }
  *param_5 = param_2;
  _DAT_fffedfde = (short)((int)(uint)param_2 >> 5);
  return;
}

