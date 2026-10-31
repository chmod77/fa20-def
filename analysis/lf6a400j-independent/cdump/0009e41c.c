
void FUN_0009e41c(char param_1,undefined1 *param_2)

{
  byte bVar1;
  
  if (param_1 != '\0') {
    *param_2 = DAT_fffec084 < 0x1e;
    bVar1 = 0xfe;
    if (DAT_fffec084 != 0xff) {
      bVar1 = DAT_fffec084;
    }
    DAT_fffec084 = bVar1 + 1;
    return;
  }
  *param_2 = 0;
  DAT_fffec084 = 0;
  return;
}

