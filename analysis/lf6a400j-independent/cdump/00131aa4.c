
void FUN_00131aa4(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee52c == '\0') goto LAB_00131abe;
  }
  cVar1 = DAT_fffee52c;
LAB_00131abe:
  *param_3 = cVar1;
  DAT_fffee52c = cVar1;
  return;
}

