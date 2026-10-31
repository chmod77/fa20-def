
void FUN_001215f0(char param_1,char param_2,char *param_3)

{
  if (param_1 == '\0') {
    param_1 = DAT_fffee1f8;
  }
  if (param_2 != '\0') {
    param_1 = param_2 == '\0';
  }
  *param_3 = param_1;
  DAT_fffee1f8 = param_1;
  return;
}

