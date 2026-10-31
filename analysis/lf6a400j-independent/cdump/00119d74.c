
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119d74(char param_1,ushort *param_2)

{
  ushort uVar1;
  
  if (param_1 == '\0') {
    DAT_fffedff5 = '\0';
  }
  else {
    if (DAT_fffedff5 == '\0') {
      DAT_fffedff4 = '\0';
      DAT_fffedff5 = '\x01';
    }
    uVar1 = _DAT_fffedff2 << 8;
    if (DAT_fffedff4 != '\0') {
      FUN_0016b4d8(&DAT_ffff19ec,0x100,0xff00);
      uVar1 = _DAT_ffff19ec;
    }
    _DAT_ffff19ec = uVar1;
    _DAT_fffedff0 = _DAT_ffff19ec;
    DAT_fffedff4 = '\x01';
  }
  uVar1 = 0;
  if ((param_1 != '\0') && (uVar1 = 0x100, param_1 != '\0')) {
    uVar1 = _DAT_fffedff0;
  }
  *param_2 = uVar1;
  _DAT_fffedff2 = uVar1 >> 8;
  return;
}

