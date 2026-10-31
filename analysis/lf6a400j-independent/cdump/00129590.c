
void FUN_00129590(char param_1,undefined1 *param_2)

{
  uint uVar1;
  
  if (param_1 == '\0') {
    uVar1 = (uint)(char)DAT_fffee3a0;
  }
  else {
    uVar1 = DAT_fffee3a0 + 1;
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
  }
  *param_2 = (char)uVar1;
  DAT_fffee3a0 = (char)uVar1;
  return;
}

