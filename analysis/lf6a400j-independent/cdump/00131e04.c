
void FUN_00131e04(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee560 == '\0') goto LAB_00131e1e;
  }
  cVar1 = DAT_fffee560;
LAB_00131e1e:
  *param_3 = cVar1;
  DAT_fffee560 = cVar1;
  return;
}

