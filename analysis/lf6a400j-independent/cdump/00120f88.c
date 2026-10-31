
void FUN_00120f88(byte param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_2 == '\0') {
    uVar1 = DAT_fffee1c0;
  }
  if (param_1 < 3) {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  DAT_fffee1c0 = uVar1;
  return;
}

