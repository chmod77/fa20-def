
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007be70(void)

{
  char *pcVar1;
  
  if ((_DAT_ffff7b96 == 5) &&
     (_DAT_fffeed80 = (uint)DAT_ffff6793 * 0x10000 + (uint)DAT_ffff6794 * 0x100 + (uint)DAT_ffff6795
     , _DAT_fffeed80 < 0x350)) {
    pcVar1 = (&PTR_DAT_0015f9d8)[_DAT_fffeed80];
    *pcVar1 = DAT_ffff6796;
    if (*pcVar1 != DAT_ffff6796) {
      DAT_ffff6b91 = 0x7f;
      DAT_ffff6b92 = 0xb8;
      DAT_ffff6b93 = 0x12;
      _DAT_ffff7b98 = 3;
      return;
    }
    DAT_ffff6b91 = DAT_ffff6792 + '@';
    DAT_ffff6b92 = *pcVar1;
    _DAT_ffff7b98 = 2;
    return;
  }
  DAT_ffff6b93 = 0x13;
  DAT_ffff6b92 = 0xb8;
  DAT_ffff6b91 = 0x7f;
  _DAT_ffff7b98 = 3;
  return;
}

