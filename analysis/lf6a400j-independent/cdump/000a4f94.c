
char FUN_000a4f94(char param_1,undefined1 *param_2)

{
  if ((param_1 == '\x06') || (param_1 == '\a')) {
    DAT_fffec33c = 1;
  }
  if ((param_1 != '\x01') && (param_1 != '\x02')) {
    if ((param_1 == '\x03') || (param_1 == '\x04')) {
      DAT_fffec33c = 1;
      goto LAB_000a4fc8;
    }
    if (param_1 != '\x05') goto LAB_000a4fc8;
  }
  DAT_fffec33c = 0;
LAB_000a4fc8:
  *param_2 = DAT_fffec33c;
  return param_1;
}

