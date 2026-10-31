
void FUN_000cbb28(char param_1,ushort param_2,undefined1 *param_3)

{
  short sVar1;
  
  if (param_1 == '\0') {
    sVar1 = (param_2 & 0xff) - 10;
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    *param_3 = (char)sVar1;
    return;
  }
  *param_3 = 0xff;
  return;
}

