
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0014d600(void)

{
  undefined2 uVar2;
  undefined4 uVar1;
  undefined1 auStack_18 [4];
  undefined2 auStack_14 [4];
  
  uVar2 = FUN_00001550(0xf0);
  _DAT_fffff480 = _DAT_fffff480 & 0xff7f;
  FUN_00001550(uVar2);
  if (DAT_ffff2082 == '\0') {
    FUN_0014c8d8(&DAT_ffff2064,((int)DAT_fffff4ca & 7U) - 1,auStack_14,auStack_18);
    uVar1 = FUN_0014caa8(0xfffff4c0,0xfffff4c6,0xfffff4ca,(int)_DAT_fffff4c6,auStack_14[0],0,
                         auStack_18[0],0);
  }
  else {
    uVar2 = FUN_00001550(0xf0);
    _DAT_fffff482 = _DAT_fffff482 & 0xff7f;
    uVar1 = FUN_00001550(uVar2);
  }
  return uVar1;
}

