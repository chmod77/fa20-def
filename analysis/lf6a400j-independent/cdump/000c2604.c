
void FUN_000c2604(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 ushort param_7,undefined1 *param_8)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = '\x15';
  if (param_2 == '\0') {
    cVar2 = '\0';
    if (DAT_fffeca08 != '\0') {
      cVar2 = DAT_fffeca08 + -1;
    }
  }
  if ((((cVar2 == '\0') || (param_3 == '\0')) || (param_4 != '\0')) ||
     (((param_5 != '\0' || (param_6 != '\0')) || (uVar1 = 0, 100 < param_7)))) {
    uVar1 = DAT_fffeca09;
  }
  if (param_1 == '\x1c') {
    uVar1 = 1;
  }
  *param_8 = uVar1;
  DAT_fffeca09 = uVar1;
  DAT_fffeca08 = cVar2;
  return;
}

