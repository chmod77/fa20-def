
void FUN_0013214c(char param_1,char param_2,char param_3,char *param_4)

{
  char cVar1;
  
  if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee59c == '\0') goto LAB_0013216c;
  }
  cVar1 = DAT_fffee59c;
LAB_0013216c:
  *param_4 = cVar1;
  DAT_fffee59c = cVar1;
  return;
}

