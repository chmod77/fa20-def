
void FUN_00131bc4(char param_1,char param_2,byte param_3,byte param_4,char param_5,char param_6,
                 char param_7,char *param_8)

{
  char cVar1;
  
  if ((((param_1 == '\0') && (param_2 != '\0')) && ((9 < param_3 || (1 < param_4)))) &&
     ((param_5 == '\0' || ((param_6 == '\0' && (param_7 != '\0')))))) {
    cVar1 = '\x01';
    if (DAT_fffee54c == '\0') goto LAB_00131c0a;
  }
  cVar1 = DAT_fffee54c;
LAB_00131c0a:
  *param_8 = cVar1;
  DAT_fffee54c = cVar1;
  return;
}

