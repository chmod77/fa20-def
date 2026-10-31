
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011a760(char param_1,char param_2,char param_3,byte param_4,char param_5,short *param_6)

{
  short sVar1;
  
  if ((param_1 == '\0') || (sVar1 = 0, param_2 != '\0')) {
    sVar1 = _DAT_fffee018;
  }
  if ((((param_1 != '\0') && (param_2 != '\0')) && (param_3 == '\0')) &&
     ((3 < param_4 && (sVar1 = -1, _DAT_fffee018 != -1)))) {
    sVar1 = _DAT_fffee018 + 1;
  }
  if ((param_5 != '\0') || (param_1 == '\0')) {
    sVar1 = 0;
  }
  *param_6 = sVar1;
  _DAT_fffee018 = sVar1;
  return;
}

