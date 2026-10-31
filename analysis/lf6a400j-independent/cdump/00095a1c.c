
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095a1c(char param_1,byte param_2,char param_3,char param_4,char param_5,char param_6,
                 byte param_7,char param_8,char param_9,char param_10,char param_11,
                 undefined1 *param_12)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  
  bVar1 = false;
  if ((param_5 == '\0') && (param_11 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffebee5 == '\0') {
      _DAT_fffebee2 = 0;
      DAT_fffebee5 = '\x01';
    }
    DAT_fffebee0 = 0x5db < _DAT_fffebee2;
    _DAT_fffebee2 = _DAT_fffebee2 + 1;
    if (_DAT_fffebee2 == 0) {
      _DAT_fffebee2 = 0xffff;
    }
  }
  else {
    DAT_fffebee5 = '\0';
  }
  cVar3 = '\0';
  if (bVar1) {
    cVar3 = DAT_fffebee0;
  }
  if ((((cVar3 == '\0') && (param_6 == '\0')) && (param_7 <= DAT_fffebee4)) &&
     ((param_8 == '\0' && (param_9 == '\0')))) {
    uVar2 = 0;
    if (param_4 != '\0') {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 5;
  }
  if (param_10 == '\0') {
    if ((0xfe < param_2) || (param_1 != '\x02')) {
      if (param_1 != '\x02') {
        if (param_3 == '\0') {
          *param_12 = uVar2;
        }
        else {
          *param_12 = 3;
        }
      }
      else {
        *param_12 = 2;
      }
    }
    else {
      *param_12 = 1;
    }
  }
  else {
    *param_12 = 6;
  }
  DAT_fffebee4 = param_7;
  return;
}

