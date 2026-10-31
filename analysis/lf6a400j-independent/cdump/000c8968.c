
void FUN_000c8968(char param_1,byte param_2,byte param_3,byte *param_4)

{
  byte bVar1;
  
  if (param_1 != '\0') {
    bVar1 = param_2 + 1;
    if (0xfe < param_2) {
      bVar1 = 0xff;
    }
    DAT_fffecb20 = param_3;
    if (bVar1 < param_3) {
      DAT_fffecb20 = bVar1;
    }
  }
  *param_4 = DAT_fffecb20;
  return;
}

