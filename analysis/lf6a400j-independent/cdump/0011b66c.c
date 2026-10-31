
void FUN_0011b66c(char param_1,char param_2,char param_3,undefined4 param_4,undefined4 param_5,
                 ushort param_6,char param_7,undefined1 *param_8)

{
  undefined1 uVar1;
  
  if ((((param_1 == '\0') || (param_2 == '\0')) || (param_3 == '\0')) ||
     (uVar1 = 1, param_6 < 0x1e00)) {
    uVar1 = DAT_fffee044;
  }
  if (param_7 != '\0') {
    uVar1 = 0;
  }
  *param_8 = uVar1;
  DAT_fffee044 = uVar1;
  return;
}

