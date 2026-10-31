
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000635ba(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff0353;
  if (((uVar1 == 1) && (DAT_ffff0354 == '\0')) && (DAT_ffff0028 == '\0')) {
    if (_DAT_ffff017c < 0x32) {
      DAT_ffff0352 = 1;
      _DAT_ffff017c = _DAT_ffff017c + 1;
    }
    else {
      DAT_fffefff7 = DAT_fffefff7 | 2;
      _DAT_ffff017c = 0x32;
    }
    if (((int)DAT_ffff20cc & 2U) != 0) {
      return (int)DAT_ffff20cc;
    }
    uVar1 = (uint)DAT_ffff0006;
    if ((uVar1 & 2) != 0) {
      return uVar1;
    }
  }
  _DAT_ffff017c = 0;
  return uVar1;
}

