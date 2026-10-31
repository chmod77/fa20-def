
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00109988(char param_1,undefined2 param_2,ushort param_3,ushort param_4,ushort param_5,
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
  if (((param_1 != '\0') && (DAT_fffedc02 != '\0')) && (param_8 == '\0')) {
    bVar6 = true;
  }
  if (!bVar6) goto LAB_00109aa4;
  bVar1 = _DAT_fffedbfe < param_3;
  bVar4 = param_4 <= param_5;
  bVar2 = param_6 < DAT_fffedc01;
  bVar7 = false;
  if ((!bVar2) && (!bVar4)) {
    bVar7 = true;
  }
  bVar3 = DAT_fffedc00 <= param_7;
  bVar5 = param_7 <= DAT_fffedc00;
  if ((param_7 == 0) || (DAT_fffedc00 == 0)) {
    if (((!bVar1) && ((!bVar3 && (bVar7)))) || ((bVar7 && ((!bVar1 && (!bVar5)))))) {
      DAT_fffedbfc = 1;
      goto LAB_00109aa4;
    }
    if ((((((bVar1) || (bVar2)) || (bVar4)) || ((!bVar3 || (!bVar5)))) &&
        (((bVar1 || ((!bVar4 || (bVar3)))) || (bVar2)))) &&
       ((((((bVar1 || (!bVar4)) || (bVar5)) || (bVar2)) &&
         (((bVar1 || (!bVar4)) || ((bVar2 || ((!bVar3 || (!bVar5)))))))) &&
        ((bVar1 || ((!bVar2 || (!bVar4)))))))) {
      DAT_fffedbfc = 0;
      if ((!bVar1) && ((bVar2 && (!bVar4)))) {
        DAT_fffedbfc = 1;
      }
      goto LAB_00109aa4;
    }
  }
  DAT_fffedbfc = 0;
LAB_00109aa4:
  if (bVar6) {
    *param_9 = DAT_fffedbfc;
  }
  else {
    *param_9 = 0;
  }
  DAT_fffedc02 = param_1;
  DAT_fffedc01 = param_6;
  DAT_fffedc00 = param_7;
  _DAT_fffedbfe = param_2;
  return;
}

