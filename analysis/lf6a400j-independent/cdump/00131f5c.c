
void FUN_00131f5c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char *param_7)

{
  char cVar1;
  
  if (((param_1 == '\0') && (((param_2 != '\0' || (param_3 != '\0')) && (param_4 == '\0')))) &&
     ((param_5 != '\0' && (param_6 != '\0')))) {
    cVar1 = '\x01';
    if (DAT_fffee578 == '\0') goto LAB_00131f92;
  }
  cVar1 = DAT_fffee578;
LAB_00131f92:
  *param_7 = cVar1;
  DAT_fffee578 = cVar1;
  return;
}

