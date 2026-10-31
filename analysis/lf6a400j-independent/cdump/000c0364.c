
void FUN_000c0364(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((param_2 != '\0') && (((param_1 == '\x01' || (param_1 == '\x02')) || (param_3 != '\0')))) {
    uVar1 = 1;
  }
  *param_4 = uVar1;
  return;
}

