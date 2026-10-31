
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00150668(uint param_1)

{
  undefined4 uVar1;
  
  param_1 = param_1 & 0xff;
  _DAT_fffff66a = _DAT_fffff66a & ~*(ushort *)(&PTR_LAB_00168cec + param_1 * 4);
  _DAT_fffff66c = _DAT_fffff66c & ~*(ushort *)(&PTR_LAB_00168cec + param_1 * 4);
  uVar1 = FUN_00001550(0xf0);
  *(byte *)(param_1 - 0xd330) = *(byte *)(param_1 - 0xd330) & 0xfe;
  FUN_00001550(uVar1);
  return;
}

