
void FUN_000d9b08(char param_1,char param_2,char param_3,short param_4,char param_5,
                 undefined1 *param_6)

{
  if (((((param_2 == '\0') && (param_1 != '\0')) && (DAT_fffecfbe != '\0')) &&
      (DAT_fffecfbd != '\0')) || ((param_2 != '\0' && (param_3 != '\0')))) {
    DAT_fffecfbc = 1;
  }
  DAT_fffecfbd = DAT_fffecfbe;
  if (((param_1 == '\0') && (param_2 == '\0')) ||
     ((param_2 != '\0' && (((param_3 == '\0' || (param_4 != 0)) || (param_5 == '\0')))))) {
    DAT_fffecfbc = 0;
  }
  *param_6 = DAT_fffecfbc;
  DAT_fffecfbe = param_1;
  return;
}

