
void FUN_00131a80(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee528 == '\0') goto LAB_00131a9a;
  }
  cVar1 = DAT_fffee528;
LAB_00131a9a:
  *param_3 = cVar1;
  DAT_fffee528 = cVar1;
  return;
}

