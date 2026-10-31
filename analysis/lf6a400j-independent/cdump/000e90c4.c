
void FUN_000e90c4(char param_1,ushort param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  
  bVar1 = false;
  if (((((param_1 != '\0') && (param_2 < 0xc9)) && (param_3 != '\0')) &&
      ((param_5 != '\0' && (param_6 == '\0')))) && (param_4 == '\0')) {
    bVar1 = true;
  }
  uVar3 = 1;
  if (!bVar1) {
    uVar3 = DAT_fffed40c;
  }
  cVar2 = '\x01';
  if (DAT_fffed40e == '\0') {
    cVar2 = DAT_fffed40d;
  }
  if (!bVar1) {
    cVar2 = '\0';
  }
  if (((param_4 != '\0') || (param_7 != '\0')) || (cVar2 != '\0')) {
    uVar3 = 0;
  }
  DAT_fffed40d = cVar2;
  *param_8 = uVar3;
  DAT_fffed40c = uVar3;
  DAT_fffed40e = uVar3;
  return;
}

