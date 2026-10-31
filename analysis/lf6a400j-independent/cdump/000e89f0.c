
void FUN_000e89f0(char param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  if ((param_1 != '\x03') || (cVar2 = '\x01', DAT_fffed3e1 != '\x02')) {
    cVar2 = DAT_fffed3e4;
  }
  if ((param_1 != '\x03') || (cVar4 = '\x01', DAT_fffed3e0 != '\x02')) {
    cVar4 = DAT_fffed3e3;
  }
  if ((param_1 == '\x01') || ((param_1 == '\x05' && (DAT_fffed3e6 == '\x04')))) {
    cVar4 = '\0';
  }
  if ((param_2 != '\0') || (((cVar4 != '\0' && (param_1 == '\x03')) && (DAT_fffed3e6 == '\x04')))) {
    DAT_fffed3e7 = '\x01';
  }
  if (param_1 == '\x01') {
    DAT_fffed3e7 = '\0';
  }
  if ((param_1 == '\x01') || ((param_1 == '\x04' && (DAT_fffed3e5 == '\x03')))) {
    cVar2 = '\0';
  }
  if (((cVar2 == '\0') || (param_1 != '\x02')) || (cVar3 = '\x01', DAT_fffed3e5 != '\x03')) {
    cVar3 = DAT_fffed3e2;
  }
  if (param_1 == '\x01') {
    cVar3 = '\0';
  }
  uVar1 = 1;
  if ((DAT_fffed3e7 == '\0') && (cVar3 == '\0')) {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  DAT_fffed3e3 = cVar4;
  DAT_fffed3e4 = cVar2;
  DAT_fffed3e2 = cVar3;
  DAT_fffed3e1 = param_1;
  DAT_fffed3e0 = param_1;
  DAT_fffed3e6 = param_1;
  DAT_fffed3e5 = param_1;
  return;
}

