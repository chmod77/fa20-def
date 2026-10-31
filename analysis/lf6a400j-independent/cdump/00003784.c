
/* WARNING: Removing unreachable block (ram,0x000037ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003784(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) * 0x271 >> 1;
  _DAT_fffff650 = (undefined2)uVar1;
  if ((uVar1 & 0xffff) == 0) {
    _DAT_fffff650 = 1;
  }
  _DAT_fffff666 = _DAT_fffff666 | 0x100;
  _DAT_fffff66a = _DAT_fffff66a & 0xfeff;
  return;
}

