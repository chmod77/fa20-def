
void FUN_000a3fbc(byte param_1,char param_2,undefined1 *param_3)

{
  bool bVar1;
  
  bVar1 = DAT_fffec2fd <= param_1;
  if ((bVar1) || (param_2 != '\0')) {
    if (((bVar1) && (param_2 != '\0')) || ((!bVar1 && (param_2 != '\0')))) {
      DAT_fffec2fc = param_2 == '\0';
    }
  }
  else {
    DAT_fffec2fc = 1;
  }
  *param_3 = DAT_fffec2fc;
  DAT_fffec2fd = param_1;
  return;
}

