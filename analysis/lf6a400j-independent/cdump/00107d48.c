
void FUN_00107d48(char param_1,char param_2,byte param_3,char param_4,char param_5,ushort param_6,
                 char param_7,char param_8,char param_9,ushort param_10,ushort param_11,
                 ushort param_12,ushort param_13,undefined1 *param_14)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_1 != '\0') {
    bVar2 = param_2 != '\0';
    bVar1 = param_3 <= DAT_fffedb2d;
    DAT_fffedb2c = false;
    if ((param_4 != '\0') && (param_5 != '\0')) {
      DAT_fffedb2c = true;
    }
    bVar3 = false;
    if (((param_7 != '\0') && (param_8 != '\0')) && (param_9 != '\0')) {
      bVar3 = true;
    }
    bVar4 = true;
    if ((param_6 < param_13) && (!bVar3)) {
      bVar4 = false;
    }
    bVar5 = true;
    if (((!bVar3) || (param_10 == 0)) && ((param_11 < param_10 || (param_10 < param_12)))) {
      bVar5 = false;
    }
    if ((((bVar2) || (bVar1)) || (!bVar4)) || ((!bVar5 || ((bool)DAT_fffedb2c)))) {
      if ((((bool)DAT_fffedb2c) &&
          ((((bVar2 || (bVar1)) || ((!bVar4 || (DAT_fffedb2c = !bVar5, (bool)DAT_fffedb2c)))) &&
           ((DAT_fffedb2c = 0, !bVar2 && (!bVar1)))))) && ((!bVar4 || (!bVar5)))) {
        DAT_fffedb2c = 1;
      }
    }
    else {
      DAT_fffedb2c = 1;
    }
  }
  if (param_1 == '\0') {
    *param_14 = 0;
  }
  else {
    *param_14 = DAT_fffedb2c;
  }
  DAT_fffedb2d = param_3;
  return;
}

