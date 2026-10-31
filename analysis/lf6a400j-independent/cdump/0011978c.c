
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011978c(char param_1,char param_2,int param_3,ushort param_4,short *param_5)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  iVar3 = 1;
  while( true ) {
    cVar4 = (char)iVar3;
    if (0x67 < cVar4) break;
    if (*(char *)(param_3 + (short)(cVar4 + -1)) != '\0') {
      cVar5 = '\x01';
    }
    iVar3 = cVar4 + 1;
    DAT_fffedfc4 = cVar5;
  }
  bVar1 = param_2 == -0x5b;
  sVar2 = _DAT_fffedfc6;
  if (((bVar1) && (0x27ff < param_4)) && (sVar2 = -1, _DAT_fffedfc6 != -1)) {
    sVar2 = _DAT_fffedfc6 + 1;
  }
  if ((param_1 != '\0') || ((DAT_fffedfc8 == '\0' && (bVar1)))) {
    sVar2 = 0;
  }
  else if ((bVar1) && (DAT_fffedfc4 == '\0')) {
    sVar2 = -1;
  }
  *param_5 = sVar2;
  DAT_fffedfc8 = param_2;
  _DAT_fffedfc6 = sVar2;
  return;
}

