
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011ef84(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,short *param_14)

{
  short sVar1;
  
  if ((((((param_12 == '\0') || (param_1 != '\0')) && ((param_13 == '\0' || (param_11 != '\0')))) &&
       (((param_9 != '\0' && (param_8 == '\0')) && (param_2 == '\0')))) &&
      ((((param_4 == '\0' && (param_5 == '\0')) && (param_6 == '\0')) || (param_3 == '\0')))) &&
     ((param_10 == '\0' || (param_7 == '\0')))) {
    sVar1 = -1;
    if (_DAT_fffee13c != -1) {
      sVar1 = _DAT_fffee13c + 1;
    }
  }
  else {
    sVar1 = 0;
  }
  *param_14 = sVar1;
  _DAT_fffee13c = sVar1;
  return;
}

