
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000efabc(char param_1,char param_2,ushort param_3,char param_4,short param_5,ushort param_6
                 ,uint param_7,uint *param_8)

{
  bool bVar1;
  int iVar2;
  uint uStack_c;
  
  uStack_c = _DAT_fffed5b4;
  if ((((param_2 != '\0') && (0x9ff < param_3)) && (param_4 == '\x04')) &&
     ((param_5 != 0 && (0x31 < param_6)))) {
    if ((int)param_7 < 0) {
      bVar1 = 0 < (int)param_7;
      param_7 = -param_7;
      if ((0 < (int)-(uint)bVar1) || ((-(uint)bVar1 == 0 && (0x7fffffff < param_7)))) {
        param_7 = 0x7fffffff;
      }
    }
    iVar2 = 0;
    if ((int)param_7 < 0) {
      iVar2 = -1;
    }
    uStack_c = _DAT_fffed5b4 + param_7;
    if (uStack_c < _DAT_fffed5b4) {
      iVar2 = iVar2 + 1;
    }
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        uStack_c = 0;
      }
    }
    else {
      uStack_c = 0xffffffff;
    }
  }
  if ((((param_1 == '\x01') || (param_1 == '\x02')) || (param_1 == '\x03')) || (param_1 == '\x04'))
  {
    uStack_c = 0;
  }
  *param_8 = uStack_c;
  _DAT_fffed5b4 = uStack_c;
  return;
}

