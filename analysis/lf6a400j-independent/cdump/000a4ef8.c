
/* WARNING: Removing unreachable block (ram,0x000a4f24) */
/* WARNING: Removing unreachable block (ram,0x000a4f2e) */
/* WARNING: Removing unreachable block (ram,0x000a4f70) */

void FUN_000a4ef8(undefined4 param_1,undefined4 param_2,char param_3,char param_4,char param_5,
                 char param_6,char param_7,undefined1 param_8,undefined1 *param_9)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((param_6 != '\x03') && (param_6 != '\x04')) && (param_6 != '\x06')) && (param_6 != '\a')) {
    bVar1 = false;
  }
  if (param_7 == '\0') {
    if (((param_4 == '\x02') || (param_3 != '\0')) || (param_5 == '\n')) {
      *param_9 = 0;
      return;
    }
    if (bVar1) {
      *param_9 = 1;
      return;
    }
  }
  *param_9 = param_8;
  return;
}

