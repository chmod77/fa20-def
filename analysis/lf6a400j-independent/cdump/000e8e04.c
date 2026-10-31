
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e8e04(char param_1,short param_2,short param_3,short param_4,char *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar1 = (int)param_3 - (int)param_4;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  uVar2 = (int)param_2 - (int)_DAT_fffed3fc;
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  cVar3 = DAT_fffed3fe;
  if ((param_1 != '\0') && ((0x9ff < (uVar2 & 0xffff) || (0x9ff < (uVar1 & 0xffff))))) {
    cVar3 = '\x01';
  }
  if ((DAT_fffed3fe != '\0') || (param_1 == '\0')) {
    cVar3 = '\0';
  }
  *param_5 = cVar3;
  DAT_fffed3fe = cVar3;
  _DAT_fffed3fc = param_2;
  return;
}

