
void FUN_0013300c(char param_1,char param_2,char param_3,char param_4,char *param_5)

{
  if (param_1 != '\0') {
    if (param_2 == '@') {
      DAT_fffee614 = '\0';
    }
    else {
      DAT_fffee614 = param_4;
      if (param_3 != '\0') {
        DAT_fffee614 = param_3;
      }
    }
  }
  if (param_1 != '\0') {
    *param_5 = DAT_fffee614;
    return;
  }
  *param_5 = '\0';
  return;
}

