
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cc1a0(char param_1,short param_2,uint param_3,uint param_4,undefined1 *param_5,
                 char *param_6)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  
  uVar3 = LK_133F40((uint)&T_02EB34,param_4);
  if (((param_3 & 0xffff) < (uVar3 & 0xffff)) || (cVar4 = '\x01', param_2 == 0)) {
    cVar4 = DAT_fffecbfb;
  }
  if ((param_1 == '\0') || ((param_3 & 0xffff) < (uVar3 & 0xffff))) {
    cVar4 = '\0';
  }
  bVar1 = false;
  if (cVar4 == '\0') {
    _DAT_fffecbf8 = 0;
    sVar2 = _DAT_fffecbf8;
  }
  else {
    bVar1 = 4 < _DAT_fffecbf8;
    sVar2 = -1;
    if (_DAT_fffecbf8 != 0xffff) {
      sVar2 = _DAT_fffecbf8 + 1;
    }
  }
  _DAT_fffecbf8 = sVar2;
  uVar5 = 1;
  if (!bVar1) {
    uVar5 = DAT_fffecbfa;
  }
  if (param_1 == '\0') {
    uVar5 = 0;
  }
  *param_5 = uVar5;
  *param_6 = cVar4;
  DAT_fffecbfa = uVar5;
  DAT_fffecbfb = cVar4;
  return;
}

