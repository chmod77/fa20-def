
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00107148(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,byte param_11,ushort param_12,
                 byte param_13,uint param_14,uint param_15,uint param_16,char param_17,
                 ushort *param_18)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  
  if (param_1 != '\0') {
    param_14 = param_14 & 0xffff;
    iVar4 = param_12 - param_14;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    uVar3 = (ushort)iVar4;
    if (iVar4 < 0) {
      uVar3 = 0;
    }
    if ((param_13 == 0) || (uVar2 = param_14, param_14 < _DAT_fffedad2)) {
      uVar2 = (uint)(short)_DAT_fffedad2;
    }
    if ((param_11 != 0) && (uVar2 = param_14, _DAT_fffedad2 < param_14)) {
      uVar2 = (uint)(short)_DAT_fffedad2;
    }
    bVar1 = false;
    if (((DAT_fffedad4 < param_11) || (DAT_fffedad5 < param_13)) && (0x27f < uVar3)) {
      bVar1 = true;
    }
    if (((bVar1) || (param_14 = uVar2, param_13 != 0)) || (param_11 != 0)) {
      if ((param_15 & 0xffff) <= (param_14 & 0xffff)) {
        param_14 = param_15;
      }
      _DAT_fffedad2 = (ushort)param_14;
      if ((param_14 & 0xffff) <= (param_16 & 0xffff)) {
        _DAT_fffedad2 = (ushort)param_16;
      }
    }
    if (param_2 == '\0') {
      _DAT_fffedad0 = 0;
    }
    else if (((param_3 == '\0') && (param_4 == '\0')) ||
            (((param_5 != '\0' ||
              ((((param_6 != '\0' || (param_7 != '\0')) || (param_8 == '\0')) ||
               ((param_9 != '\0' || (param_10 != '\0')))))) ||
             (_DAT_fffedad0 = _DAT_fffedad2, param_17 != '\0')))) {
      _DAT_fffedad0 = param_12;
    }
  }
  _DAT_fffedad2 = 0;
  if (param_1 != '\0') {
    _DAT_fffedad2 = _DAT_fffedad0;
  }
  *param_18 = _DAT_fffedad2;
  DAT_fffedad5 = param_13;
  DAT_fffedad4 = param_11;
  return;
}

