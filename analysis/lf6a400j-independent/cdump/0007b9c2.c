
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0007b9c2(void)

{
  uint uVar1;
  
  if (_DAT_ffff7b96 == 2) {
    if (DAT_ffff8569 == 0) {
      DAT_ffff19fa = DAT_ffff19fa | 0x20;
    }
    if (DAT_ffff8569 < 4) {
      uVar1 = (uint)DAT_ffff8723;
      DAT_ffff8723 = (char)(uVar1 | 0x80);
      DAT_ffff8572 = 0x19;
      return uVar1 | 0x80;
    }
    DAT_ffff6b91 = 0x59;
    DAT_ffff6b92 = DAT_ffff6793;
    DAT_ffff6b93 = 0x7f;
    _DAT_ffff7b98 = _DAT_ffff7b98 + 3;
    DAT_ffff8569 = 0;
    DAT_ffff19fa = DAT_ffff19fa & 0xdf;
    uVar1 = (int)DAT_ffff8723 & 0x7f;
    DAT_ffff8723 = (char)uVar1;
  }
  else {
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 0x19;
    uVar1 = 0x13;
    DAT_ffff6b93 = 0x13;
    _DAT_ffff7b98 = 3;
  }
  return uVar1;
}

