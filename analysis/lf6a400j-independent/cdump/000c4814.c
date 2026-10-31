
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c4814(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,char param_14,short param_15,short param_16,short *param_17)

{
  bool bVar1;
  char cVar3;
  char cVar4;
  char cVar5;
  short sVar2;
  short sVar6;
  char cVar7;
  short sVar8;
  short sVar9;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    if (param_1 == '\0') {
      if (param_2 == '\0') {
        _DAT_fffecae0 = 0;
        if (param_5 != '\0') {
          _DAT_fffecae0 = 0x200;
        }
        cVar3 = '\0';
        if (param_10 != '\0') {
          cVar3 = '\x10';
        }
        cVar4 = '\0';
        if (param_11 != '\0') {
          cVar4 = '\b';
        }
        cVar5 = '\0';
        if (param_12 != '\0') {
          cVar5 = '\x04';
        }
        sVar8 = 0;
        if (param_13 != '\0') {
          sVar8 = 2;
        }
        sVar2 = 0;
        if (param_6 != '\0') {
          sVar2 = 0x100;
        }
        cVar7 = '\0';
        if (param_7 != '\0') {
          cVar7 = -0x80;
        }
        sVar9 = 0;
        if (param_8 != '\0') {
          sVar9 = 0x40;
        }
        sVar6 = 0;
        if (param_9 != '\0') {
          sVar6 = 0x20;
        }
        _DAT_fffecae0 =
             ((short)cVar5 + param_14 + sVar8 + (short)cVar4 + (short)cVar3 + sVar6 + sVar9 +
              (short)cVar7 & 0xffU) + sVar2 + _DAT_fffecae0;
      }
      else {
        _DAT_fffecae0 = param_16 * 5;
      }
    }
    else {
      _DAT_fffecae0 = param_15;
    }
  }
  if (bVar1) {
    _DAT_fffecae2 = _DAT_fffecae0;
  }
  *param_17 = _DAT_fffecae2;
  return;
}

