
void FUN_001210a8(char param_1,char param_2,char param_3,ushort param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  
  if (((param_1 != '\0') || (param_2 != '\0')) || (uVar1 = 1, param_3 != '\0')) {
    uVar1 = DAT_fffee1d0;
  }
  if (param_4 < 100) {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  DAT_fffee1d0 = uVar1;
  return;
}

