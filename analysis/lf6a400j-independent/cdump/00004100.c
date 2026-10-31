
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004100(void)

{
  int *in_r1;
  int in_r2;
  int *in_r7;
  
  *in_r7 = in_r2;
  if ((DAT_ffff6793 == '\x04') && (DAT_ffff6794 == '3')) {
    if (_DAT_ffff8ed0 == 9) {
      *in_r1 = (uint)DAT_ffff6795 * 0x10000 + (uint)DAT_ffff6796 * 0x100 + (uint)DAT_ffff6797;
      *in_r7 = (uint)DAT_ffff6798 * 0x10000 + (uint)DAT_ffff6799 * 0x100 + (uint)DAT_ffff679a;
      _DAT_ffff7bb4 = *in_r1 + *in_r7 + -1;
      if (((&DAT_00007fff < (undefined *)*in_r1) && ((undefined *)*in_r7 < &UNK_00178001)) &&
         (((int)DAT_ffff678a & 0x80U) != 0)) {
        DAT_ffff6b91 = 0x74;
        DAT_ffff6b92 = 0x20;
        DAT_ffff6b93 = 1;
        DAT_ffff6b94 = 4;
        _DAT_ffff7b98 = 4;
        return;
      }
      DAT_ffff6b93 = 0x22;
    }
    else {
      DAT_ffff6b93 = 0x13;
    }
  }
  else {
    DAT_ffff6b93 = 0x12;
  }
  DAT_ffff6b92 = 0x34;
  DAT_ffff6b91 = 0x7f;
  _DAT_ffff7b98 = 3;
  return;
}

