
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e3af0(char param_1,uint param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = false;
  if ((param_1 != '\0') &&
     (uVar3 = LK_133F40((uint)&T_02F17C,param_2), (param_3 & 0xffff) < (uVar3 & 0xffff))) {
    bVar1 = true;
  }
  DAT_fffed29e = DAT_fffed29e != '\0' || bVar1 && 999 < _DAT_fffed29c;
  *(char *)param_4 = DAT_fffed29e;
  if (bVar1) {
    sVar2 = -1;
    if (_DAT_fffed29c < 0xfffc) {
      sVar2 = _DAT_fffed29c + 4;
    }
  }
  else {
    _DAT_fffed29c = 0;
    sVar2 = _DAT_fffed29c;
  }
  _DAT_fffed29c = sVar2;
  return;
}

