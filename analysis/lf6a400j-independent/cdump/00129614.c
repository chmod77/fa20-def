
void FUN_00129614(byte param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = DAT_fffee3ac;
  if ((2 < param_1) && (cVar1 = -1, DAT_fffee3ac != -1)) {
    cVar1 = DAT_fffee3ac + '\x01';
  }
  *param_2 = cVar1;
  DAT_fffee3ac = cVar1;
  return;
}

