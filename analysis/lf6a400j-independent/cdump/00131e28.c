
void FUN_00131e28(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee564 == '\0') goto LAB_00131e42;
  }
  cVar1 = DAT_fffee564;
LAB_00131e42:
  *param_3 = cVar1;
  DAT_fffee564 = cVar1;
  return;
}

