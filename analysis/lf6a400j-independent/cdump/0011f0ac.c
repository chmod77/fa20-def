
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011f0ac(char param_1,char param_2,char param_3,short *param_4)

{
  short sVar1;
  
  if ((param_2 == '\0') || (param_3 != '\0')) {
    sVar1 = 0;
  }
  else {
    sVar1 = -1;
    if (_DAT_fffee144 != -1) {
      sVar1 = _DAT_fffee144 + 1;
    }
  }
  if ((param_1 != '\0') ||
     (((param_2 != '\0' && (((param_3 == '\x02' || (param_3 == '\x03')) || (param_3 == '\x04')))) ||
      ((param_2 != '\0' && (param_3 == '\x01')))))) {
    sVar1 = 0;
  }
  *param_4 = sVar1;
  _DAT_fffee144 = sVar1;
  return;
}

