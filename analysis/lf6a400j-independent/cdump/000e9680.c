
void FUN_000e9680(char param_1,undefined4 param_2,char param_3,char param_4,char param_5,
                 undefined4 param_6,char param_7,undefined1 *param_8)

{
  undefined1 uVar1;
  
  if ((((param_1 == '\0') || (param_3 == '\0')) || (param_4 == '\0')) ||
     (uVar1 = 1, param_5 != '\0')) {
    uVar1 = DAT_fffed434;
  }
  if (param_7 != '\0') {
    uVar1 = 0;
  }
  *param_8 = uVar1;
  DAT_fffed434 = uVar1;
  return;
}

