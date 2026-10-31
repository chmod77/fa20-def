
void FUN_00131ba0(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee548 == '\0') goto LAB_00131bba;
  }
  cVar1 = DAT_fffee548;
LAB_00131bba:
  *param_3 = cVar1;
  DAT_fffee548 = cVar1;
  return;
}

