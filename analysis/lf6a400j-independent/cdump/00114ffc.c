
void FUN_00114ffc(char param_1,char param_2,char param_3,int param_4,char param_5,
                 undefined1 *param_6)

{
  undefined1 uVar1;
  
  if ((((param_1 != '\x02') || (param_2 != '\x12')) || (param_3 != -0x80)) ||
     ((param_5 == '\0' || (uVar1 = 1, ((int)*(char *)(param_4 + 0x12) & 0x80U) != 0)))) {
    uVar1 = DAT_fffedf44;
  }
  if ((param_1 == '@') || (param_1 == '\x01')) {
    uVar1 = 0;
  }
  *param_6 = uVar1;
  DAT_fffedf44 = uVar1;
  return;
}

