
void FUN_00129640(byte param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = DAT_fffee3b0;
  if ((2 < param_1) && (cVar1 = -1, DAT_fffee3b0 != -1)) {
    cVar1 = DAT_fffee3b0 + '\x01';
  }
  *param_2 = cVar1;
  DAT_fffee3b0 = cVar1;
  return;
}

