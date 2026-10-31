
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001487d0(uint param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined2 uVar3;
  int iVar2;
  
  uVar3 = FUN_00001550(0xf0,param_2,param_3,FUN_00001550);
  iVar2 = __shl_r0_by_r1(1,param_1 & 0xff);
  uVar1 = (ushort)iVar2 & 0xff;
  if ((param_2 & 0xff) == 1) {
    _DAT_ffff66cc = _DAT_ffff66cc | 10 | uVar1;
  }
  else {
    _DAT_ffff66cc = (_DAT_ffff66cc | 10) & ~uVar1;
  }
  FUN_00001550(uVar3);
  return;
}

