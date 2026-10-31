
void FUN_00131aec(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee534 == '\0') goto LAB_00131b06;
  }
  cVar1 = DAT_fffee534;
LAB_00131b06:
  *param_3 = cVar1;
  DAT_fffee534 = cVar1;
  return;
}

