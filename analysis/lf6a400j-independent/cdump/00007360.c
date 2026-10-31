
/* WARNING: Removing unreachable block (ram,0x000073a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007360(uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00001550(0xf0);
  uVar2 = (param_1 & 0xffff) * 0x271 >> 1;
  _DAT_fffff650 = (undefined2)uVar2;
  if ((uVar2 & 0xffff) == 0) {
    _DAT_fffff650 = 1;
  }
  _DAT_fffff66a = _DAT_fffff66a & 0xfeff;
  _DAT_fffff666 = _DAT_fffff666 | 0x100;
  _DAT_fffff66c = _DAT_fffff66c | 0x100;
  FUN_00001550(uVar1);
  return;
}

