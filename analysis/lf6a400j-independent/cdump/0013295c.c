
void FUN_0013295c(char param_1,char param_2,char param_3,char *param_4)

{
  char cVar1;
  
  if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee5c8 == '\0') goto LAB_0013297c;
  }
  cVar1 = DAT_fffee5c8;
LAB_0013297c:
  *param_4 = cVar1;
  DAT_fffee5c8 = cVar1;
  return;
}

