
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b0234(char param_1,undefined4 param_2,char param_3,ushort param_4,ushort param_5,
                 ushort *param_6)

{
  ushort uVar1;
  
  if (param_1 == '\0') {
    if (DAT_fffec604 != '\0') {
      _DAT_fffec600 = 0;
      DAT_fffec604 = '\0';
      DAT_fffec605 = '\0';
    }
  }
  else {
    if (DAT_fffec605 == '\0') {
      _DAT_fffec602 = 0;
      DAT_fffec605 = '\x01';
      DAT_fffec604 = '\x01';
    }
    uVar1 = _DAT_fffec602;
    if ((param_3 == '\a') && (uVar1 = param_5, param_5 < 0x8001)) {
      uVar1 = 0x8000;
    }
    DAT_fffec606 = 1;
    if ((param_3 == '\a') && (uVar1 = param_5, param_5 < param_4)) {
      uVar1 = param_4;
    }
    if (param_3 == '\0') {
      _DAT_fffec600 = 0;
      _DAT_fffec602 = 0;
    }
    else {
      _DAT_fffec600 = param_4;
      _DAT_fffec602 = param_4;
      if (param_3 != '\x01') {
        if ((param_3 == '\x02') || (param_3 == '\x05')) {
          _DAT_fffec600 = 0xffff;
          _DAT_fffec602 = _DAT_fffec600;
        }
        else if (param_3 == '\x03') {
          _DAT_fffec600 = 0x8000;
          _DAT_fffec602 = 0x8000;
        }
        else if (param_3 == '\x04') {
          _DAT_fffec600 = 0x8000;
          _DAT_fffec602 = 0x8000;
        }
        else {
          _DAT_fffec600 = uVar1;
          _DAT_fffec602 = uVar1;
          if (param_3 == '\x06') {
            _DAT_fffec600 = 0xb333;
            _DAT_fffec602 = _DAT_fffec600;
          }
        }
      }
    }
  }
  *param_6 = _DAT_fffec600;
  return;
}

