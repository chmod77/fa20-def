
void FUN_00131844(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    cVar1 = '\x01';
    if (DAT_fffee504 == '\0') goto LAB_0013185e;
  }
  cVar1 = DAT_fffee504;
LAB_0013185e:
  *param_3 = cVar1;
  DAT_fffee504 = cVar1;
  return;
}

