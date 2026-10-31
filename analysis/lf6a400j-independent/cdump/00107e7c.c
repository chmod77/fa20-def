
void FUN_00107e7c(char param_1,char param_2,byte param_3,char param_4,char param_5,ushort param_6,
                 ushort param_7,ushort param_8,char param_9,char param_10,char param_11,
                 undefined4 param_12,undefined1 *param_13)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_1 != '\0') {
    bVar4 = param_2 != '\0';
    bVar3 = param_3 <= DAT_fffedb31;
    DAT_fffedb30 = false;
    if ((param_4 != '\0') && (param_5 != '\0')) {
      DAT_fffedb30 = true;
    }
    bVar1 = param_7 <= param_6;
    bVar2 = param_6 < param_8;
    bVar5 = false;
    if (((param_9 != '\0') && (param_10 != '\0')) && (param_11 != '\0')) {
      bVar5 = true;
    }
    if ((((bVar4) || (bVar3)) || ((bVar1 || ((bVar2 && (!bVar5)))))) || ((bool)DAT_fffedb30)) {
      if (((((bool)DAT_fffedb30) &&
           ((((bVar4 || (bVar3)) || (bVar1)) || (DAT_fffedb30 = !bVar5, !bVar5)))) &&
          (((bVar4 || (bVar3)) || ((bVar2 || (DAT_fffedb30 = bVar1, bVar1)))))) &&
         (((DAT_fffedb30 = 0, !bVar4 && (!bVar3)) && ((bVar2 || (bVar1)))))) {
        DAT_fffedb30 = 1;
      }
    }
    else {
      DAT_fffedb30 = 1;
    }
  }
  if (param_1 == '\0') {
    *param_13 = 0;
  }
  else {
    *param_13 = DAT_fffedb30;
  }
  DAT_fffedb31 = param_3;
  return;
}

