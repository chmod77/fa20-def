
void FUN_00131714(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee4ec == '\0') goto LAB_0013172e;
  }
  cVar1 = DAT_fffee4ec;
LAB_0013172e:
  *param_3 = cVar1;
  DAT_fffee4ec = cVar1;
  return;
}

