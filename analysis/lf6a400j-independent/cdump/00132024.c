
void FUN_00132024(char param_1,char param_2,char param_3,char *param_4)

{
  char cVar1;
  
  if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee588 == '\0') goto LAB_00132044;
  }
  cVar1 = DAT_fffee588;
LAB_00132044:
  *param_4 = cVar1;
  DAT_fffee588 = cVar1;
  return;
}

