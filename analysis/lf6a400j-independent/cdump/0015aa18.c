
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015aa18(void)

{
  undefined2 uVar2;
  int iVar1;
  
  uVar2 = FUN_00001550(0xf0);
  if (0x7f < DAT_ffff2f14) {
    iVar1 = ((int)(char)DAT_ffff2f14 & 0x7fU) * 8;
    _DAT_ffff2f3c = *(int *)(iVar1 + -0xd0e4) - *(int *)(iVar1 + -0xd0e8);
  }
  FUN_00001550(uVar2);
  return;
}

