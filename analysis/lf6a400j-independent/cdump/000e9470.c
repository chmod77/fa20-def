
void FUN_000e9470(char param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  
  if (((param_1 == '\x02') || (param_1 == '\x03')) || (param_1 == '\x04')) {
    cVar2 = '\x01';
    if (DAT_fffed41c == '\x01') goto LAB_000e9498;
  }
  cVar2 = DAT_fffed41d;
LAB_000e9498:
  if ((param_1 == '\x05') || (param_1 == '\x01')) {
    cVar2 = '\0';
  }
  uVar1 = 0;
  if ((param_2 == '\0') && (cVar2 != '\0')) {
    uVar1 = 1;
  }
  *param_3 = uVar1;
  DAT_fffed41d = cVar2;
  DAT_fffed41c = param_1;
  return;
}

