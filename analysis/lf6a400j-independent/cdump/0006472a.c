
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0006472a(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_00064754((int)_DAT_ffff00ca,&DAT_ffff34e4,&LAB_00001388);
  FUN_00064754((int)_DAT_ffff00cc,&DAT_ffff34e6,&LAB_00001388);
  iVar1 = (int)(short)_DAT_ffff00ce;
  uVar2 = (uint)_DAT_ffff00ce;
  if (_DAT_ffff34e8 < uVar2) {
    if (20000 < (int)(uVar2 - _DAT_ffff34e8)) {
      _DAT_ffff34e8 = _DAT_ffff34e8 + 20000;
      return iVar1;
    }
  }
  else if (20000 < (int)(_DAT_ffff34e8 - uVar2)) {
    _DAT_ffff34e8 = _DAT_ffff34e8 + 0xb1e0;
    return iVar1;
  }
  _DAT_ffff34e8 = _DAT_ffff00ce;
  return iVar1;
}

