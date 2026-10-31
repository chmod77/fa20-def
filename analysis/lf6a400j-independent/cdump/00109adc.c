
void FUN_00109adc(char param_1,byte param_2,char param_3,char param_4,char param_5,char param_6,
                 ushort param_7,ushort param_8,char param_9,ushort param_10,char param_11,
                 char param_12,undefined1 *param_13)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  if (param_1 == '\0') goto LAB_00109bd4;
  bVar3 = param_2 <= DAT_fffedc05;
  bVar6 = false;
  if (((param_3 != '\0') && (param_4 != '\0')) && (param_5 != '\0')) {
    bVar6 = true;
  }
  bVar4 = param_6 != '\0';
  bVar1 = param_7 < param_8;
  bVar2 = param_7 < param_10;
  bVar5 = false;
  if ((param_11 != '\0') && (param_12 != '\0')) {
    bVar5 = true;
  }
  if ((((bVar4) || (bVar3)) || ((!bVar1 || (((bVar2 && (!bVar6)) || (bVar5)))))) && (bVar5)) {
    if (((!bVar4) && (!bVar3)) && ((bVar1 && (bVar6)))) {
      DAT_fffedc04 = 1;
      goto LAB_00109bd4;
    }
    if ((((bVar4) || (bVar3)) || ((bVar2 || (!bVar1)))) &&
       (((bVar4 || (bVar3)) || ((!bVar2 && (bVar1)))))) {
      DAT_fffedc04 = 0;
      if ((((bVar4) && (!bVar3)) && (bVar6)) && (param_9 != '\0')) {
        DAT_fffedc04 = 1;
      }
      goto LAB_00109bd4;
    }
  }
  DAT_fffedc04 = 0;
LAB_00109bd4:
  if (param_1 == '\0') {
    *param_13 = 0;
  }
  else {
    *param_13 = DAT_fffedc04;
  }
  DAT_fffedc05 = param_2;
  return;
}

