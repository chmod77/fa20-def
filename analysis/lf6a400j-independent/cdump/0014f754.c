
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014f754(uint param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)(&DAT_00168ce8)[(param_1 & 0xff) * 4];
  uVar1 = *(ushort *)(&PTR_LAB_00168cec + (param_1 & 0xff) * 4);
  uVar2 = FUN_00001540((uint)*puVar3 + (param_2 & 0xffff));
  _DAT_fffff66a = _DAT_fffff66a & ~uVar1;
  *puVar3 = uVar2;
  _DAT_fffff666 = _DAT_fffff666 | uVar1;
  if ((uVar1 & _DAT_fffff66a) != 0) {
    _DAT_fffff66a = _DAT_fffff66a & ~uVar1;
    *puVar3 = uVar2;
    _DAT_fffff666 = _DAT_fffff666 | uVar1;
  }
  return;
}

