
void FUN_001208d4(byte param_1,char param_2,byte param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  undefined1 uVar1;
  
  if (param_2 != '\0') {
    uVar1 = 1;
    if (DAT_fffee195 < param_1) goto LAB_001208fa;
  }
  uVar1 = DAT_fffee194;
LAB_001208fa:
  if ((((DAT_fffee196 < param_3) || (param_1 == 0)) || (param_2 == '\0')) ||
     ((param_4 != '\0' || (param_5 != '\0')))) {
    uVar1 = 0;
  }
  *param_6 = uVar1;
  DAT_fffee196 = param_3;
  DAT_fffee195 = param_1;
  DAT_fffee194 = uVar1;
  return;
}

