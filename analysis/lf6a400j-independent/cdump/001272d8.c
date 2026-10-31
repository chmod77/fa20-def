
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001272d8(char param_1,byte param_2,short *param_3)

{
  short sVar1;
  
  if (param_1 == '\0') {
    sVar1 = 0;
    if (param_2 < DAT_fffee326) goto LAB_00127300;
  }
  sVar1 = -1;
  if (_DAT_fffee324 != -1) {
    sVar1 = _DAT_fffee324 + 1;
  }
LAB_00127300:
  if (param_1 != '\0') {
    sVar1 = -1;
  }
  *param_3 = sVar1;
  DAT_fffee326 = param_2;
  _DAT_fffee324 = sVar1;
  return;
}

