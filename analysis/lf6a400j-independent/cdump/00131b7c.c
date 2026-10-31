
void FUN_00131b7c(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee544 == '\0') goto LAB_00131b96;
  }
  cVar1 = DAT_fffee544;
LAB_00131b96:
  *param_3 = cVar1;
  DAT_fffee544 = cVar1;
  return;
}

