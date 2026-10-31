
void FUN_00131738(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee4f0 == '\0') goto LAB_00131752;
  }
  cVar1 = DAT_fffee4f0;
LAB_00131752:
  *param_3 = cVar1;
  DAT_fffee4f0 = cVar1;
  return;
}

