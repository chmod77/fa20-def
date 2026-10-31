
void FUN_000e1d48(ushort param_1,char param_2,char param_3,undefined4 param_4,undefined1 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = '\x01';
  if (param_2 == '\0') {
    cVar1 = DAT_fffed22c;
  }
  if (param_3 != '\0') {
    cVar1 = '\0';
  }
  uVar2 = 0;
  if ((cVar1 != '\0') && (0xc00 < param_1)) {
    uVar2 = 1;
  }
  DAT_fffed22c = cVar1;
  *param_5 = uVar2;
  return;
}

