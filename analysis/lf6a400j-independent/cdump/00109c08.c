
void FUN_00109c08(char param_1,char param_2,byte param_3,ushort param_4,ushort param_5,
                 ushort param_6,char param_7,char param_8,char param_9,char param_10,char param_11,
                 undefined4 param_12,undefined1 *param_13)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_1 != '\0') {
    bVar3 = param_2 == '\0';
    bVar2 = DAT_fffedc09 < param_3;
    bVar1 = param_4 < param_6;
    bVar5 = false;
    if (((param_7 != '\0') && (param_8 != '\0')) && (param_9 != '\0')) {
      bVar5 = true;
    }
    bVar4 = false;
    if ((param_10 != '\0') && (param_11 != '\0')) {
      bVar4 = true;
    }
    if (((((bVar3) && (bVar2)) && ((bVar1 && (((param_5 <= param_4 || (bVar5)) && (!bVar4)))))) ||
        (!bVar4)) || (((bVar3 && (bVar2)) && ((bVar1 && (bVar5)))))) {
      DAT_fffedc08 = 0;
    }
    else {
      DAT_fffedc08 = 0;
      if (((bVar3) && (bVar2)) && ((param_5 <= param_4 && (bVar1)))) {
        DAT_fffedc08 = 1;
      }
    }
  }
  if (param_1 == '\0') {
    *param_13 = 0;
  }
  else {
    *param_13 = DAT_fffedc08;
  }
  DAT_fffedc09 = param_3;
  return;
}

