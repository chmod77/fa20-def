
void FUN_001295e8(char param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = DAT_fffee3a8;
  if ((param_1 != '\0') && (cVar1 = -1, DAT_fffee3a8 != -1)) {
    cVar1 = DAT_fffee3a8 + '\x01';
  }
  *param_2 = cVar1;
  DAT_fffee3a8 = cVar1;
  return;
}

