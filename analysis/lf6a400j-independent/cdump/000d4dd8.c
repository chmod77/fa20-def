
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d4dd8(char param_1,char param_2,char param_3,undefined1 *param_4,ushort *param_5,
                 ushort *param_6)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffece8e == '\0') {
      _DAT_fffece8c = 0;
      DAT_fffece8e = '\x01';
    }
    _DAT_fffece88 = _DAT_fffece8c;
    uVar3 = 0xffff;
    if (_DAT_fffece8c != 0xffff) {
      uVar3 = _DAT_fffece8c + 1;
    }
  }
  else {
    DAT_fffece8e = '\0';
    uVar3 = _DAT_fffece8c;
  }
  _DAT_fffece8c = uVar3;
  uVar3 = 0;
  if (bVar1) {
    uVar3 = _DAT_fffece88;
  }
  uVar2 = uVar3;
  if (uVar3 <= _DAT_fffece8a) {
    uVar2 = _DAT_fffece8a;
  }
  if (param_3 != '\0') {
    uVar2 = 0;
  }
  *param_6 = uVar2;
  _DAT_fffece8a = uVar2;
  *param_5 = uVar3;
  uVar4 = 0;
  if ((bVar1) && (0xc < uVar3)) {
    uVar4 = 1;
  }
  *param_4 = uVar4;
  return;
}

