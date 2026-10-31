
void FUN_00120fb4(byte param_1,byte param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if ((param_1 == 0) || (uVar1 = 1, 2 < param_2)) {
    uVar1 = DAT_fffee1c5;
  }
  if (DAT_fffee1c4 < param_1) {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  DAT_fffee1c5 = uVar1;
  DAT_fffee1c4 = param_1;
  return;
}

