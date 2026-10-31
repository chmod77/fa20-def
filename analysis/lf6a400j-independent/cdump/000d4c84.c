
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d4c84(char param_1,char param_2,char param_3,ushort param_4,char param_5,byte param_6,
                 undefined1 *param_7,ushort *param_8,ushort *param_9,undefined4 param_10,
                 undefined4 param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ushort uVar5;
  
  if (param_5 == '\0') {
    DAT_fffece81 = '\0';
    uVar5 = _DAT_fffece7e;
  }
  else {
    if (DAT_fffece81 == '\0') {
      _DAT_fffece7e = 0;
      DAT_fffece81 = '\x01';
    }
    _DAT_fffece7a = _DAT_fffece7e;
    uVar5 = 0xffff;
    if (_DAT_fffece7e != 0xffff) {
      uVar5 = _DAT_fffece7e + 1;
    }
  }
  _DAT_fffece7e = uVar5;
  uVar5 = 0;
  if (param_5 != '\0') {
    uVar5 = _DAT_fffece7a;
  }
  *param_8 = uVar5;
  bVar2 = true;
  if (((((param_2 != '\0') || (param_3 == '\0')) || (0xa000 < param_4)) || (param_4 < 0x6000)) &&
     (((param_2 == '\0' || (param_5 == '\0')) || (uVar5 < 0x3e)))) {
    bVar2 = false;
  }
  *(bool *)param_10 = bVar2;
  bVar1 = param_6 < 7;
  if (bVar1) {
    DAT_fffece80 = '\0';
    uVar5 = _DAT_fffece7c;
  }
  else {
    if (DAT_fffece80 == '\0') {
      _DAT_fffece7c = 0;
      DAT_fffece80 = '\x01';
    }
    _DAT_fffece78 = _DAT_fffece7c;
    uVar5 = 0xffff;
    if (_DAT_fffece7c != 0xffff) {
      uVar5 = _DAT_fffece7c + 1;
    }
  }
  _DAT_fffece7c = uVar5;
  uVar5 = 0;
  if (!bVar1) {
    uVar5 = _DAT_fffece78;
  }
  *param_9 = uVar5;
  bVar3 = false;
  if ((!bVar1) && (0x3d < uVar5)) {
    bVar3 = true;
  }
  uVar4 = 0;
  if (((param_1 != '\0') && (bVar2)) && (bVar3)) {
    uVar4 = 1;
  }
  *param_7 = uVar4;
  *(bool *)param_11 = bVar3;
  return;
}

