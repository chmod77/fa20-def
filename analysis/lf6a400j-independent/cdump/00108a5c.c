
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108a5c(char param_1,undefined2 param_2,ushort param_3,byte param_4,char param_5,
                 char param_6,undefined1 *param_7)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if (((param_1 != '\0') && (DAT_fffedb80 != '\0')) && (param_6 == '\0')) {
    bVar1 = true;
  }
  if ((bVar1) && (DAT_fffedb7c = 0, param_3 <= _DAT_fffedb7e)) {
    bVar2 = true;
    if ((DAT_fffedb81 <= param_4) && (param_5 == '\0')) {
      bVar2 = false;
    }
    if (!bVar2) {
      DAT_fffedb7c = 1;
    }
  }
  if (bVar1) {
    *param_7 = DAT_fffedb7c;
  }
  else {
    *param_7 = 0;
  }
  _DAT_fffedb7e = param_2;
  DAT_fffedb81 = param_4;
  DAT_fffedb80 = param_1;
  return;
}

