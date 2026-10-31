
void FUN_0011034c(char param_1,byte param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  if ((DAT_fffedd28 == '\0') || (uVar1 = 1, param_2 <= DAT_fffedd2a)) {
    uVar1 = DAT_fffedd29;
  }
  if ((param_3 != '\0') || (param_1 == '\x01')) {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  DAT_fffedd29 = uVar1;
  DAT_fffedd2a = param_2;
  DAT_fffedd28 = 1;
  return;
}

