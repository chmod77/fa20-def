
void FUN_000e6b8c(char param_1,char param_2,undefined1 *param_3)

{
  if ((param_1 == '\x01') || (param_1 == '\x02')) {
    DAT_fffed374 = 1;
  }
  if (param_2 != '\0') {
    DAT_fffed374 = 0;
  }
  *param_3 = DAT_fffed374;
  return;
}

