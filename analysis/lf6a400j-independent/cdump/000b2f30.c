
/* WARNING: Removing unreachable block (ram,0x000b311e) */
/* WARNING: Removing unreachable block (ram,0x000b3126) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b2f30(char param_1,char param_2,byte param_3,byte param_4,byte param_5,char param_6,
                 char param_7,char param_8,short param_9,char param_10,byte param_11,char param_12,
                 byte param_13,short param_14,char param_15,char param_16,char param_17,
                 undefined4 param_18,char param_19,uint param_20,uint param_21,byte param_22,
                 char param_23,undefined4 param_24,undefined1 *param_25,char *param_26,
                 undefined2 *param_27,undefined2 *param_28)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  
  cVar6 = '\x01';
  if (((param_8 != '\0') && (param_1 != '\0')) && (0x23 < param_13)) {
    cVar6 = '\0';
  }
  *param_26 = cVar6;
  bVar1 = DAT_fffec6df <= param_3;
  cVar7 = '\x01';
  if (bVar1) {
    cVar7 = DAT_fffec6e0;
  }
  if (param_3 != 0) {
    cVar7 = '\0';
  }
  DAT_fffec6e0 = cVar7;
  if (bVar1) {
    uVar4 = (uint)_DAT_fffec6dc;
  }
  else {
    uVar4 = LK_133E10((uint)&T_02E1E0,param_20 & 0xff);
  }
  *param_27 = (short)uVar4;
  bVar2 = false;
  if (cVar7 == '\0') {
    _DAT_fffec6d8 = 0;
    sVar3 = _DAT_fffec6d8;
  }
  else {
    bVar2 = (uint)_DAT_fffec6d8 < (uVar4 & 0xffff);
    sVar3 = -1;
    if (_DAT_fffec6d8 != 0xffff) {
      sVar3 = _DAT_fffec6d8 + 1;
    }
  }
  _DAT_fffec6d8 = sVar3;
  if (bVar1) {
    uVar5 = (uint)_DAT_fffec6da;
  }
  else {
    uVar5 = LK_133E10((uint)&T_02E1EC,param_20 & 0xff);
  }
  *param_28 = (short)uVar5;
  cVar7 = '\x01';
  if (bVar1) {
    cVar7 = DAT_fffec6de;
  }
  if ((param_21 & 0xffff) < (uVar5 & 0xffff)) {
    cVar7 = '\0';
  }
  DAT_fffec6de = cVar7;
  if (((param_2 == '\0') && (param_15 == '\0')) && ((param_16 == '\0' && (param_17 == '\0')))) {
    if ((param_3 != 0) || ((bVar2 && (cVar7 != '\0')))) {
      *param_25 = 3;
    }
    else if (param_7 == '\0') {
      if ((((param_1 == '\0') && (0x81 < param_4)) && (0x9a < param_5)) && (param_6 == '\0')) {
        *param_25 = 7;
      }
      else if (param_12 == '\0') {
        if ((((param_11 != 0) && (param_19 == '\0')) ||
            ((param_14 != 0 || ((param_10 != '\0' && (param_9 != 0)))))) ||
           ((param_11 != 0 && ((param_22 < param_11 && (param_23 != '\0')))))) {
          *param_25 = 9;
        }
        else if (cVar6 == '\0') {
          *param_25 = 1;
        }
        else {
          *param_25 = 10;
        }
      }
      else {
        *param_25 = 8;
      }
    }
    else {
      *param_25 = 6;
    }
  }
  else {
    *param_25 = 2;
  }
  _DAT_fffec6dc = (short)uVar4;
  DAT_fffec6df = param_3;
  _DAT_fffec6da = (short)uVar5;
  return;
}

