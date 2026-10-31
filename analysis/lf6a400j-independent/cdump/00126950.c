
void FUN_00126950(char param_1,char param_2,short param_3,undefined1 *param_4)

{
  if (param_1 != '\0') {
    DAT_fffee2f0 = 0;
    if (param_3 != 16000) {
      DAT_fffee2f0 = DAT_fffee2f1;
    }
    if (param_2 != '\0') {
      DAT_fffee2f0 = 1;
    }
  }
  DAT_fffee2f1 = 0;
  if (param_1 != '\0') {
    DAT_fffee2f1 = DAT_fffee2f0;
  }
  *param_4 = DAT_fffee2f1;
  return;
}

