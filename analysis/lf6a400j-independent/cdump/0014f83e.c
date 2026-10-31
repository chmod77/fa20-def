
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014f83e(uint param_1,ushort param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  param_1 = param_1 & 0xff;
  puVar2 = *(ushort **)(&DAT_00168cf0 + param_1 * 0x10);
  uVar1 = *(ushort *)(&PTR_DAT_00168cf4 + param_1 * 4);
  _DAT_fffff66a = _DAT_fffff66a & ~uVar1;
  if (_DAT_fffeeeb8 <= param_2) {
    param_2 = _DAT_fffeeeb8;
  }
  _DAT_ffff1b0e = param_2;
  *puVar2 = param_2;
  _DAT_fffff666 = _DAT_fffff666 | uVar1;
  if ((uVar1 & _DAT_fffff66a) != 0) {
    _DAT_fffff66a = _DAT_fffff66a & ~uVar1;
    *puVar2 = param_2;
    _DAT_fffff666 = _DAT_fffff666 | uVar1;
  }
  DAT_ffff1b0c = DAT_ffff1b0c == '\0';
  if (param_2 != 0) {
    *(byte *)(param_1 - 0xd334) = *(byte *)(param_1 - 0xd334) | 1;
  }
  return;
}

