
void FUN_00131b34(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee53c == '\0') goto LAB_00131b4e;
  }
  cVar1 = DAT_fffee53c;
LAB_00131b4e:
  *param_3 = cVar1;
  DAT_fffee53c = cVar1;
  return;
}

