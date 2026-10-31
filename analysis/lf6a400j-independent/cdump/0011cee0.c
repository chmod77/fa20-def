
void FUN_0011cee0(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 == '\0') {
    uVar1 = DAT_fffee0ac;
  }
  if ((param_2 != '\0') || (param_3 != '\0')) {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  DAT_fffee0ac = uVar1;
  return;
}

