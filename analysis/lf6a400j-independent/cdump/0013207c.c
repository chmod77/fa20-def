
void FUN_0013207c(char param_1,char param_2,char param_3,char *param_4)

{
  char cVar1;
  
  if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee590 == '\0') goto LAB_0013209c;
  }
  cVar1 = DAT_fffee590;
LAB_0013209c:
  *param_4 = cVar1;
  DAT_fffee590 = cVar1;
  return;
}

