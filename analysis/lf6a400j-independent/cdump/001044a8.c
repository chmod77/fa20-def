
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001044a8(char param_1,char param_2,ushort *param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = '\x01';
  if (param_1 == '\0') {
    cVar1 = DAT_fffeda06;
  }
  if ((param_2 == '\0') || (param_1 == '\0')) {
    cVar1 = '\0';
  }
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = _DAT_fffeda04;
  }
  DAT_fffeda06 = cVar1;
  *param_3 = uVar2;
  if (cVar1 != '\0') {
    if (0xfffe < uVar2) {
      _DAT_fffeda04 = 0xffff;
      return;
    }
    _DAT_fffeda04 = uVar2 + 1;
    return;
  }
  _DAT_fffeda04 = 0;
  return;
}

