
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c0e2(undefined1 param_1)

{
  undefined2 uVar2;
  int iVar1;
  
  uVar2 = FUN_00001550(0xf0);
  _DAT_ffff2028 = 32000;
  if (((int)DAT_ffff66c4 & 0x80U) == 0) {
    iVar1 = FUN_0016bd78(param_1,0xfa);
    iVar1 = iVar1 << 7;
  }
  else {
    iVar1 = 0;
  }
  _DAT_ffff202a = FUN_0016bd78(iVar1,(int)_DAT_ffff2028);
  FUN_00001550(uVar2);
  return;
}

