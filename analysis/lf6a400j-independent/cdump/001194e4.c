
void FUN_001194e4(char param_1,char param_2,byte param_3,char param_4,char *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  
  bVar1 = param_4 != '\x01';
  bVar2 = param_1 != '@';
  if ((((!bVar1) || (param_2 != '\0')) || (param_3 <= DAT_fffedfc0)) ||
     (cVar3 = '\0', DAT_fffedfc1 == -0x5b)) {
    cVar3 = DAT_fffedfc1;
  }
  if (((bVar1) || (!bVar2)) || (param_2 == '\0')) {
    if (((!bVar1) && (bVar2)) && (param_2 == '\0')) {
      cVar3 = '\0';
      goto LAB_0011957a;
    }
    if (((bVar1) && (!bVar2)) && (param_2 != '\0')) {
      cVar3 = -0x5b;
      goto LAB_0011957a;
    }
    if (((!bVar1) || (param_2 == '\0')) || ((param_3 <= DAT_fffedfc0 || (DAT_fffedfc1 == -0x5b))))
    goto LAB_0011957a;
  }
  cVar3 = -1;
LAB_0011957a:
  *param_5 = cVar3;
  DAT_fffedfc0 = param_3;
  DAT_fffedfc1 = cVar3;
  return;
}

