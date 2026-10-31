
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a4e60(char param_1,char param_2,char *param_3,ushort *param_4)

{
  ushort uVar1;
  char cVar2;
  
  uVar1 = _DAT_fffec338;
  if ((((DAT_fffec33a != '\0') && (DAT_fffec33b == '\0')) && (param_2 != '\0')) &&
     (uVar1 = 0xffff, _DAT_fffec338 != 0xffff)) {
    uVar1 = _DAT_fffec338 + 1;
  }
  *param_4 = uVar1;
  cVar2 = '\x01';
  if (param_1 == '\0') {
    cVar2 = DAT_fffec33a;
  }
  if (5 < uVar1) {
    cVar2 = '\0';
  }
  *param_3 = cVar2;
  DAT_fffec33b = param_2;
  _DAT_fffec338 = uVar1;
  DAT_fffec33a = cVar2;
  return;
}

