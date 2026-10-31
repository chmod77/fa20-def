
/* WARNING: Removing unreachable block (ram,0x00007448) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007410(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) * 0x271 >> 1;
  _DAT_fffff652 = (undefined2)uVar1;
  if ((uVar1 & 0xffff) == 0) {
    _DAT_fffff652 = 1;
  }
  _DAT_fffff666 = _DAT_fffff666 | 0x200;
  _DAT_fffff66a = _DAT_fffff66a & 0xfdff;
  _DAT_fffff66c = _DAT_fffff66c | 0x200;
  return;
}

