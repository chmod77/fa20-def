
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009acd4(uint param_1,uint param_2,undefined2 *param_3,undefined2 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = LK_1364B8((uint)&T_02D7E8,param_2,param_1);
  *param_4 = (short)uVar1;
  iVar2 = (uVar1 & 0xffff) - (uint)_DAT_fffebfe8;
  _DAT_fffebfe8 = _DAT_fffebfea;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    *param_3 = (short)iVar2;
  }
  else {
    uVar3 = (undefined2)iVar2;
    if (iVar2 < 0) {
      uVar3 = 0;
    }
    *param_3 = uVar3;
  }
  _DAT_fffebfea = (short)uVar1;
  return;
}

