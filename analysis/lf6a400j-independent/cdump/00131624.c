
void FUN_00131624(char param_1,char param_2,char param_3,char *param_4)

{
  char cVar1;
  
  if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee4d8 == '\0') goto LAB_00131644;
  }
  cVar1 = DAT_fffee4d8;
LAB_00131644:
  *param_4 = cVar1;
  DAT_fffee4d8 = cVar1;
  return;
}

