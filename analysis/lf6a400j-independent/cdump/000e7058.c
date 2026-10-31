
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e7058(char param_1,char param_2,short *param_3)

{
  short sVar1;
  
  if (((param_1 == '\x02') && (DAT_fffed39e == '\x01')) ||
     ((DAT_fffed39e == '\x01' && (param_1 == '\x03')))) {
    DAT_fffed39f = '\x01';
  }
  if ((param_1 == '\x05') || (param_1 == '\x01')) {
    DAT_fffed39f = '\0';
  }
  sVar1 = _DAT_fffed39c;
  if (((param_1 == '\x03') && (DAT_fffed39f != '\0')) && (sVar1 = -1, _DAT_fffed39c != -1)) {
    sVar1 = _DAT_fffed39c + 1;
  }
  if ((param_2 != '\0') || (param_1 == '\x01')) {
    sVar1 = 0;
  }
  *param_3 = sVar1;
  _DAT_fffed39c = sVar1;
  DAT_fffed39e = param_1;
  return;
}

