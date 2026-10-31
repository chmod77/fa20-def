
void FUN_00131ac8(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee530 == '\0') goto LAB_00131ae2;
  }
  cVar1 = DAT_fffee530;
LAB_00131ae2:
  *param_3 = cVar1;
  DAT_fffee530 = cVar1;
  return;
}

