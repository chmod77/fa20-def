
void FUN_00131868(char param_1,char param_2,byte param_3,byte param_4,char *param_5)

{
  char cVar1;
  
  if (((param_1 == '\0') && (param_2 != '\0')) && ((9 < param_3 || (1 < param_4)))) {
    cVar1 = '\x01';
    if (DAT_fffee508 == '\0') goto LAB_00131892;
  }
  cVar1 = DAT_fffee508;
LAB_00131892:
  *param_5 = cVar1;
  DAT_fffee508 = cVar1;
  return;
}

