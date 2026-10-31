
void FUN_00131a48(char param_1,char param_2,ushort param_3,char *param_4)

{
  char cVar1;
  
  if (((param_1 == '\0') && (param_2 != '\0')) && (0xfffe < param_3)) {
    cVar1 = '\x01';
    if (DAT_fffee524 == '\0') goto LAB_00131a70;
  }
  cVar1 = DAT_fffee524;
LAB_00131a70:
  *param_4 = cVar1;
  DAT_fffee524 = cVar1;
  return;
}

