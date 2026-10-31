
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb3c4(char param_1,uint param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == '\0') {
    param_2 = (uint)(short)_DAT_fffed506;
  }
  else {
    param_2 = param_2 & 0xffff;
    iVar1 = _DAT_fffed506 - param_2;
    iVar3 = _DAT_fffed500 - iVar1;
    if (((_DAT_fffed500 < 0) || (-1 < iVar1)) || (-1 < iVar3)) {
      if (((_DAT_fffed500 < 0) && (-1 < iVar1)) && (-1 < iVar3)) {
        iVar3 = -0x80000000;
      }
    }
    else {
      iVar3 = 0x7fffffff;
    }
    iVar2 = iVar3 >> 1;
    _DAT_fffed500 = iVar1;
    if (iVar3 < 0) {
      iVar2 = -iVar2;
      if (iVar2 < (int)&DAT_00010000) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        _DAT_fffed504 = (undefined2)iVar2;
        goto LAB_000eb44c;
      }
    }
    else if (iVar2 < (int)&DAT_00010000) {
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      _DAT_fffed504 = (undefined2)iVar2;
      goto LAB_000eb44c;
    }
    _DAT_fffed504 = 0xffff;
  }
LAB_000eb44c:
  *param_3 = _DAT_fffed504;
  _DAT_fffed506 = (short)param_2;
  return;
}

