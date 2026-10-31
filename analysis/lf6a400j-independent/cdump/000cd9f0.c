
/* WARNING: Removing unreachable block (ram,0x000cda7e) */
/* WARNING: Removing unreachable block (ram,0x000cda82) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cd9f0(undefined4 param_1,byte param_2,byte param_3,char *param_4,ushort *param_5)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (param_2 <= param_3) {
    bVar3 = param_3 - param_2;
  }
  cVar1 = '\x01';
  if (DAT_fffecca3 == '\0') {
    cVar1 = DAT_fffecca2;
  }
  uVar2 = 0;
  if ((cVar1 != '\0') && (uVar2 = 0xffff, _DAT_fffecca0 != -1)) {
    uVar2 = _DAT_fffecca0 + 1;
  }
  *param_5 = uVar2;
  if (((999 < uVar2) || ((0x59 < param_2 && (4 < bVar3)))) || ((0x59 >= param_2 && (4 < bVar3)))) {
    DAT_fffecca3 = '\0';
  }
  *param_4 = DAT_fffecca3;
  DAT_fffecca2 = cVar1;
  _DAT_fffecca0 = uVar2;
  return;
}

