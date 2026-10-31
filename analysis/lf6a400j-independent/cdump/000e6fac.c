
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e6fac(char param_1,char param_2,ushort param_3,char param_4,byte param_5,char param_6,
                 ushort *param_7)

{
  char cVar1;
  ushort uVar2;
  
  if ((param_6 != '\x05') || (cVar1 = '\x01', DAT_fffed397 != '\x01')) {
    cVar1 = DAT_fffed396;
  }
  if (param_6 == '\x01') {
    cVar1 = '\0';
  }
  uVar2 = _DAT_fffed394;
  if ((param_4 != '\0') && (cVar1 != '\0')) {
    uVar2 = 0;
  }
  if ((((param_4 != '\0') && (param_5 < DAT_fffed399)) && (param_6 == '\x05')) &&
     (uVar2 = _DAT_fffed394, param_3 < _DAT_fffed394)) {
    uVar2 = param_3;
  }
  if (param_2 != '\0') {
    uVar2 = _DAT_fffed394;
  }
  if ((DAT_fffed398 == '\0') || (param_1 != '\0')) {
    uVar2 = 0xffff;
  }
  *param_7 = uVar2;
  DAT_fffed396 = cVar1;
  _DAT_fffed394 = uVar2;
  DAT_fffed398 = 1;
  DAT_fffed397 = param_6;
  DAT_fffed399 = param_5;
  return;
}

