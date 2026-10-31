
void FUN_00132988(char param_1,char param_2,char param_3,char param_4,char *param_5)

{
  char cVar1;
  
  if ((param_1 == '\0') && (((param_2 != '\0' || (param_3 != '\0')) && (param_4 == '\0')))) {
    cVar1 = '\x01';
    if (DAT_fffee5cc == '\0') goto LAB_001329ae;
  }
  cVar1 = DAT_fffee5cc;
LAB_001329ae:
  *param_5 = cVar1;
  DAT_fffee5cc = cVar1;
  return;
}

