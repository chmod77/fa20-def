
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000963f0(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char *param_9,ushort *param_10)

{
  char cVar1;
  ushort uVar2;
  
  if (((((param_3 == '\0') || (param_5 != '\0')) || (param_6 != '\0')) ||
      ((param_7 != '\0' && (param_8 != '\0')))) ||
     ((param_4 != '\0' || ((param_2 == '\0' || (uVar2 = _DAT_fffebf22, DAT_fffebf24 != '\0')))))) {
    uVar2 = 0;
  }
  if ((((param_3 == '\0') || (param_5 != '\0')) || (param_6 != '\0')) ||
     (((param_7 != '\0' && (param_8 != '\0')) ||
      ((param_4 != '\0' || ((param_2 == '\0' || (DAT_fffebf24 != '\0')))))))) {
    _DAT_fffebf22 = 0;
  }
  else if (uVar2 == 0xffff) {
    _DAT_fffebf22 = -1;
  }
  else {
    _DAT_fffebf22 = uVar2 + 1;
  }
  *param_10 = uVar2;
  if ((0x4b < _DAT_fffebf20) || (cVar1 = '\x01', uVar2 < 0x4c)) {
    cVar1 = DAT_fffebf24;
  }
  if ((param_1 == '\0') || (param_2 == '\0')) {
    cVar1 = '\0';
  }
  *param_9 = cVar1;
  DAT_fffebf24 = cVar1;
  _DAT_fffebf20 = uVar2;
  return;
}

