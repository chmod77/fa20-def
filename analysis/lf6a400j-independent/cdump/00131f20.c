
void FUN_00131f20(char param_1,char param_2,char param_3,char param_4,char param_5,char *param_6)

{
  char cVar1;
  
  if (((param_1 == '\0') && (((param_2 != '\0' || (param_3 != '\0')) && (param_4 == '\0')))) &&
     (param_5 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee574 == '\0') goto LAB_00131f4e;
  }
  cVar1 = DAT_fffee574;
LAB_00131f4e:
  *param_6 = cVar1;
  DAT_fffee574 = cVar1;
  return;
}

