
void FUN_00132f88(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,byte *param_8)

{
  if (param_7 == '\0') {
    DAT_fffee611 = '\0';
  }
  else {
    if (DAT_fffee611 == '\0') {
      DAT_fffee611 = '\x01';
    }
    DAT_fffee610 = 0;
    if (param_4 != '\0') {
      DAT_fffee610 = 4;
    }
    if (param_5 != '\0') {
      DAT_fffee610 = DAT_fffee610 | 8;
    }
    if (param_6 != '\0') {
      DAT_fffee610 = DAT_fffee610 | 0x10;
    }
    if (param_1 != '\0') {
      DAT_fffee610 = DAT_fffee610 | 0x20;
    }
    if (param_2 != '\0') {
      DAT_fffee610 = DAT_fffee610 | 0x40;
    }
    if (param_3 != '\0') {
      DAT_fffee610 = DAT_fffee610 | 0x80;
    }
  }
  if (param_7 == '\0') {
    *param_8 = 0;
  }
  else {
    *param_8 = DAT_fffee610;
  }
  return;
}

