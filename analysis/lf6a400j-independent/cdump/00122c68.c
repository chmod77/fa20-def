
void FUN_00122c68(char param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_1 == '\x03') {
    cVar1 = -1;
    if (DAT_fffee244 != -1) {
      cVar1 = DAT_fffee244 + '\x01';
    }
  }
  *param_2 = cVar1;
  DAT_fffee244 = cVar1;
  return;
}

