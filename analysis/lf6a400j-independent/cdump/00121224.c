
void FUN_00121224(char param_1,char param_2,byte param_3,undefined1 *param_4)

{
  if ((param_2 == '\0') || (DAT_fffee1dd < param_3)) {
    DAT_fffee1dc = 0;
  }
  if ((param_2 != '\0') && (param_1 != '\0')) {
    DAT_fffee1dc = 1;
  }
  *param_4 = DAT_fffee1dc;
  DAT_fffee1dd = param_3;
  return;
}

