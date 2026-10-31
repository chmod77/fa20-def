
void FUN_000c2588(char param_1,undefined1 *param_2)

{
  if ((param_1 == '\x01') || (param_1 == '\x03')) {
    DAT_fffeca00 = 0;
  }
  if (param_1 == '\x02') {
    DAT_fffeca00 = 1;
  }
  *param_2 = DAT_fffeca00;
  return;
}

