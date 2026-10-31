
void FUN_000efc64(char param_1,undefined4 param_2,undefined4 *param_3)

{
  if (((param_1 != '\x01') && (param_1 != '\x02')) && (param_1 != '\x04')) {
    *param_3 = param_2;
    return;
  }
  *param_3 = 0;
  return;
}

