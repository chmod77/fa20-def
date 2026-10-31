
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00109690(char param_1,char param_2,ushort param_3,ushort param_4,char param_5,char param_6,
                 undefined2 param_7,char param_8,undefined2 param_9,char param_10,char param_11,
                 ushort param_12,ushort param_13,char *param_14)

{
  ushort uVar1;
  ushort uVar2;
  
  if (param_1 == '?') {
    uVar1 = 0;
    if (param_3 <= param_4) {
      uVar1 = param_4 - param_3;
    }
    uVar2 = 0;
    if (param_4 <= param_3) {
      uVar2 = param_3 - param_4;
    }
    if ((((param_5 == '\0') ||
         ((((param_6 != '\0' && (DAT_fffedbee != '\0')) &&
           ((param_12 <= _DAT_fffedbea || (param_13 <= _DAT_fffedbec)))) ||
          ((uVar1 < 0x140 && (param_10 != '\0')))))) || ((uVar2 < 0x140 && (DAT_fffedbef != '\0'))))
       || ((param_8 != '\0' && (param_11 != '\0')))) {
      DAT_fffedbef = '\0';
    }
    DAT_fffedbe8 = DAT_fffedbef;
    if ((param_2 != '\0') && (param_4 <= param_3)) {
      DAT_fffedbe8 = '\x01';
    }
  }
  DAT_fffedbef = '\0';
  if (param_1 == '?') {
    DAT_fffedbef = DAT_fffedbe8;
  }
  *param_14 = DAT_fffedbef;
  _DAT_fffedbec = param_9;
  _DAT_fffedbea = param_7;
  DAT_fffedbee = param_6;
  return;
}

