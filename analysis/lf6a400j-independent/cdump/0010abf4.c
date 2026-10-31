
void FUN_0010abf4(char param_1,char param_2,ushort param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  if ((param_1 == '\0') || (uVar1 = 1, param_2 == '\0')) {
    uVar1 = DAT_fffedc8c;
  }
  if ((param_1 != '\0') && (param_2 != '\0')) {
    if ((param_3 < 0x29b) || (999 < param_3)) goto LAB_0010ac26;
  }
  uVar1 = 0;
LAB_0010ac26:
  *param_4 = uVar1;
  DAT_fffedc8c = uVar1;
  return;
}

