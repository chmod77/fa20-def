
void FUN_001318c4(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee510 == '\0') goto LAB_001318de;
  }
  cVar1 = DAT_fffee510;
LAB_001318de:
  *param_3 = cVar1;
  DAT_fffee510 = cVar1;
  return;
}

