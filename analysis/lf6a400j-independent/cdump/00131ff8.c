
void FUN_00131ff8(char param_1,char param_2,char param_3,char *param_4)

{
  char cVar1;
  
  if (((param_1 == '\0') && (param_2 != '\0')) && (param_3 == '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee584 == '\0') goto LAB_00132018;
  }
  cVar1 = DAT_fffee584;
LAB_00132018:
  *param_4 = cVar1;
  DAT_fffee584 = cVar1;
  return;
}

