
/* WARNING: Removing unreachable block (ram,0x000ed2d8) */

char FUN_000ed2b4(char param_1,char param_2,undefined2 param_3,char param_4,undefined2 *param_5)

{
  if (((param_1 == '\x01') || (param_1 == '\x02')) || (param_1 = param_2, param_2 == '\x02')) {
    param_3 = 0x7fff;
    param_2 = param_1;
  }
  if (param_4 == '\0') {
    *param_5 = param_3;
    return param_2;
  }
  *param_5 = 0;
  return param_2;
}

