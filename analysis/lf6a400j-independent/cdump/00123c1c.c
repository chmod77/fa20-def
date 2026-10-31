
void FUN_00123c1c(short param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 < 1) {
    uVar1 = DAT_fffee27c;
  }
  if (param_1 < -0x8000) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  DAT_fffee27c = uVar1;
  return;
}

