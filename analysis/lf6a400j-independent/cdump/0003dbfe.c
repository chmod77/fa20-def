
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0003dbfe(void)

{
  int iVar1;
  
  DAT_fffef21e = FUN_0000152c(DAT_fffef21e + 1);
  if (DAT_fffef21e == '\x01') {
    _DAT_fffef21c = _DAT_fffee6f8;
    _DAT_fffef218 = _DAT_fffee6f8;
    iVar1 = 1;
  }
  else {
    iVar1 = (int)(char)DAT_fffef21e;
    if (iVar1 == 2) {
      _DAT_fffef21c = (ushort)((uint)_DAT_fffef21c + (uint)_DAT_fffee6f8 >> 1);
      _DAT_fffef21a = _DAT_fffee6f8;
    }
  }
  return iVar1;
}

