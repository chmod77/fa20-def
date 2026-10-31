
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014f8c6(uint param_1,short param_2)

{
  ushort uVar1;
  short *psVar2;
  
  param_1 = param_1 & 0xff;
  psVar2 = *(short **)(&DAT_00168cf0 + param_1 * 0x10);
  uVar1 = *(ushort *)(&PTR_DAT_00168cf4 + param_1 * 4);
  _DAT_fffff66a = _DAT_fffff66a & ~uVar1;
  *psVar2 = param_2;
  _DAT_fffff666 = _DAT_fffff666 | uVar1;
  if ((uVar1 & _DAT_fffff66a) != 0) {
    _DAT_fffff66a = _DAT_fffff66a & ~uVar1;
    *psVar2 = param_2;
    _DAT_fffff666 = _DAT_fffff666 | uVar1;
  }
  if (param_2 != 0) {
    *(byte *)(param_1 - 0xd334) = *(byte *)(param_1 - 0xd334) | 1;
  }
  return;
}

