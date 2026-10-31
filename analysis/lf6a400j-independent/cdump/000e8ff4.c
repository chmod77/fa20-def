
void FUN_000e8ff4(char param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((((param_1 == '\0') && (DAT_fffed406 == '\0')) && (DAT_fffed405 == '\0')) &&
     (DAT_fffed404 == '\0')) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  DAT_fffed404 = DAT_fffed405;
  DAT_fffed405 = DAT_fffed406;
  DAT_fffed406 = param_1;
  return;
}

