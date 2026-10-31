
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003dc4a(void)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = _DAT_ffff2b1e;
  if ((DAT_ffff2b19 & 1) == 0) {
    _DAT_ffff2b1a = _DAT_fffee6f8;
    _DAT_ffff2b1c = _DAT_fffee6f8;
    _DAT_ffff2b1e = _DAT_fffee6f8;
    _DAT_ffff2b26 = 0;
    _DAT_ffff2b28 = 0xffff;
    DAT_ffff2b19 = DAT_ffff2b19 | 1;
    uVar2 = _DAT_fffee6f8;
  }
  else {
    if (DAT_ffff2b2a != '\0') {
      _DAT_ffff2b1a = _DAT_ffff2b26;
      _DAT_ffff2b26 = 0;
      _DAT_ffff2b1c = _DAT_ffff2b28;
      _DAT_ffff2b28 = 0xffff;
      DAT_ffff2b2a = '\0';
    }
    if ((DAT_fffef32a & 8) == 0) {
      if ((DAT_fffeeec1 & 1) == 0) {
        _DAT_ffff2b1e = FUN_00001540((uint)_DAT_ffff2b1a + (uint)_DAT_ffff2b1c >> 1);
      }
      else {
        _DAT_ffff2b1e = _DAT_fffee6f8;
      }
    }
    else {
      iVar1 = __udiv32_r1_by_r0((uint)DAT_ffff03a0 * 0x10000,0xffff);
      _DAT_ffff2b1e = FUN_00001540(iVar1);
    }
  }
  _DAT_ffff2b20 =
       (short)((int)(((uint)_DAT_ffff2b1e - (uint)uVar2) +
                    (uint)((int)((uint)_DAT_ffff2b1e - (uint)uVar2) < 0)) >> 1);
  return;
}

