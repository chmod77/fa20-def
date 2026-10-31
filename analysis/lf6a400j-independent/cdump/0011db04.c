
void FUN_0011db04(char param_1,undefined4 param_2,undefined4 param_3,byte param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  if ((DAT_fffee0c5 != '\x03') || (param_1 == '\x03')) {
    param_2 = param_3;
  }
  *param_6 = param_2;
  if (DAT_fffee0c4 < param_4) {
    *param_5 = 0x2f30;
  }
  else {
    *param_5 = param_2;
  }
  DAT_fffee0c5 = param_1;
  DAT_fffee0c4 = param_4;
  return;
}

