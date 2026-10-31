
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00109564(char param_1,char param_2,ushort param_3,ushort param_4,char param_5,char param_6,
                 undefined2 param_7,char param_8,undefined2 param_9,undefined1 param_10,
                 char param_11,ushort param_12,ushort param_13,char *param_14)

{
  ushort uVar1;
  ushort uVar2;
  
  if (param_1 == '?') {
    uVar1 = 0;
    if (param_3 <= param_4) {
      uVar1 = param_4 - param_3;
    }
    if (param_3 < param_4) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_3 - param_4;
    }
    if ((((param_5 == '\0') ||
         ((((param_6 != '\0' && (DAT_fffedbe4 != '\0')) &&
           ((param_12 <= _DAT_fffedbde || (param_13 <= _DAT_fffedbe0)))) ||
          ((uVar1 < 0x140 && (DAT_fffedbe3 != '\0')))))) ||
        ((uVar2 < 0x140 && (DAT_fffedbe2 != '\0')))) || ((param_8 != '\0' && (param_11 != '\0')))) {
      DAT_fffedbe3 = '\0';
    }
    DAT_fffedbdc = DAT_fffedbe3;
    if ((param_2 != '\0') && (param_3 < param_4)) {
      DAT_fffedbdc = '\x01';
    }
  }
  DAT_fffedbe3 = '\0';
  if (param_1 == '?') {
    DAT_fffedbe3 = DAT_fffedbdc;
  }
  *param_14 = DAT_fffedbe3;
  _DAT_fffedbe0 = param_9;
  _DAT_fffedbde = param_7;
  DAT_fffedbe2 = param_10;
  DAT_fffedbe4 = param_6;
  return;
}

