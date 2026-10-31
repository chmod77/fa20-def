
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ca770(char param_1,char param_2,char param_3,byte param_4,byte param_5,char param_6,
                 char param_7,char param_8,short param_9,undefined1 *param_10)

{
  short sVar1;
  short sVar2;
  
  if (param_1 != '\0') {
    if (((param_9 != 100) || (sVar2 = 2, _DAT_fffecbae == 100)) && (sVar2 = 0, _DAT_fffecbb0 != 0))
    {
      sVar2 = _DAT_fffecbb0 + -1;
    }
    sVar1 = 0;
    if (sVar2 != 0) {
      sVar1 = sVar2;
    }
    DAT_fffecbac = 0;
    if (sVar1 != 0) {
      DAT_fffecbac = DAT_fffecbb2;
    }
    if (param_2 == '\0') {
      DAT_fffecbac = 0;
    }
    else if (((param_3 == '\x02') && (param_5 < param_4)) &&
            ((param_6 != '\0' || (param_7 != '\0')))) {
      DAT_fffecbac = 1;
    }
    else if (((param_3 == '\x04') && (param_4 < param_5)) &&
            ((param_6 != '\0' || (param_8 != '\0')))) {
      DAT_fffecbac = 2;
    }
    _DAT_fffecbae = param_9;
    _DAT_fffecbb0 = sVar2;
  }
  *param_10 = DAT_fffecbac;
  DAT_fffecbb2 = DAT_fffecbac;
  return;
}

