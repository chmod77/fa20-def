
/* WARNING: Removing unreachable block (ram,0x00149e1c) */
/* WARNING: Removing unreachable block (ram,0x00149e76) */
/* WARNING: Removing unreachable block (ram,0x00149e80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00149d20(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  do {
  } while (((int)DAT_fffff818 & 0x80U) == 0);
  FUN_0014a8c4();
  FUN_0014a93a();
  uVar2 = FUN_00001550(0xf0);
  FUN_0014a294(0xd);
  uVar1 = _DAT_fffff822;
  FUN_00001550(uVar2);
  _DAT_ffffab78 = uVar1;
  FUN_00149aa0();
  puVar4 = (undefined *)((uint)_DAT_ffffabd0 * (uint)_DAT_ffffab78 >> 0xf);
  puVar3 = &DAT_0000ffc0;
  if (puVar4 < &UNK_0000ffc1) {
    puVar3 = puVar4;
  }
  _DAT_ffffab7a = (ushort)puVar3;
  DAT_ffff2c5c = FUN_0000152c((int)((ulonglong)((longlong)(int)((uint)puVar3 & 0xffff) * 0x2000000)
                                   >> 0x20));
  _DAT_ffff2c5e = FUN_00001540((uint)_DAT_ffffab7a << 1);
  _DAT_ffff2c60 = _DAT_ffffab78 >> 6;
  FUN_0014ae50();
  FUN_0014af60();
  FUN_0014afdc();
  FUN_00001550(0xf0);
  do {
  } while( true );
}

