
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c606(undefined1 param_1)

{
  undefined2 uVar2;
  uint uVar1;
  int iVar3;
  
  uVar2 = FUN_00001550(0xf0);
  _DAT_ffff2078 = 0x186a;
  if (((int)DAT_ffff66c4 & 0x80U) == 0) {
    uVar1 = FUN_0016bd78(param_1,0xfa);
    iVar3 = (uVar1 & 0xffff) * 0x19;
  }
  else {
    iVar3 = 0;
  }
  _DAT_ffff207a = FUN_0016bd78(iVar3,(int)_DAT_ffff2078);
  FUN_00001550(uVar2);
  return;
}

