
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c210(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar3;
  uint uVar1;
  int iVar2;
  
  uVar3 = FUN_00001550(0xf0,param_2,param_3,FUN_00001550);
  _DAT_ffff2046 = _DAT_ffff1afc;
  if (((int)DAT_ffff66c4 & 0x80U) == 0) {
    uVar1 = FUN_0016bd78(param_1,0xfa);
    iVar2 = __sdiv32_r1_by_r0((uint)_DAT_ffff1afc * (uVar1 & 0xffff),0xfa);
  }
  else {
    iVar2 = 0;
  }
  _DAT_ffff2048 = FUN_0016bd78(iVar2,(int)(short)_DAT_ffff2046);
  FUN_00001550(uVar3);
  return;
}

