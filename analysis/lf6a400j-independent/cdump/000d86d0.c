
void FUN_000d86d0(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  cVar1 = DAT_fffecf6c;
  if ((((DAT_fffecf6d == '\0') && (cVar1 = param_2, param_1 == '\0')) && (param_2 != '\0')) ||
     (((DAT_fffecf6d != '\0' && (param_1 == '\0')) && (DAT_fffecf6c != '\0')))) {
    cVar1 = '\0';
  }
  if (((DAT_fffecf6d != '\0') && (param_1 != '\0')) &&
     ((DAT_fffecf6c != '\0' && (cVar1 = '\0', DAT_fffecf6c != '\0')))) {
    cVar1 = DAT_fffecf6c + -1;
  }
  if ((((DAT_fffecf6d == '\0') && (param_1 != '\0')) && (param_2 != '\0')) &&
     (cVar1 = '\0', param_2 != '\0')) {
    cVar1 = param_2 + -1;
  }
  *param_3 = cVar1;
  DAT_fffecf6d = 1;
  DAT_fffecf6c = cVar1;
  return;
}

