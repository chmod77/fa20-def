
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001072f0(char param_1,undefined2 param_2,ushort param_3,byte param_4,byte param_5,
                 ushort param_6,ushort param_7,char param_8,undefined1 *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  bVar6 = false;
  if (((param_1 != '\0') && (DAT_fffedadc != '\0')) && (param_8 == '\0')) {
    bVar6 = true;
  }
  if (!bVar6) goto LAB_001073fa;
  bVar1 = _DAT_fffedada < param_3;
  bVar2 = param_4 < DAT_fffedade;
  bVar3 = param_5 < DAT_fffedadd;
  bVar4 = param_5 <= DAT_fffedadd;
  bVar5 = param_7 < param_6;
  bVar7 = false;
  if ((!bVar2) && (bVar5)) {
    bVar7 = true;
  }
  if ((param_5 == 0) || (DAT_fffedadd == 0)) {
    if ((!bVar1) && ((bVar3 && (bVar7)))) {
LAB_001073bc:
      DAT_fffedad8 = 1;
      goto LAB_001073fa;
    }
    if ((!bVar7) || ((bVar1 || (bVar4)))) {
      if (((!bVar1) && ((((!bVar2 && (bVar5)) && (!bVar3)) && (bVar4)))) ||
         ((((!bVar1 && (!bVar5)) && (bVar3)) && (!bVar2)))) goto LAB_001073bc;
      if (((bVar1) || (bVar5)) || ((bVar4 || (bVar2)))) {
        DAT_fffedad8 = 0;
        if ((((!bVar1) && (!bVar5)) && (!bVar2)) && ((!bVar3 && (bVar4)))) {
          DAT_fffedad8 = 1;
        }
        goto LAB_001073fa;
      }
    }
  }
  DAT_fffedad8 = 0;
LAB_001073fa:
  if (bVar6) {
    *param_9 = DAT_fffedad8;
  }
  else {
    *param_9 = 0;
  }
  _DAT_fffedada = param_2;
  DAT_fffedade = param_4;
  DAT_fffedadd = param_5;
  DAT_fffedadc = param_1;
  return;
}

