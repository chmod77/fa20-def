
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014a142(ushort param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffff6740 = _DAT_ffff6740 & 0xfff8 | param_1 & 0xff;
  FUN_00001550(uVar1);
  return;
}

