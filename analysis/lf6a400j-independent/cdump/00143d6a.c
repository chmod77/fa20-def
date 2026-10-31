
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00143d6a(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_ffff2b84 = 0;
  _DAT_ffff2b80 = 0;
  _DAT_ffff2b88 = 0;
  DAT_ffff2bbe = DAT_ffff2bbe & 0x3f;
  DAT_ffff1a4c = 0x7f;
  _DAT_ffff2b8c = 0xffffffff;
  _DAT_ffff2b6c = 0xffff;
  _DAT_ffff2b90 = 0xffffffff;
  _DAT_ffff1a40 = 0xffff;
  _DAT_ffff2b98 = 0xffffffff;
  _DAT_ffff1a3e = 0xffff;
  _DAT_ffff2b94 = 0xffffffff;
  _DAT_ffff1a42 = 0xffff;
  _DAT_ffff2b78 = 0xffffffff;
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    *(undefined2 *)(iVar1 + -0xd490) = 0xffff;
    *(undefined2 *)(iVar1 + -0xd452) = 0xffff;
    *(undefined2 *)(iVar1 + -0xd44a) = 0xffff;
    iVar1 = iVar1 + 2;
  }
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    *(undefined4 *)(iVar1 + -0xd464) = 0xffffffff;
    iVar1 = iVar1 + 4;
  }
  DAT_ffff2bac = 0;
  DAT_ffff1a3c = 0;
  _DAT_ffff1a3a = 0;
  DAT_ffff2b7c = DAT_ffff2b7c & 0x1f;
  DAT_ffff2b7d = 0;
  FUN_00142a24();
  _DAT_fffff42c = _DAT_fffff42c & 0xfffe;
  _DAT_fffff42e = _DAT_fffff42e | 1;
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(undefined1 *)(iVar1 + -0xd401) = 0xff;
    *(undefined1 *)(iVar1 + -0xd3fd) = 0;
  }
  DAT_ffff2c07 = 0xff;
  DAT_ffff1a20 = 0;
  return;
}

