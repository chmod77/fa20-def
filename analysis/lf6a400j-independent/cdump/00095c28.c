
/* WARNING: Removing unreachable block (ram,0x00095cea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095c28(char param_1,char param_2,undefined1 param_3,char param_4,char param_5,
                 char param_6,short param_7,char param_8,char param_9,char param_10,char param_11,
                 undefined1 *param_12,ushort *param_13)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  
  bVar1 = true;
  if ((param_8 == '\0') && (param_9 == '\0')) {
    bVar1 = false;
  }
  bVar2 = false;
  if ((param_10 != '\0') && (param_11 != '\0')) {
    bVar2 = true;
  }
  bVar3 = false;
  if ((((param_2 != '\0') && (!bVar1)) && (!bVar2)) &&
     (((param_4 == '\0' && (param_5 != '\0')) && (param_6 == '\0')))) {
    bVar3 = true;
  }
  uVar6 = 0;
  if (bVar3) {
    uVar6 = _DAT_fffebee8;
    if (_DAT_fffebee8 == 0xffff) {
      _DAT_fffebee8 = -1;
    }
    else {
      _DAT_fffebee8 = _DAT_fffebee8 + 1;
    }
  }
  else {
    _DAT_fffebee8 = 0;
  }
  *param_13 = uVar6;
  bVar4 = false;
  if (((param_2 != '\0') && (!bVar1)) && (bVar2)) {
    bVar4 = true;
  }
  DAT_fffebeec = 0x353 < param_7;
  uVar5 = 0;
  if (bVar4) {
    uVar5 = _DAT_fffebeea;
  }
  if (0x25 < uVar5) {
    uVar5 = 0;
  }
  if (((param_1 != '\0') && (param_2 != '\0')) && (!bVar1)) {
    if (bVar4) {
      *param_12 = uVar5 < 0x13;
      goto LAB_00095d5e;
    }
    if (param_4 != '\0') {
      *param_12 = param_3;
      goto LAB_00095d5e;
    }
    if (uVar6 < 0x26) {
      if (bVar3) {
        *param_12 = 1;
      }
      else {
        *param_12 = DAT_fffebeec;
      }
      goto LAB_00095d5e;
    }
  }
  *param_12 = 0;
LAB_00095d5e:
  if (bVar4) {
    if (uVar5 == 0xffff) {
      _DAT_fffebeea = -1;
    }
    else {
      _DAT_fffebeea = uVar5 + 1;
    }
  }
  else {
    _DAT_fffebeea = 0;
  }
  return;
}

