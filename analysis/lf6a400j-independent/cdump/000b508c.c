
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b508c(char param_1,short param_2,short *param_3,undefined2 *param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  if (param_1 == '\0') {
    DAT_fffec71e = '\0';
  }
  else {
    bVar1 = true;
    if ((iVar3 < 0x253f) && (-0x4ccc < iVar3)) {
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = (int)_DAT_fffec71c;
    }
    if (DAT_fffec720 != '\0') {
      param_2 = _DAT_fffec71c;
    }
    if (bVar1) {
      DAT_fffec71e = '\0';
    }
    else {
      if (DAT_fffec71e == '\0') {
        DAT_fffec71f = '\0';
        DAT_fffec71e = '\x01';
      }
      sVar2 = param_2;
      if (DAT_fffec71f != '\0') {
        FUN_0016b520(&DAT_ffff19c6,iVar3,0xffffffff);
        sVar2 = _DAT_ffff19c6;
      }
      _DAT_ffff19c6 = sVar2;
      _DAT_fffec722 = _DAT_ffff19c6;
      DAT_fffec71f = '\x01';
    }
    if (!bVar1) {
      iVar3 = (int)_DAT_fffec722;
    }
    _DAT_fffec718 = (short)iVar3;
    iVar3 = _DAT_fffec718 + 0x8000;
    if (iVar3 < (int)&DAT_00010000) {
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      _DAT_fffec71a = (undefined2)iVar3;
    }
    else {
      _DAT_fffec71a = 0xffff;
    }
    DAT_fffec720 = '\x01';
    _DAT_fffec71c = _DAT_fffec718;
  }
  *param_3 = _DAT_fffec718;
  *param_4 = _DAT_fffec71a;
  return;
}

