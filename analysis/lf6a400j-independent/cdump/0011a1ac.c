
/* WARNING: Removing unreachable block (ram,0x0011a20a) */

void FUN_0011a1ac(char param_1,char param_2,char param_3,undefined2 param_4,undefined4 param_5,
                 ushort param_6,undefined2 param_7,char param_8,undefined2 *param_9)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if ((param_8 == '\0') && (bVar1)) {
    if (((bVar1) && (param_3 != '\0')) && (0x1dff < param_6)) {
      *param_9 = param_4;
    }
    else {
      *param_9 = param_7;
    }
  }
  else {
    *param_9 = 0;
  }
  return;
}

