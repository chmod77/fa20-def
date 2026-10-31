
void FUN_00129698(char param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_1 != '\0') {
    cVar1 = -1;
    if (DAT_fffee3b8 != -1) {
      cVar1 = DAT_fffee3b8 + '\x01';
    }
  }
  *param_2 = cVar1;
  DAT_fffee3b8 = cVar1;
  return;
}

