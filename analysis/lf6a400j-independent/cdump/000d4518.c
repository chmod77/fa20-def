
void FUN_000d4518(char param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_1 != '\0') {
    bVar1 = DAT_fffece58;
  }
  *param_2 = bVar1;
  if (param_1 != '\0') {
    if (0xfe < bVar1) {
      DAT_fffece58 = 0xff;
      return;
    }
    DAT_fffece58 = bVar1 + 1;
    return;
  }
  DAT_fffece58 = 0;
  return;
}

