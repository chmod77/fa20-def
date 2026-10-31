
void FUN_00131650(char param_1,char param_2,char param_3,char *param_4)

{
  char cVar1;
  
  if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee4dc == '\0') goto LAB_00131670;
  }
  cVar1 = DAT_fffee4dc;
LAB_00131670:
  *param_4 = cVar1;
  DAT_fffee4dc = cVar1;
  return;
}

