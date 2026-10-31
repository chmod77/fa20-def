
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00143cde(void)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  
  uVar3 = FUN_00001550(0xf0);
  sVar2 = _DAT_fffff5c0;
  iVar1 = _DAT_fffff430;
  FUN_00001550(uVar3);
  sVar4 = FUN_00001540((uint)(iVar1 - _DAT_ffff2b88) >> 5);
  _DAT_ffff1a44 = sVar2 - sVar4;
  return;
}

