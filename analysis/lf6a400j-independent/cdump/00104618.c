
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00104618(short param_1,short *param_2)

{
  short sVar1;
  
  if (DAT_fffeda21 == '\0') {
    DAT_fffeda20 = '\0';
    DAT_fffeda21 = '\x01';
  }
  sVar1 = param_1;
  if (DAT_fffeda20 != '\0') {
    FUN_0016b520(&DAT_ffff19e0,(int)param_1,0xa3d);
    sVar1 = _DAT_ffff19e0;
  }
  _DAT_ffff19e0 = sVar1;
  DAT_fffeda20 = 1;
  *param_2 = _DAT_ffff19e0;
  return;
}

