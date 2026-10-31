
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00076268(byte param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1;
  uVar2 = 0;
  if (DAT_ffff8574 == '\x01') {
    uVar2 = 0x33;
  }
  else if (*(char *)(uVar3 - 0x7ae0) != '\0') {
    if ((uint)_DAT_ffff7b98 + (uint)*(byte *)(uVar3 - 0x7ae0) < 0x1000) {
      (&DAT_ffff6b91)[_DAT_ffff7b98] = 0xf2;
      (&DAT_ffff6b92)[_DAT_ffff7b98] = param_1;
      _DAT_ffff7b98 = _DAT_ffff7b98 + 2;
      for (uVar1 = 0; (uVar1 & 0xff) < (uint)*(byte *)(uVar3 - 0x7ae0); uVar1 = (uVar1 & 0xff) + 1)
      {
        (&DAT_ffff6b91)[_DAT_ffff7b98] =
             **(undefined1 **)((uVar1 & 0xff) * 4 + uVar3 * 0x1c + -0x8058);
        _DAT_ffff7b98 = _DAT_ffff7b98 + 1;
      }
    }
    else {
      uVar2 = 0x31;
    }
  }
  return uVar2;
}

