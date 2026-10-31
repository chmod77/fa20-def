
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d5314(byte param_1,short *param_2)

{
  short sVar1;
  
  if (DAT_fffecebe < param_1) {
    sVar1 = 5000;
  }
  else {
    sVar1 = 0;
    if (_DAT_fffecebc != 0) {
      sVar1 = _DAT_fffecebc + -1;
    }
  }
  *param_2 = sVar1;
  _DAT_fffecebc = sVar1;
  DAT_fffecebe = param_1;
  return;
}

