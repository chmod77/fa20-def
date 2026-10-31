
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00094f48(uint param_1,char param_2,char param_3,undefined1 param_4,char param_5,
                 uint param_6,char param_7,undefined1 param_8,char param_9,char param_10,
                 undefined1 *param_11)

{
  bool bVar1;
  ushort uVar2;
  
  bVar1 = false;
  if (((param_2 == '\0') && (param_9 != '\0')) && (param_10 != '\0')) {
    bVar1 = true;
  }
  uVar2 = 0;
  if (bVar1) {
    uVar2 = _DAT_fffebec4;
  }
  if (0x25 < uVar2) {
    uVar2 = 0;
  }
  if (param_2 != '\0') {
    *param_11 = (char)((param_1 & 0xff) * 0xfa >> 8);
    goto LAB_00094ffa;
  }
  if (bVar1) {
    if ((uVar2 < 0x13) && (bVar1)) {
      *param_11 = 0xfa;
      goto LAB_00094ffa;
    }
  }
  else {
    if (param_3 != '\0') {
      *param_11 = param_8;
      goto LAB_00094ffa;
    }
    if (param_5 != '\0') {
      *param_11 = param_4;
      goto LAB_00094ffa;
    }
    if (param_7 != '\0') {
      *param_11 = (char)((param_6 & 0xff) * 0xfa >> 8);
      goto LAB_00094ffa;
    }
  }
  *param_11 = 0;
LAB_00094ffa:
  if (bVar1) {
    if (uVar2 == 0xffff) {
      _DAT_fffebec4 = -1;
    }
    else {
      _DAT_fffebec4 = uVar2 + 1;
    }
  }
  else {
    _DAT_fffebec4 = 0;
  }
  return;
}

