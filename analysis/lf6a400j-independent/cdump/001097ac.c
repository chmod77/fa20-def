
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001097ac(char param_1,undefined2 param_2,ushort param_3,ushort param_4,ushort param_5,
                 byte param_6,byte param_7,char param_8,undefined1 *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  bVar6 = false;
  if (((param_1 != '\0') && (DAT_fffedbf6 != '\0')) && (param_8 == '\0')) {
    bVar6 = true;
  }
  if (!bVar6) goto LAB_001098bc;
  bVar1 = _DAT_fffedbf2 < param_3;
  bVar4 = param_4 <= param_5;
  bVar2 = param_6 < DAT_fffedbf5;
  bVar7 = false;
  if ((!bVar2) && (!bVar4)) {
    bVar7 = true;
  }
  bVar3 = DAT_fffedbf4 <= param_7;
  bVar5 = DAT_fffedbf4 < param_7;
  if (((((param_7 == 0) || (DAT_fffedbf4 == 0)) && ((bVar1 || ((bVar3 || (!bVar7)))))) &&
      ((!bVar7 || ((bVar1 || (!bVar5)))))) &&
     ((bVar1 || ((((bVar2 || (bVar4)) || (!bVar3)) || (bVar5)))))) {
    if (((((!bVar1) && (bVar4)) && (!bVar3)) && (!bVar2)) ||
       (((!bVar1 && (bVar4)) && ((bVar5 && (!bVar2)))))) {
      DAT_fffedbf0 = !bVar2;
      goto LAB_001098bc;
    }
    if ((((bVar1) || (!bVar4)) || (bVar2)) || ((!bVar3 || (bVar5)))) {
      DAT_fffedbf0 = 0;
      if ((!bVar1) && ((bVar2 && (bVar4)))) {
        DAT_fffedbf0 = 1;
      }
      goto LAB_001098bc;
    }
  }
  DAT_fffedbf0 = 0;
LAB_001098bc:
  if (bVar6) {
    *param_9 = DAT_fffedbf0;
  }
  else {
    *param_9 = 0;
  }
  DAT_fffedbf6 = param_1;
  DAT_fffedbf5 = param_6;
  DAT_fffedbf4 = param_7;
  _DAT_fffedbf2 = param_2;
  return;
}

