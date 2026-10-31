
/* WARNING: Removing unreachable block (ram,0x000e73e8) */
/* WARNING: Removing unreachable block (ram,0x000e73ec) */

void FUN_000e737c(char param_1,char param_2,undefined4 param_3,char param_4,undefined4 param_5,
                 ushort param_6,char param_7,char param_8,char param_9,undefined4 param_10,
                 undefined1 param_11,undefined1 *param_12)

{
  bool bVar1;
  
  bVar1 = true;
  if ((param_1 == '\0') || (param_2 != '\0')) {
    bVar1 = false;
  }
  if (param_7 == '\0') {
    if (((bVar1) && (0x7fff < param_6)) ||
       ((param_1 != '\0' && (((param_4 != '\0' && (param_8 != '\0')) && (param_9 == '\0')))))) {
      *param_12 = 1;
    }
    else {
      *param_12 = param_11;
    }
  }
  else {
    *param_12 = 0;
  }
  return;
}

