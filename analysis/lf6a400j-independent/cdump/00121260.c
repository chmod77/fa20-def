
void FUN_00121260(byte param_1,char param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 <= DAT_fffee1e0) {
    uVar1 = DAT_fffee1e1;
  }
  if ((param_2 != '\0') || (param_3 != '\0')) {
    uVar1 = 1;
  }
  *param_4 = uVar1;
  DAT_fffee1e1 = uVar1;
  DAT_fffee1e0 = param_1;
  return;
}

