
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0014aa90(void)

{
  int iVar1;
  undefined *puVar2;
  uint a;
  
  _DAT_ffff1f14 = _DAT_fffff828;
  FUN_00149aa0();
  puVar2 = (undefined *)((uint)_DAT_ffffabd0 * (uint)_DAT_ffff1f14 >> 0xf);
  if (&DAT_0000ffc0 < puVar2) {
    puVar2 = &DAT_0000ffc0;
  }
  _DAT_ffff1f16 = (short)puVar2;
  iVar1 = (int)_DAT_ffff1f16;
  a = ((uint)puVar2 & 0xffff) * 0x1a1;
  if (a < 0xfffe0002) {
    iVar1 = __udiv32_r1_by_r0(a,(int)&DAT_0000ffff);
    _DAT_ffff1fa2 = (undefined2)iVar1;
  }
  else {
    _DAT_ffff1fa2 = 0xffff;
  }
  return iVar1;
}

