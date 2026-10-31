
void FUN_00109450(char param_1,char param_2,byte param_3,ushort param_4,char param_5,char param_6,
                 char param_7,ushort param_8,ushort param_9,ushort param_10,char param_11,
                 char param_12,ushort param_13,undefined1 *param_14)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_1 != '\0') {
    bVar2 = false;
    if (((param_5 != '\0') && (param_6 != '\0')) && (param_7 != '\0')) {
      bVar2 = true;
    }
    bVar1 = false;
    if ((param_11 != '\0') && (param_12 != '\0')) {
      bVar1 = true;
    }
    bVar3 = true;
    if ((param_4 < param_13) && (!bVar2)) {
      bVar3 = false;
    }
    bVar4 = true;
    if (((param_8 < param_9) || (param_10 < param_8)) && ((param_8 == 0 || (!bVar2)))) {
      bVar4 = false;
    }
    if (((((param_2 == '\0') && (DAT_fffedbd9 < param_3)) && (bVar3)) && ((bVar4 && (!bVar1)))) ||
       (!bVar1)) {
      DAT_fffedbd8 = 0;
    }
    else {
      DAT_fffedbd8 = 0;
      if (((param_2 == '\0') && (DAT_fffedbd9 < param_3)) && ((bVar3 && (bVar4)))) {
        DAT_fffedbd8 = 1;
      }
    }
  }
  if (param_1 == '\0') {
    *param_14 = 0;
  }
  else {
    *param_14 = DAT_fffedbd8;
  }
  DAT_fffedbd9 = param_3;
  return;
}

