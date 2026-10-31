
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c844(void)

{
  undefined2 uVar1;
  undefined1 auStack_14 [4];
  undefined2 auStack_10 [4];
  
  uVar1 = FUN_00001550(0xf0);
  _DAT_fffff62c = _DAT_fffff62c & 0xffdf;
  FUN_00001550(uVar1);
  FUN_0014c8d8(&DAT_ffff2028,(DAT_fffff629 >> 4 & 7) - 1,auStack_10,auStack_14);
  FUN_0014caa8(0xfffff600,0xfffff60e,0xfffff629,(int)_DAT_fffff60e,auStack_10[0],4,auStack_14[0],0);
  return;
}

