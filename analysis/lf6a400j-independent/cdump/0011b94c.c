
void FUN_0011b94c(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  
  if ((param_1 == '\0') || (uVar1 = 0, param_3 != '\0')) {
    uVar1 = DAT_fffee058;
  }
  if ((param_4 == '\0') && (param_1 != '\0')) {
    if (((param_1 != '\0') && (param_3 != '\0')) && (param_2 != '\0')) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  DAT_fffee058 = uVar1;
  return;
}

