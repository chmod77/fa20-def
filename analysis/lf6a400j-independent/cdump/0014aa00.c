
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014aa00(void)

{
  undefined *puVar1;
  
  _DAT_ffffab78 = _DAT_fffff822;
  FUN_00149aa0();
  puVar1 = (undefined *)((uint)_DAT_ffffabd0 * (uint)_DAT_ffffab78 >> 0xf);
  _DAT_ffffab7a = 0xffc0;
  if (puVar1 < &UNK_0000ffc1) {
    _DAT_ffffab7a = (ushort)puVar1;
  }
  DAT_ffff2c5c = FUN_0000152c((int)((ulonglong)((longlong)(int)(uint)_DAT_ffffab7a * 0x2000000) >>
                                   0x20));
  _DAT_ffff2c5e = FUN_00001540((uint)_DAT_ffffab7a << 1);
  _DAT_ffff2c60 = _DAT_ffffab78 >> 6;
  return;
}

