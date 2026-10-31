
void FUN_0011bce4(char param_1,byte param_2,ushort param_3,undefined4 param_4,char param_5,
                 undefined1 *param_6)

{
  undefined1 uVar1;
  
  if ((param_1 == '\0') || (uVar1 = 1, 0x3200 < param_3)) {
    uVar1 = DAT_fffee064;
  }
  if (((param_5 != '\0') || (param_1 == '\0')) || ((param_1 != '\0' && (DAT_fffee065 < param_2)))) {
    uVar1 = 0;
  }
  *param_6 = uVar1;
  DAT_fffee064 = uVar1;
  DAT_fffee065 = param_2;
  return;
}

