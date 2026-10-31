
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014cdc4(void)

{
  undefined2 uVar1;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  uStack_24 = 0xf0;
  uVar1 = FUN_00001550();
  _DAT_fffff480 = _DAT_fffff480 & 0xffbf;
  FUN_00001550(uVar1);
  FUN_0014c8d8(&DAT_ffff2050,(DAT_fffff4cb >> 4 & 7) - 1,auStack_28,auStack_2c);
  FUN_0014caa8(0xfffff4c0,0xfffff4c4,0xfffff4cb,(int)_DAT_fffff4c4,2,4,auStack_2c[0],0);
  uVar1 = FUN_00001550(uStack_24);
  _DAT_fffff480 = _DAT_fffff480 & 0xffdf;
  FUN_00001550(uVar1);
  FUN_0014c8d8(&DAT_ffff2046,((int)(char)DAT_fffff4cb & 7U) - 1,auStack_28,auStack_2c);
  FUN_0014caa8(0xfffff4c0,0xfffff4c2,0xfffff4cb,(int)_DAT_fffff4c2,2,0,auStack_2c[0],0);
  uVar1 = FUN_00001550(uStack_24);
  _DAT_fffff480 = _DAT_fffff480 & 0xff7f;
  FUN_00001550(uVar1);
  FUN_0014c8d8(&DAT_ffff2064,((int)(char)DAT_fffff4ca & 7U) - 1,auStack_28,auStack_2c);
  FUN_0014caa8(0xfffff4c0,0xfffff4c6,0xfffff4ca,(int)_DAT_fffff4c6,2,0,auStack_2c[0],0);
  uVar1 = FUN_00001550(uStack_24);
  _DAT_fffff480 = _DAT_fffff480 & 0xfeff;
  FUN_00001550(uVar1);
  FUN_0014c8d8(&DAT_ffff205a,(DAT_fffff4ca >> 4 & 7) - 1,auStack_28,auStack_2c);
  FUN_0014caa8(0xfffff4c0,0xfffff4c8,0xfffff4ca,(int)_DAT_fffff4c8,2,4,auStack_2c[0],0);
  uVar1 = FUN_00001550(uStack_24);
  _DAT_fffff482 = _DAT_fffff482 & 0xefff | 0x1e0;
  FUN_00001550(uVar1);
  DAT_ffff2082 = 0;
  return;
}

