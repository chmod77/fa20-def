
void FUN_00131e4c(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee568 == '\0') goto LAB_00131e66;
  }
  cVar1 = DAT_fffee568;
LAB_00131e66:
  *param_3 = cVar1;
  DAT_fffee568 = cVar1;
  return;
}

