
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014f7ae(uint param_1,undefined2 param_2)

{
  ushort uVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)(&DAT_00168ce8)[(param_1 & 0xff) * 4];
  uVar1 = *(ushort *)(&PTR_LAB_00168cec + (param_1 & 0xff) * 4);
  _DAT_fffff66a = _DAT_fffff66a & ~uVar1;
  *puVar2 = param_2;
  _DAT_fffff666 = _DAT_fffff666 | uVar1;
  if ((uVar1 & _DAT_fffff66a) != 0) {
    _DAT_fffff66a = _DAT_fffff66a & ~uVar1;
    *puVar2 = param_2;
    _DAT_fffff666 = _DAT_fffff666 | uVar1;
  }
  return;
}

