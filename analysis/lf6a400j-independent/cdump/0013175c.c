
void FUN_0013175c(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee4f4 == '\0') goto LAB_00131776;
  }
  cVar1 = DAT_fffee4f4;
LAB_00131776:
  *param_3 = cVar1;
  DAT_fffee4f4 = cVar1;
  return;
}

