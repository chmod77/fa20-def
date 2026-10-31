
/* WARNING: Removing unreachable block (ram,0x000c238c) */

void FUN_000c236c(char param_1,byte param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  if ((param_1 != '\0') && ((DAT_fffec9ed == '\0' || (DAT_fffec9ee < param_2)))) {
    DAT_fffec9ec = 1;
  }
  *param_5 = DAT_fffec9ec;
  DAT_fffec9ee = param_2;
  DAT_fffec9ed = 1;
  return;
}

