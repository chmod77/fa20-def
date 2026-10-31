
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0014f028(void)

{
  uint uVar1;
  
  if (*(char *)(&DAT_00162a28)[*(byte *)((int)&PTR_DAT_00162a38 + (uint)DAT_ffff2ca6)] == '\x02') {
    return 2;
  }
  _DAT_fffff5c4 = _DAT_fffff5c0 + -2;
  if ((_DAT_fffff5ca & 2) == 0) {
    DAT_fffff5c6 = DAT_fffff5c6 & 0xf;
    _DAT_fffff5ca = _DAT_fffff5ca & 0xfffd;
    uVar1 = (uint)_DAT_fffff5cc;
    _DAT_fffff5cc = (short)(uVar1 & 0xfffffffd);
    return uVar1 & 0xfffffffd;
  }
  uVar1 = FUN_0014ef96();
  return uVar1;
}

