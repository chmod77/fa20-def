
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dba24(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,ushort *param_8)

{
  ushort uVar1;
  
  uVar1 = 1;
  if (((param_4 == '\0') && (param_5 == '\0')) && (param_6 == '\0')) {
    uVar1 = 0;
  }
  if ((param_1 != '\0') && (_DAT_fffed090 = uVar1 + _DAT_fffed090, _DAT_fffed090 < uVar1)) {
    _DAT_fffed090 = 0xffff;
  }
  if ((param_7 != '\0') || (param_3 != '\0')) {
    _DAT_fffed090 = 0;
  }
  *param_8 = _DAT_fffed090;
  if (param_2 != '\0') {
    _DAT_fffed090 = 0;
  }
  return;
}

