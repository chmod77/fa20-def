
/* WARNING: Removing unreachable block (ram,0x000ce58c) */

void FUN_000ce56c(byte param_1,undefined4 param_2)

{
  byte bVar1;
  
  if (DAT_fffecce4 == '\0') {
    bVar1 = 3;
  }
  else {
    bVar1 = 5;
  }
  *(bool *)param_2 = param_1 <= bVar1;
  DAT_fffecce4 = param_1 <= bVar1;
  return;
}

