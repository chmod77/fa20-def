
void FUN_00131b10(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee538 == '\0') goto LAB_00131b2a;
  }
  cVar1 = DAT_fffee538;
LAB_00131b2a:
  *param_3 = cVar1;
  DAT_fffee538 = cVar1;
  return;
}

