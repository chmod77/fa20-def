
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00109120(char param_1,undefined2 param_2,ushort param_3,char param_4,byte param_5,
                 ushort param_6,ushort param_7,char param_8,undefined1 *param_9)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_1 != '\0') && (DAT_fffedbc5 != '\0')) && (param_8 == '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    DAT_fffedbc0 = 0;
    if ((param_3 <= _DAT_fffedbc2) &&
       (((param_4 != '\0' && (DAT_fffedbc4 <= param_5)) ||
        ((DAT_fffedbc4 > param_5 && (param_6 <= param_7)))))) {
      DAT_fffedbc0 = 1;
    }
  }
  if (bVar1) {
    *param_9 = DAT_fffedbc0;
  }
  else {
    *param_9 = 0;
  }
  DAT_fffedbc5 = param_1;
  DAT_fffedbc4 = param_5;
  _DAT_fffedbc2 = param_2;
  return;
}

