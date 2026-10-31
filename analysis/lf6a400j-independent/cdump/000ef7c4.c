
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ef7c4(char param_1,char param_2,uint param_3,char param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = _DAT_fffed5a0;
  if ((param_2 == '\0') && (param_4 != '\0')) {
    if ((int)param_3 < 0) {
      bVar1 = 0 < (int)param_3;
      param_3 = -param_3;
      if ((0 < (int)-(uint)bVar1) || ((-(uint)bVar1 == 0 && (0x7fffffff < param_3)))) {
        param_3 = 0x7fffffff;
      }
    }
    iVar2 = _DAT_fffed5a0 + param_3;
    if (((_DAT_fffed5a0 < 0) || ((int)param_3 < 0)) || (-1 < iVar2)) {
      if (((_DAT_fffed5a0 < 0) && ((int)param_3 < 0)) && (-1 < iVar2)) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
  }
  if (param_1 != '\0') {
    iVar2 = 0;
  }
  *param_5 = iVar2;
  _DAT_fffed5a0 = iVar2;
  return;
}

