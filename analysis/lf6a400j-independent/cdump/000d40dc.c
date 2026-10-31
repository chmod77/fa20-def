
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d40dc(byte param_1,uint param_2,ushort param_3,undefined2 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar3;
  
  bVar1 = param_1 < DAT_fffece42;
  uVar3 = _DAT_fffece40;
  if ((bVar1) && (0x1900 < param_3)) {
    uVar2 = LK_133E10((uint)&T_02ED68,param_2);
    uVar3 = (short)uVar2;
  }
  if ((bVar1) && (0x1900 >= param_3)) {
    uVar2 = LK_133E10((uint)&T_02ED5C,param_2 & 0xff);
    uVar3 = (short)uVar2;
  }
  *param_4 = uVar3;
  _DAT_fffece40 = uVar3;
  DAT_fffece42 = param_1;
  return;
}

