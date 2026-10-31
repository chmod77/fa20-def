
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011a7cc(char param_1,byte param_2,char param_3,short *param_4)

{
  short sVar1;
  
  sVar1 = _DAT_fffee01c;
  if (((param_1 != '\0') && (param_2 != 0)) && (sVar1 = -1, _DAT_fffee01c != -1)) {
    sVar1 = _DAT_fffee01c + 1;
  }
  if (((param_3 != '\0') || (param_1 == '\0')) || ((param_1 != '\0' && (DAT_fffee01e < param_2)))) {
    sVar1 = 0;
  }
  *param_4 = sVar1;
  _DAT_fffee01c = sVar1;
  DAT_fffee01e = param_2;
  return;
}

